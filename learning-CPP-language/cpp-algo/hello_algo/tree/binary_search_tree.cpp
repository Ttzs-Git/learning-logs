#include <iostream>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

class BinarySearchTree
{
private:
    TreeNode *tree;

public:
    TreeNode *search(int num)
    {
        TreeNode *p = tree;
        while (p != nullptr)
        {
            if (p->val > num)
            {
                p = p->left;
            }
            else if (p->val < num)
            {
                p = p->right;
            }
            else
                break;
        }
        return p;
    }

    void insert(int num)
    {
        if (tree == nullptr)
        {
            TreeNode *p = new TreeNode(num);
            tree = p;
            delete p;
        }
        TreeNode *cur = tree, *pre;
        while (cur != nullptr)
        {
            if (cur->val == num)
            {
                break;
            }
            pre = cur;
            if (cur->val > num)
            {
                cur = cur->left;
            }
            else if (cur->val < num)
            {
                cur = cur->right;
            }
        }
        TreeNode *p = new TreeNode(num);
        if (p->val > num)
        {
            p->left = p;
        }
        else
            p->right = p;
        delete p;
    }

    void remove(int num)
    {
        if (tree == nullptr)
            return;
        TreeNode *cur = tree, *pre = nullptr;
        while (cur != nullptr)
        {
            pre = cur;
            if (cur->val > num)
            {
                cur = cur->left;
            }
            else if (cur->val < num)
            {
                cur = cur->right;
            }
            else
                break;
        }
        if (cur == nullptr)
        {
            // 没有num
            return;
        }
        if (cur->left == nullptr || cur->right == nullptr)
        {
            TreeNode *child = cur->left != nullptr ? cur->left : cur->right;
            if (pre->left == cur)
            {
                pre->left = child;
            }
            else if (pre->right == cur)
            {
                pre->right = child;
            }
            else if (cur == tree)
            {
                tree = child;
            }
            delete cur;
        }
        else
        {
            // 都有节点
            TreeNode *p = cur->right;
            while (p ->left!= nullptr)
            {
                p = p->left;
            }
            cur->val = p->val;
            delete p;
        }
    }
};

int main()
{
    return 0;
}