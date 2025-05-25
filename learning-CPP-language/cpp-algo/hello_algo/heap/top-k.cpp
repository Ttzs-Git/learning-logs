#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

// Top-k问题

vector<int> topk1(vector<int> &p, int k)
{
    vector<int> ans;
    vector<int> tep = p;
    for (int i = 0; i < k; ++i)
    {
        int maxn = i + 1;
        for (int j = i; j < tep.size(); ++j)
        {
            if (tep[maxn] < tep[j])
            {
                maxn = j;
            }
        }
        swap(tep[maxn], tep[i]);
        ans.push_back(tep[i]);
    }
    return ans;
}

vector<int> topk2(vector<int> &p, int k)
{
    vector<int> ans = p;
    sort(ans.rbegin(), ans.rend());
    for (int i = p.size() - 1; i >= k; i--)
    {
        ans.pop_back();
    }
    return ans;
}

priority_queue<int, vector<int>, less<int>> topk3(vector<int> &p, int k)
{
    priority_queue<int, vector<int>, less<int>> ans;
    for (int i = 0; i < k; i++)
    {
        ans.push(p[i]);
    }
    for (int i = k; i < p.size(); i++)
    {
        if (p[i] > ans.top())
        {
            ans.pop();
            ans.push(p[i]);
        }
    }
    return ans;
}

template <typename T, typename t>
void print(T p)
{
    for (t a : p)
    {
        cout << a << endl;
    }
}

int main()
{
    int k = 5;
    vector<int> vint{7, 8, 3, 5, 6, 9, 10, 13, 16, 19};
    // print(topk3(vint, k));
    return 0;
}