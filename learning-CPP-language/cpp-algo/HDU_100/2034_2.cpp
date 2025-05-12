#include <bits/stdc++.h>
using namespace std;

// HDU2034
bool check(int n, vector<int> &vector2)
{
    return find(vector2.begin(), vector2.end(), n) != vector2.end();
}

int main()
{
    int n = 0, m = 0;
    while (cin >> n >> m && !(m == 0 && n == 0))
    {
        vector<int> vector1;
        vector<int> vector2;
        for (int i = 0; i != n; i++)
        {
            int num = 0;
            cin >> num;
            vector1.push_back(num);
        }
        for (int i = 0; i != m; ++i)
        {
            int num = 0;
            cin >> num;
            vector2.push_back(num);
        }
        while (n)
        {
            n--;
            if (check(vector1[n], vector2))
            {
                vector1.erase(vector1.begin() + n);
            }
        }
        if (vector1.empty())
            cout << "NULL" << endl;
        else
        {
            sort(vector1.begin(), vector1.end());
            for (auto num : vector1)
            {
                cout << num << " ";
            }
            cout << endl;
        }
    }
    return 0;
}