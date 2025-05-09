#include<iostream>
#include<cmath>
using namespace std;

//HDU 2010

int main()
{
    int m,n,num=0;//一定是三位数
    while(cin>>m>>n){
        num=0;
    for(int i=m;i!=n+1;++i)
    {
        
        int g=i%10,s=i/10%10,b=i/100;
        if(pow(g,3)+pow(s,3)+pow(b,3)==i)
        {
            cout<<i<<" ";
            num++;
        }
    }
    
    if(num==0) cout<<"no";
    cout<<endl;
}
    return 0;
}