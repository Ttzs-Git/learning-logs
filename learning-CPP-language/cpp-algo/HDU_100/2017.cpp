#include <bits/stdc++.h>
using namespace std;

// HDU 2017
int main()
{
    int n = 0;
    while (cin >> n)
    {
        string str;
        for (int i = 0; i < n; ++i)
        {
            cin >> str;
            int eof = str.size(), count = 0;
            for (int j = 0; j != eof; ++j)
            {
                if ((str[j]) >= '0' && (str[j]) <= '9')
                {
                    count++;
                }
                // if(isdigit(str[j])) count++;
            }
            cout << count << endl;
        }
    }
    return 0;
}