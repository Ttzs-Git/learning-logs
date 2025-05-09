//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//HDU 2008

int main()
{
    int count[]={0,0,0};
    int n=0;
    while(cin>>n)
    {
        count[0]=0;
        count[1]=0;
        count[2]=0;
        if(n!=0&&n<100){
        double m=0;
        for(int i=0;i!=n;++i)
        {
            cin>>m;
            count[0*(m<0)+1*(m==0)+2*(m>0)]++;
        }
        cout<<count[0]<<" "<<count[1]<<" "<<count[2]<<endl;
    }
    else break;
}
    return 0;
}