#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct TreeNode
{
    int val;
    int height = 0;
    TreeNode *left;
    TreeNode *right;
    TreeNode() = default;
    explicit TreeNode(int val) : val(val) {}
};

class AVLTree
{
private:
    TreeNode *root;

public:
    int height(TreeNode *p)
    {
        return p == nullptr ? -1 : p->height;
    }
    void upGrade(TreeNode *p)
    {
        p->height = max(height(p->left), height(p->right)) + 1;
    }
    int BalancedFactor(TreeNode *p)
    {
        if (p == nullptr)
        {
            return 0;
        }
        return height(p->left) - height(p->right);
    }
    TreeNode *rightRotate(TreeNode *p)
    {
        // 传入问题节点，传出修改后的情况
        TreeNode *child = p->left;
        TreeNode *grandchild = child->right;
        p->left = grandchild;
        child->right = p;
        upGrade(p);
        upGrade(child);
        upGrade(grandchild);
        return child;
    }
    TreeNode *leftRotate(TreeNode *p)
    {
        TreeNode *child = p->right;
        TreeNode *grandchild = child->left;
        p->right = grandchild;
        child->left = p;
        upGrade(child);
        upGrade(grandchild);
        upGrade(p);
        return child;
    }
    TreeNode *Rotata(TreeNode *p)
    {
        int factor = BalancedFactor(p);
        if (factor > 1)
        {
            // 需要右旋
            if (BalancedFactor(p->left) >= 0)
            {
                // 只需要
                return rightRotate(p);
            }
            else
            {
                p->left = leftRotate(p->left);
                return rightRotate(p);
            }
        }
        else if (factor < -1)
        {
            // 需要左旋
            if (BalancedFactor(p->right) <= 0)
            {
                return leftRotate(p);
            }
            else
            {
                p->right = rightRotate(p->right);
                return leftRotate(p);
            }
        }
        return p;
    }
    void insert(int val)
    {
        root = inserthelper(root, val);
    }
    TreeNode *inserthelper(TreeNode *p, int val)
    {
        if (p == nullptr)
        {
            return new TreeNode(val);
        }
        if (val < p->val)
        {
            p->left = inserthelper(p->left, val);
        }
        else if (val > p->val)
        {
            p->right = inserthelper(p->right, val);
        }
        else
            return p;
        upGrade(p);
        Rotata(p);
        return p;
    }
    void remove(int num)
    {
        root = removehelper(root, num);
    }
    TreeNode *removehelper(TreeNode *p, int num)
    {
        if (p == nullptr)
            return nullptr;
        if (num > p->val)
        {
            p->right = removehelper(p->right, num);
        }
        else if (num < p->val)
        {
            p->left = removehelper(p->left, num);
        }
        else
        {
            if (p->left == nullptr || p->right == nullptr)
            {
                TreeNode *child = p->left != nullptr ? p->left : p->right;
                if (child == nullptr)
                {
                    // 说明是叶节点
                    delete p;
                    return nullptr;
                }
                else
                {
                    delete p;
                    p = child;
                }
            }
            else
            {
                // 两个节点
                TreeNode *tep = p->right;
                while (tep->left != nullptr)
                {
                    tep = tep->left;
                }
                int tepval = tep->val;
                p->right = removehelper(p->right, tep->val);
                p->val = tepval;
            }
            upGrade(p);
            Rotata(p);
            return p;
        }
    }
};

int main()
{
    return 0;
}