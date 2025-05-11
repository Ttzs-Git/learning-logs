#include <bits/stdc++.h>
using namespace std;

// HDU 2028

int LCM(vector<int> &vint)
{
    //两个数的最小公倍数是两个数的积/最大公约
    int eof=vint.size();
    for(int i=0;i!=eof-1;++i)
    {   
        vint[i+1]=(vint[i]*1LL*vint[i+1])/gcd(vint[i],vint[i+1]);
    }
    return vint[eof-1];
}

int main()
{
    int n = 0;
    while (cin>>n)
    {
        vector<int> vint;
        for (int i = 0; i != n; ++i)
        {
            int num = 0;
            cin >> num;
            vint.push_back(num);
        }
        cout << LCM(vint)<<endl;
        
    }
    return 0;
}