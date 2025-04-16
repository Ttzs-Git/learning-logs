#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool is_big(const string &s)
{
    auto n=s.size();
    for(decltype(n) i=0;i!=s.size();++i)
    {
        if(s[i]>='A' && s[i]<='Z')
            return 1;
    }
    return 0;
}

string to_upper(const string &s)
{
    string m=s;
    for(char &cha:m)
    {
        cha=toupper(cha);
    }
    return m;
}

int main()
{
    string wr=to_upper("hello world");
    cout<<wr;
    return 0;
}