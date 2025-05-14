#include <iostream>
#include <cmath>
using namespace std;

// HDU 2040
int zys1(int a)
{
    int ans = 0;
    for (int i = 1; i <= a / 2; i++)
    {
        if (a % i == 0)
            ans += i;
    }
    return ans;
}
int zys(int a)
{
    int ans = 1;
    for (int i = 2; i * i <= a; i++)
    {
        if(a%i==0)
        {   ans += i;
            if (i*i!=a)
                ans += a / i;
            }    
    }
    return ans;
}

bool check(int a, int b)
{
    if (zys(a) == b && zys(b) == a)
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a = 0, b = 0;
        cin >> a >> b;
        if (check(a, b))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}