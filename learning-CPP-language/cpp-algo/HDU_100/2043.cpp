#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// HDU 2043
bool issafe(string m)
{
    vector<int> vint(4);
    if(!(m.size()>=8&&m.size()<=16)) return false; 
    for(char ch:m)
    {
        if(ch>='0'&&ch<='9') vint[0]++;//可设置为1
        else if(ch>='A'&&ch<='Z') vint[1]++;
        else if(ch>='a'&&ch<='z') vint[2]++;
        else vint[3]++;
    }
    if(count(vint.begin(),vint.end(),0)<=1) return true;
    else return false;
}

int main()
{
    int n=0;
    cin>>n;
    while(n--)
    {
        string num;
        cin>>num;
        if(issafe(num)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}