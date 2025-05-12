#include <bits/stdc++.h>
using namespace std;

// HDU 2032
void sjx(long long n)
{
    vector<vector<long long>> vll;
    for (int i = 0; i != n; ++i)
    {
        vector<long long> vl;
        vl.clear();
        for (int j = 0; j != i + 1; ++j)
        {
            if (j == 0 || j == i)
                vl.push_back(1);
            else
                vl.push_back(vll[i - 1][j - 1] + vll[i - 1][j]);
            cout << vl[j];
            if (j != i)
                cout << " ";
            else
                cout << endl;
        }
        vll.push_back(vl);
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        sjx(n);
        cout << endl;
    }
    return 0;
}