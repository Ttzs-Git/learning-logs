#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

int main()
{
    // 初始化二叉树
    TreeNode *n1 = new TreeNode(1);
    TreeNode *n2 = new TreeNode(2);
    TreeNode *n3 = new TreeNode(3);
    TreeNode *n4 = new TreeNode(4);
    TreeNode *n5 = new TreeNode(5);
    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    // 节点的插入
    TreeNode *p = new TreeNode(0);
    n1->left = p;
    p->left = n2;
    // 节点的删除
    n1->left = n2;
    delete p;
    return 0;
}