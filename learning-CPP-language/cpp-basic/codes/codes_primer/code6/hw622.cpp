#include<iostream>
#include<string>
using namespace std;

string::size_type find_char(const string &s,char a,string::size_type &n)
{
    //在字符串中寻找a，如果有返回位置
    n=0;
    auto ret=s.size();
    for(decltype(ret) i=0;i!=s.size();++i)
    {
        if(a==s[i])
        {
            if(ret==s.size())
                ret=i;
            ++n;
        }
    }
    return ret;
}

int main()
{
    string::size_type n=0;
    int j=find_char("hello",'o',n);
    cout<<j<<" "<<n<<endl;
    return 0;
}