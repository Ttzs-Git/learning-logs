#include<iostream>
#include<vector>
using namespace std;

// HUD2047

int main()
{
    int n=0;
    vector<long long> vint(40);
    vint[0]=3;vint[1]=8;
    for(int i=2;i!=40;i++)
    {
        vint[i]=2*(vint[i-1]+vint[i-2]);
    }
    while(cin>>n)
    {
        cout<<vint[n-1]<<endl;
    }
    return 0;
}