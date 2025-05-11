#include<bits/stdc++.h>
using namespace std;

// HDU 2021

int f(int m)
{
    // int a100=0,a50=0,a10=0,a5=0,a2=0,a1=0;
    //     a100=m/100;
    //     m-=a100*100;
    //     a50=m/50;
    //     m-=a50*50;
    //     a10=m/10;
    //     m-=a10*10;
    //     a5=m/5;
    //     m-=a5*5;
    //     a2=m/2;
    //     m-=a2*2;
    //     a1=m/1;
        // return a100+a50+a10+a5+a2+a1;
    int s[]={100,50,10,5,2,1},sum=0;
    for(int i=0;i!=6;++i)
    {
        sum+=m/s[i];
        m%=s[i];
    }
    return sum;
}

int main()
{
    int n=0;
    while(cin>>n&&n!=0)
    {
        int num=0;
        for(int i=0;i!=n;++i)
        {
            int m=0;
            cin>>m;
            num+=f(m);
        }
        cout<<num<<endl;
    }
    return 0;
}