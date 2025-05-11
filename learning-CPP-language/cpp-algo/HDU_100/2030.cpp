#include <bits/stdc++.h>
using namespace std;

// HDU 2030
int count(string &str)
{
    int eof=str.size();
    int num=0;
    for(int i=0;i!=eof;++i)
    {
        if(str[i]<0) num++; 
    }
    return num/3;
}

int main()
{
    int n;
    cin>>n;
    getchar();
    string str;
    while(n--)
    {
        getline(cin,str);
        cout<<count(str)<<endl;
    }
    return 0;
}