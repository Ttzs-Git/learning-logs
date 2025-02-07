#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector<string> vstr;
    string s;
    for(int i=0;i!=4;i++)
    {
        cin>>s;
        vstr.push_back(s);
    }
    //单词全部大写
    for(auto it =vstr.begin();it!=vstr.end();++it)
    {
        if(!(it->empty()))
        {
            (*it)[0]=toupper((*it)[0]);
        }
    }
    //输出结果
    for(auto it = vstr.begin();it!=vstr.end();++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}