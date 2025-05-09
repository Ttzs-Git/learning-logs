#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

//HDU 2009
int main()
{
    int  n,m;
    while(cin>>n>>m)
    {
        double sum=0,item=n;
        for(int i=0;i!=m;++i)
        {

            sum+=item;
            item=sqrt(item);
        }
        printf("%.2f\n",sum);
    }
    return 0;
}