#include <iostream>
#include <string>
#include <stack>
#include <cctype>
using namespace std;

// HDU 2057

int index(char p)
{
    if (p < 'A')
    {
        return p - '0';
    }
    else
    {
        return p - 'A' + 10;
    }
}
int simple(string &p)
{
    if (p[0] == '-')
    {
        p.erase(p.begin());
        return -1;
    }
    else if (p[0] == '+')
    {
        p.erase(p.begin());
    }
    return 1;
}

int cmp(string a, string b)
{
    // >0 1
    // =0 0
    // <0 -1
    if (a.size() != b.size())
    {
        return a.size() > b.size() ? 1 : -1;
    }
    else
    {
        // a和b等长度
        while (a[0] == b[0] && !a.empty())
        {
            a.erase(a.begin());
            b.erase(b.begin());
        }
        if (a.empty())
        {
            return 0; // 等长
        }
        return a[0] > b[0] ? 1 : -1;
    }
}
string simply(string a)
{
    if (a == "0")
        return a;
    string ans; 
    if (a[0] == '+' || a[0] == '-')
    {
        ans.push_back(a[0]);
        a.erase(a.begin());
    }
    bool k = true;
    while (!a.empty())
    {
        // 001010
        if (k && a[0] == '0')
        {
        }
        else
        {
            k = false;
            ans.push_back(a[0]);
        }
        a.erase(a.begin());
    }
    return ans;
}
string myadd(string &a, string &b)
{
    const string H = "0123456789ABCDEF";
    string ans;
    if (a[0] == '0' || b[0] == '0')
        return a[0] == '0' ? b : a;
    // a不为0 b不为0
    stack<char> sc;
    int a0 = simple(a);
    int b0 = simple(b);

    int re = 0;
    int mn = 0;
    int in = 0;
    if (a0 * b0 > 0)
    {
        // 处理前导符号
        if (a0 < 0)
            ans.push_back('-');

        if (a.size() > b.size())
            swap(a, b); // a min size
        int beof = b.size() - 1;
        int aeof = a.size() - 1;
        while (isalnum(b[beof]))
        {

            if (aeof >= 0 && isalnum(a[aeof]))
            {
                in = (index(a[aeof]) + index(b[beof])) + mn;
            }
            else
            {
                in = (index(b[beof])) + mn;
            }
            re = in % 16;
            mn = in / 16;
            sc.push(H[re]);
            beof--;
            aeof--;
        }
        if (mn != 0)
        {
            sc.push(H[mn]);
        }
        while (!sc.empty())
        {
            char a = sc.top();
            ans.push_back(a);
            sc.pop();
        }
    }
    else
    {
        // 处理减法的情况
        // 判断绝对值的大小
        // a和b都是纯数无符号
        // 符号处理
        int s = cmp(a, b);
        int s0 = s * a0;
        if (!s)
        {
            return "0";
        }
        else if (s < 0)
        { // a<b
            swap(a, b);
        } // a>b
        if (s0 < 0)
            ans.push_back('-');
        // 计算绝对值
        int aeof = a.size() - 1; // a max
        int beof = b.size() - 1; // b min
        in = 0, re = 0, mn = 0;
        // 计算大数-小数
        while (isalnum(a[aeof]))
        {
            if (isalnum(b[beof]) && beof >= 0)
            {
                if (a[aeof] >= b[beof])
                {
                    in = index(a[aeof]) - index(b[beof]) + mn;

                    mn = in / 16;
                }
                else
                {
                    in = index(a[aeof]) - index(b[beof]) + mn + 16;

                    mn = in / 16 - 1;
                }
            }
            else
            {
                in = index(a[aeof]) + mn;
                mn = in / 16;
            }
            re = in % 16;
            sc.push(H[re]);
            aeof--;
            beof--;
        }
        if (mn != 0)
        {
            sc.push(H[mn]);
        }
        while (!sc.empty())
        {
            char a = sc.top();
            sc.pop();
            ans.push_back(a);
        }
    }
    return simply(ans);
}
int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        cout << myadd(a, b) << endl;
    }
    return 0;
}