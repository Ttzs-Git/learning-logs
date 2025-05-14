#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// HDU 2039
bool check(vector<double> &vint)
{
    if(vint[0]<=0||vint[1]<=0||vint[2]<=0) return false;
    sort(vint.begin(),vint.end());
    if(vint[0]+vint[1]>vint[2]) return true;
    else return false;
}

int main()
{
    int m=0;
    cin>>m;
    while(m--)
    {
        vector<double> vint;
        vint.clear();
        for(int i=0;i!=3;++i)
        {
            double num;
            cin>>num;
            vint.push_back(num);
        }
        if(check(vint))
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}