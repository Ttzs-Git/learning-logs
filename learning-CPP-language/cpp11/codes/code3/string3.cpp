#include<iostream>
#include<string>
using namespace std;

//控制只输出长度大于10个字符的行
int main()
{
    string s;
    while(getline(cin,s))
    {
        if(size(s)>10)
        {
            cout<<s<<endl;
        }
    }
    return 0;
}