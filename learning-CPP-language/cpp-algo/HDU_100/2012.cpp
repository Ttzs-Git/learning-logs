#include <bits/stdc++.h>
using namespace std;

// HDU 2012
bool is_primer(int n)
{
    int k=sqrt(n);
    if(n==1||n==0) return false;
    for(int i=2;i!=k+1;++i)
{
    if(n%i==0)
    return false;
}
return true;
}

int main()
{
    int x = 0, y = 0,flag=1;
    while(cin>>x>>y&&!(x==0&&y==0))
    {
        flag=1;
        for(int n=x;n!=y+1;n++)
        {
            if(!is_primer(n*n+n+41))
            {
                cout<<"Sorry"<<endl;
                flag=0;
                break;
            }

        }
        if(flag) cout<<"OK"<<endl;
    }
    return 0;
}