#include<bits/stdc++.h>
using namespace std;

// HDU 2016

int main()
{
    int n=0;
    while(cin>>n&&n!=0)
    {
        vector<int> vint;
        int min_;
        int k=0;//位置
        for(int i=0;i<n;++i)
        {
            int m=0;
            cin>>m;
            vint.push_back(m);
            if(i==0) min_=m;
            else
            {
                if(m<min_)
                 {min_=m;
                 k=i;//记录位置
                 }
            }
        }
        swap(vint[0],vint[k]);
        for(int i=0;i<n;++i)
        {
            cout<<vint[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}