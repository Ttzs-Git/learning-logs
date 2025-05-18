#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

// HDU 2048

int main()
{
    int n = 0;
    cin >> n;
    vector<double> num(21);
    num[1] = 0;
    num[2] = 1;
    num[3] = 2;
    for (int i = 4; i < 21; ++i)
    {

        num[i] = (i - 1) * (num[i - 1] + num[i - 2]);
    }
    while (n)
    {
        int m = 0;
        cin >> m;
        long long sum = 1;
        for (int i = 1; i <= m; i++)
        {
            sum *= i;
        }
        printf("%.2f%%\n", num[m] * 100.0 / sum);
        n--;
    }
    return 0;
}