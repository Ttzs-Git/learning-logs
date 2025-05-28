#include <iostream>
using namespace std;

// HDU 2055

int f(char a)
{

    if (a >= 'A' && a <= 'Z')
        return a - 'A'+1;
    else
    {
        return -a + 'a'-1;
    }
}
int main()
{
    int n = 0;
    cin >> n;
    while (n--)
    {
        char a;
        long double m = 0;
        cin >> a;
        cin >> m;
        cout << f(a) + m << endl;
    }
    return 0;
}