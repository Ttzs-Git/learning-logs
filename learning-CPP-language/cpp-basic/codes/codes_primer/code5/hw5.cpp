#include<iostream>
#include<string>
#include<cctype>
using namespace std;

// 5.5.1/2节的练习


int main()
{
    string pass_str;
    string curren_str;
    while (cin>>curren_str)
    {
        if(pass_str==curren_str)
        {
            curren_str[0]=toupper(curren_str[0]);
            cout<<"Repeated word is "<<curren_str<<endl;
            break;
        }
        pass_str=curren_str;
    }
    if(cin.eof())
    {
        cout<<"No repeated words"<<endl;
    }
    return 0;
}