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
    vector<string> vstr;
    string str;
    int a=0;
    while(infile>>str)
    {
        vstr.push_back(str);
        a++;
    }
    auto p=vstr.begin(),q=vstr.end();
    whlie(p!=q)
    {
        p++;
        cout<<*p;
    }

}


int main()
{
    oftxt("hello,gays\nsee you next time!!!");
    iftxt();
    return 0;
}