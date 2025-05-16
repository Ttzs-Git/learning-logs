#include<iostream>
#include<vector>
using namespace std;

// HDU 2044

int main()
{
    int n=0;
    cin>>n;
    vector<long long> vint(60);
    for(int i=1;i<=56;++i)
    {
        if(i==1||i==2) vint[i]=1;
        else vint[i]=vint[i-1]+vint[i-2];
    }
    while(n--)
    {
        int a=0,b=0;
        cin>>a>>b;
        cout<<vint[b-a+1]<<endl;
    }
    return 0;
}