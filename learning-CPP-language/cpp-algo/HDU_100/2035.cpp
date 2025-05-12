#include<bits/stdc++.h>
using namespace std;

// HDU 2035
int dd(int a,int b)
{
    int ans=1;
    for(int i=0;i!=b;i++)
    {
        ans*=a;
        ans%=1000;
    }
    return ans;
}


int main()
{
    int a=0,b=0;
    while(cin>>a>>b&&(a!=0||b!=0))
    {
        // long long s=pow(a,b);
        // s%=1000;
        // if(s>=0) printf("%lld\n",s);
        // else printf("1\n");
        printf("%d\n",dd(a,b));
    }
    return 0;
}