#include<iostream>
#include<string>
#include<vector>
using namespace std;

string my_upper(string str)
{
    //字母全部大写
    for(auto &ch:str)
    {
        ch=toupper(ch);
    }
    return str;
}

int main()
{
    vector<string> vstr;
    string s;
    //输入string容器
    getline(cin,s);
    vstr.push_back(s);
    //变成大写模式
    for(auto &str:vstr)
    {
        str=my_upper(str);
    }
    cout<<vstr[0]<<endl;
    return 0;
}