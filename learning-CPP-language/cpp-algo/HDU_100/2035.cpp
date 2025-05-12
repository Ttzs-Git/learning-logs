#include<bits/stdc++.h>
using namespace std;

// HDU 2035

int main()
{
    int a=0,b=0;
    while(cin>>a>>b&&(a!=0||b!=0))
    {
        long long s=pow(a,b);
        s%=1000;
        if(s>=0) printf("%lld\n",s);
        else printf("1\n");
    }
    return 0;
}