#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

void oftxt(string m)
{
    //向文件中写入内容
    ofstream outfile("li1_7.txt",ios_base::app);
    //需要先检查安全性
    if(!outfile)
    {
        //不安全
        cerr<<"Unable to open it!!!";
        return;
    }
    else{
        //安全
        outfile<<m<<endl;
    }
}



void iftxt()
{
    ifstream infile("li1_7.txt");
    //安全性检查
    if(!infile)
    {
        cerr<<"Unable to open it!!!";
        return;
    }
    vector<string> vstr;
    string str;
    int a=0;
    while(infile>>str)
    {
        //将文本的字符串推进向量中
        vstr.push_back(str);
        a++;
    }
    //输出文本内容
    //int a=vstr.size();
    for(int i =0;i!=a;i++)
    {
        cout<<vstr[i]<<endl;
    }
    //重新排序
    sort(vstr.begin(),vstr.end());
    //将内容输出
    oftxt("sorted txt:");
    a=vstr.size();
    for(int i=0;i!=a;i++)
    {
        oftxt(vstr[i]);
    }

  
}


int main()
{
    oftxt("hello,gays\nsee you next time!!!");
    iftxt();
    return 0;
}