#include"string.hpp"
using namespace std;

//去除字符串中的标点
//测试集:hello,sas,nnn
string change(string s)
{
    decltype(s.size()) index = 0,endex=0;
    for(;index<s.size();index++,endex++)
    {
        if(ispunct(s[index]))
        {
         index++;
        }
        s[endex]=s[index];
    }   
    //重新调整
    // s[endex]='\0';---->未能按照预期工作
    s.resize(endex); // 调整字符串大小以删除多余的字符
    return s;
}
int main()
{
    string s;
    cin>>s;
    s=change(s);
    cout<<s<<endl;
    return 0;
}