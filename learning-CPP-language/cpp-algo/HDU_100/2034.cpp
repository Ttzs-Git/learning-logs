#include<bits/stdc++.h>
using namespace std;

// HDU 2034

int main()
{
    set<int> set1;
    int n=0,m=0;
    while(cin>>n>>m&&(n!=0||m!=0))
    {
        set1.clear();
        for(int i=0;i!=n;i++)
        {
            int num=0;
            cin>>num;
            set1.insert(num);
        }
        for(int i=0;i!=m;++i)
        {
            int num=0;
            cin>>num;
            if(set1.find(num)!=set1.end())
            {set1.erase(num);}
        }
        if(set1.empty()) printf("NULL\n");
        else{
        for(auto it=set1.begin();it!=set1.end();it++)
        {
            cout<<*it<<" ";   
        }
        cout<<endl;
    }
    }
    return 0;
}