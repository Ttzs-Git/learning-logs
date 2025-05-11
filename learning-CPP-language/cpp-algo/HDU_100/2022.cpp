#include<bits/stdc++.h>
using namespace std;

// HDU 2022

int main()
{
    int n=0,m=0;
    while(cin>>m>>n)
    {
        int x=0,y=0,s;
        int inp=0;
        bool in=true;
        for(int i=0;i!=m;++i)
        {
            for(int j=0;j!=n;++j)
            {
                cin>>inp;
                if(in) 
                {
                    s=inp;
                    in=false;
                }
                if(abs(inp)>abs(s))
                {
                    s=inp;
                    x=i;
                    y=j;
                }
            }
        }
        cout<<x+1<<" "<<y+1<<" "<<s<<endl;
    }
    return 0;
}