#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
//HDU 2000

void input(vector<string>&vstr)
{
    string str;
    while(cin>>str)
    {
        vstr.push_back(str);
    }
}

void bubble_sort(string &str)
{
    int i=0,eof=str.size(),j=0;
    for(i=0;i!=eof-1;++i)
    {   
        for(j=i+1;j!=eof;++j)
        {
            if(str[i]>str[j])
            {
                char tem=str[j];
                str[j]=str[i];
                str[i]=tem;
            }
        }

    }

}

void sort_vstr(vector<string> &vstr)
{
    int i=0,eof=vstr.size();
    for(;i!=eof;++i)
    {
        //vstr[i]="qwe"
        //sort(vstr[i].begin(),vstr[i].end());
        bubble_sort(vstr[i]);
    }
}

void output(vector<string> &vstr)
{
    int i=0,eof=vstr.size(),j=0;
    for(i=0;i!=eof;++i)
    {
        //vstr[i]="qwe"
        for(j=0;j!=3;++j)
        {
            cout<<vstr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<string> vstr;
    //输入函数
    input(vstr);
    //排序函数
    sort_vstr(vstr);
    //输出函数
    output(vstr);
    return 0;
}

