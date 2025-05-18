#include <iostream>
#include <vector>
using namespace std;

// HDU 2046

int main()
{
    int n = 0;
    vector<long long> vint(50);
    vint[0] = 1;
    vint[1] = 2;
    for (int i = 2; i != 50; ++i)
    {
        vint[i] = vint[i - 1] + vint[i - 2];
    }
    while (cin >> n)
    {
        cout << vint[n - 1] << endl;
    }
    return 0;
}