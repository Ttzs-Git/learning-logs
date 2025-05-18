#include <iostream>
#include <vector>
using namespace std;

// HDU 2050
int main()
{
    int n = 0;
    cin >> n;
    vector<long long> p(10000);
    p[0] = 2;
    p[1] = 7;
    for (int i = 2; i < 10000; ++i)
    {
        p[i] = p[i - 1] + 4 * i + 1;
    }
    while (n--)
    {
        int m = 0;
        cin >> m;

        cout << p[m - 1] << endl;
    }
    return 0;
}