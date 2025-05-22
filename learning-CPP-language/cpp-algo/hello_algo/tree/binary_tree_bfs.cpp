#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

vector<int> levelOrder(TreeNode *root)
{
    queue<TreeNode *> queue;
    queue.push(root);
    vector<int> vint;
    while (!queue.empty())
    {
        TreeNode *p = queue.front();
        queue.pop();
        if (p->left != nullptr)
        {
            queue.push(p->left);
        }
        else if (p->right != nullptr)
        {
            queue.push(p->right);
        }
        vint.push_back(p->val);
        delete p;
    }
    return vint;
}

int main()
{
    return 0;
}