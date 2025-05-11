#include<bits/stdc++.h>
using namespace std;

// HDU 2024

bool check(string &str)
{
    int st=str.size();
    if(isdigit(str[0])) return false; //首字母不是数字
    vector<string> key={"int","double","float","char","short","long","signed","unsigned","void","auto","register","static","extern","typedef","if","else","switch","case","default","for","while","do","break","continue","goto","return","const","union","struct","enum","volatile","sizeof"};
    for(int i=0;i!=key.size();++i)
    {
        //不是关键字
        if(key[i]==str)
        return false;
    }
    for(int i=0;i!=st;++i)
    {
    //必须是_或者数字和字母
        if(str[i]!='_'&&!isalnum(str[i])) return false;
    }
    return true;
}

int main()
{
    int n=0;
    while(cin>>n)
    {
        string str;
        getchar();
        for(int i=0;i!=n;++i)
        {
            
            getline(cin,str);
            if(check(str))
            {
                cout<<"yes"<<endl;
            }   
            else cout<<"no"<<endl;
        }
    }
    return 0;
}