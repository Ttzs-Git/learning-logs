#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};
vector<int> vint;
void preOrder(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    vint.push_back(root->val);
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    inOrder(root->left);
    vint.push_back(root->val);
    inOrder(root->right);
}

void postOrder(TreeNode *root)
{
    if (root == nullptr)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    vint.push_back(root->val);
}

int main()
{
    return 0;
}