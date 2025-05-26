#include <iostream>
using namespace std;

// HDU 2054
bool s(long long a, long long b)
{
    int ra = 0, rb = 0;
    while (a != 0 && b != 0)
    {
        ra = a % 10;
        rb = b % 10;
        if (ra != rb)
            return false;
        a/=10;
        b/=10;
    }
    if (a == b)
        return true;
    else
        return false;
}
int main()
{
    long long a = 0, b = 0;
    while (cin >> a >> b)
    {
        cout << (s(a, b)?"YES":"NO" )<< endl;
    }
    return 0;
}