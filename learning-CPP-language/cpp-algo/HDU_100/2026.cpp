#include<bits/stdc++.h>
using namespace std;

// HDU 2026

string upper(string s)
{
    
    int eof=s.size();
    bool u=false;
    if(eof!=0&&isalpha(s[0])) s[0]=toupper(s[0]);
    for(int i=0;i!=eof;++i)
    {
        if(isspace(s[i]))
        {
            u=true;
        }
        if(u&&isalpha(s[i]))
        {
            s[i]=toupper(s[i]);
            u=false;
        }

    }
    return s;
}

int main()
{
    string str;
    while(getline(cin,str))
    {
        cout<<upper(str)<<endl;
    }
    return 0;
}