#include<iostream>
#include<string>
#include<cctype>
using namespace std;

//复现title()函数: Hello World
//测试集:hello world;  hels
string title(string s)
{
    for(decltype(s.size())index = 0;index<s.size();++index)
    {
        //描述第一个非空位置
        if(isspace(s[index]))//现在位置上是空白
        {
         continue;  
        }
        else
        {//现在位置上是非空
            if(isalpha(s[index]))
            {
                //字母
                if(index==0||isspace(s[index-1]))
                //非第一个字符的上一个是空白
                {
                    s[index]=toupper(s[index]);
                }
            }
            
        }
    }
    return s;
}

int main()
{
    string s;   
    getline(cin,s);
    s=title(s);
    cout<<s<<endl;
    return 0;
}