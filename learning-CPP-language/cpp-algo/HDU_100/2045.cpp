#include <iostream>
#include <vector>
using namespace std;

// HDU 2045

// long ans(int n)
// {
//     if(n==1) return 3;
//     else if(n==2||n==3) return 3*2;
//     else return ans(n-1)+ans(n-2)*2;//第n-1个满足--n-1和1不同；第n-2个满足n-1不满足
// }

int main()
{
    int n = 0;
    vector<long long> vint(51);
    vint[0] = 3;
    vint[1] = 6;
    vint[2] = 6;
    for (int i = 3; i <= 50; ++i)
    {
        vint[i] = vint[i - 1] + vint[i - 2] * 2;
    }
    while (cin >> n)
    {
        cout << vint[n - 1] << endl;
    }
    return 0;
}