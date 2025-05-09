#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    return abs(a)>abs(b);
}

// HDU2020
void my_sort(vector<int> &vint)
{
    int i=0,eof=vint.size();
    for(int i=0;i<eof;++i)
    {
        for(int j=i+1;j<eof;++j)
        {
            if(abs(vint[j])>abs(vint[i]))
            {
                int tem=vint[j];
                vint[j]=vint[i];
                vint[i]=tem;
            }
        }
    }
}

int main()
{
    int n=0;
    while(cin>>n)
    {
        vector<int> vint;
        for(int i=0;i!=n;++i)
        {
            int j=0;
            cin>>j;
            vint.push_back(j);
            
        }
        // my_sort(vint);
        sort(vint.begin(),vint.end(),cmp);
        for(int i=0;i!=n;++i)
        {
            cout<<vint[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}