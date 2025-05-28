#include <iostream>
#include <string>
using namespace std;

// HDU 2054
string simply(string a)
{
    int i = 0;
    while (i < a.size() && a[0] == '0')
    {
        a.erase(a.begin());
    }
    return a;
}
bool Equal(string s1, string s2)
{
    if (s1[0] == '-' || s2[0] == '-')
    {
        if (s1[0] == s2[0])
        {
            s1.erase(s1.begin());
            s2.erase(s2.begin());
        }
        else
        {
            return false;
        }
    }

    s1 = simply(s1);
    s2 = simply(s2);
    int eof = min(s1.size(), s2.size());
    int max_s = max(s1.size(), s2.size());
    for (int i = 0; i != eof; ++i)
    {
        if (s1[i] != s2[i])
        {
            // 对于普通整数无问题
            // 对于全部是浮点数没问题
            return false;
        }

        string s = s1.size() == max_s ? s1 : s2;
        for (int i = eof; i < max_s; ++i)
        {
            if (s[i] == '.')
            {
                continue;
            }
            if (s[i] != '0')
                return false;
        }
        return true;
    }
}
int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        cout << (Equal(a, b) ? "YES" : "NO") << endl;
    }
    return 0;
}