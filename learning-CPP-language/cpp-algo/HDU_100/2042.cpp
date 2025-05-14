#include<iostream>
using namespace std;

// HDU 2042
int s(int m)
{
    int ans=3;
    for(int i=1;i<=m;i++)
    {
        ans=2*(ans-1);
    }
    return ans;
}


int main()
{
    int n=0;
    cin>>n;
    while(n--)
    {
        int num=0;
        cin>>num;
        cout<<s(num)<<endl;
    }
    return 0;
}