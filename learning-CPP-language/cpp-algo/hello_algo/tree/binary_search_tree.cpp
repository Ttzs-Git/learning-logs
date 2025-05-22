#include <iostream>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

TreeNode *tree;

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

int main()
{
    return 0;
}