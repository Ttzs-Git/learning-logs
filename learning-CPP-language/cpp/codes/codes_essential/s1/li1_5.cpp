#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;

void greet_1()
{
    string name;
    do
    {
        cout<<"请输入你的名字:"<<endl;
        cin>>name;
    }while(name.size()<=2);
    cout<<"hello"<<name<<endl;
}

void greet_2()
{
   string name;
    cout<<"请输入你的名字:"<<endl;
    cin>>name;
    switch(name.size())
    {
        case 0:
        cout<<"please write again!!!";
        cin>>name;
        break;
        case 1:
        cout<<"hi,gays,write your another name";
        cin>>name;
        default:
        cout<<"hi, "<<name<<" ,Say you nice"<<endl;
    }
}

//C-字符串
void greet_3()
{
    const int num=128;
    char p[num];
    cout<<"请输入你的名字"<<endl;
    cin>>setw(num)>>p;
    cout<<p<<endl;
}

int main()
{
   greet_3();
    return 0;
}
