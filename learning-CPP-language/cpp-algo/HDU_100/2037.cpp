#include <bits/stdc++.h>
using namespace std;

// HDU 2037
bool cmp(vector<int> show1,vector<int> show2)
{
    return show1[1]<show2[1];
}

int main()
{
    int n=0;
    while(cin>>n&&n!=0)
    {
        int s=0,e=0;
        vector<vector<int>> show;
        vector<int> show0;
        for(int i=0;i!=n;++i)
        {
            show0.clear();
            for(int j=0;j!=2;++j)
            {
            int num=0;
            cin>>num;
            show0.push_back(num);
            }
            show.push_back(show0);
            
        }
        sort(show.begin(),show.end(),cmp);
        int flag=1,k=0;
        for(int i=0;i!=n;++i)
        {
            if(show[k][1]<=show[i][0])
            {
                k=i;
                ++flag;
            }
        }
        cout<<flag<<endl;
    }
    return 0;
}