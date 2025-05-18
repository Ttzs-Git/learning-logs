#include <iostream>
#include <vector>
using namespace std;

// HDU 2049
// long long fac(int m)
// {
//     long long sum = 1;
//     for (int i = 1; i <= m; i++)
//         sum *= i;
//     return sum;
// }
int main()
{
    int x = 0;
    cin >> x;
    vector<long long> vi(21);
    // vi[1] = 0;
    // vi[2] = 1;
    // for (int i = 3; i < 21; ++i)
    // {
    //     vi[i] = (i - 1) * (vi[i - 1] + vi[i - 2]);
    // }
    while (x--)
    {

        int n = 0, m = 0; // n>m
        cin >> n >> m;
        vi.resize(m + 1);
        vi[1] = 0;
        vi[2] = n * (n - 1) / 2;
        for (int i = 3; i <= m; ++i)
        {
            vi[i] = (i - 1) * (vi[i - 1] + vi[i - 2]);
        }

        // cout << fac(n) / fac(m) / fac(n - m) * vi[m] << endl;
    }
    return 0;
}