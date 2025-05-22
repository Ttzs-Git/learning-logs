#include <iostream>
#include <vector>
using namespace std;

class ArrayBinaryTree
{
private:
    vector<int> tree;
    void dfs(int i, string order, vector<int> &res)
    {

        if (val(i) == __INT_MAX__)
        {
            return;
        }
        if (order == "pre")
        {
            res.push_back(val(i));
        }
        dfs(left(i), order, res);
        if (order == "in")
        {
            res.push_back(val(i));
        }
        dfs(right(i), order, res);
        if (order == "post")
        {
            res.push_back(val(i));
        }
    }

public:
    ArrayBinaryTree(vector<int> &root)
    {
        tree = root;
    }
    ~ArrayBinaryTree()
    {
    }
    int size()
    {
        return tree.size();
    }
    int val(int num)
    {
        if (num < 0 || num > tree.size())
        {
            return __INT_MAX__;
        }
        return tree[num];
    }
    int left(int num)
    {
        return 2 * num + 1;
    }
    int right(int num)
    {
        return 2 * num + 2;
    }
    int parent(int num)
    {
        return (num - 1) / 2;
    }
    vector<int> bfs()
    {
        vector<int> vint;
        for (int p : tree)
        {
            if (p != __INT_MAX__)
            {
                vint.push_back(p);
            }
        }
        return vint;
    }
    vector<int> preOrder()
    {
        vector<int> pre;
        dfs(0, "pre", pre);
        return pre;
    }
    vector<int> inOrder()
    {
        vector<int> in;
        dfs(0, "in", in);
        return in;
    }
    vector<int> postOrder()
    {
        vector<int> post;
        dfs(0, "post", post);
        return post;
    }
};

int main()
{
    vector<int> tree{1, 2, 3, 4, __INT_MAX__, 6, 7, 8, 9, __INT_MAX__, __INT_MAX__, 12, __INT_MAX__, __INT_MAX__, 15};

    return 0;
}