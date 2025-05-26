#include <iostream>
using namespace std;

// HDU 2053
bool s(int n)
{
    bool ans = false;
    for (int i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
        {
            ans = !ans;
        }
    }
    return ans;
}

int main()
{
    int n = 0;
    while (cin >> n)
    {
        cout << s(n) << endl;
    }
    return 0;
}