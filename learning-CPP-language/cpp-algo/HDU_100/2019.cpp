#include<bits/stdc++.h>
using namespace std;

// HDU 2019

int main()
{
    int n=0,m=0;
    while(cin>>n>>m&&(n!=0&&m!=0))
    {
        // vector<int> vint;
        // for(int i=0;i<n;++i)
        // {
        //     int k,l;
        //     cin>>k;
        //     vint.push_back(k);
            
        // }
        // vint.push_back(m);
        // sort(vint.begin(),vint.end());
        // for(int i=0;i<n+1;++i)
        // {
        //     cout<<vint[i]<<" ";
        // }
        // cout<<endl;
        //vector<int> vint; 
        int flag=1;//输出开关
        for(int i=0;i<n;++i)
        {
            int num=0;
            cin>>num;
           
            if(flag&&m<=num)
            {
                cout<<m<<" "<<num<<" ";
                flag=0;
            }
            else if(flag&&m>num)
            {
                if(i==n-1) cout<<num<<" "<<m<<endl;
                else cout<<num<<" ";
            }
            else 
            {
                cout<<num<<" ";
            }
           
            
            
        }
        cout<<endl;
    }
    return 0;
}