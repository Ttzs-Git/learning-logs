#include<bits/stdc++.h>
using namespace std;

// HDU 2013

int f(int n)
{
    return (n+1)*2;
}

int main()
{
    int n=0;
    while(cin>>n)
    {
        int sum=1;
        for(;n!=1;--n)
        {
            sum=f(sum);
        }
        cout<<sum<<endl;
    }
    return 0;
}