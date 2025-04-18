#include<iostream>
#include<string>
#include<vector>
using namespace std;

void greet_1()
{
    string name_1,name_2;
    cout<<"请输入你的姓:"<<endl;
    cin>>name_1;
    cout<<"请输入你的名"<<endl;
    cin>>name_2;
    cout<<"Hello,"
        <<name_1<<name_2
        <<"\n"
        <<"goodbye"
        <<"\n";
}

void greet_2()
{
    string name[2];
    cout<<"请输入你的姓:"<<endl;
    cin>>name[0];
    cout<<"请输入你的名:"<<endl;
    cin>>name[1];
    cout<<"Hello,"
        <<name[0]<<name[1]
        <<"\n"
        <<"goodbye"
        <<"\n";
}

void greet_3()
{
    vector<string> name;
    cout<<"请输入你的姓:"<<endl;
    cin>>name[0];
    cout<<"请输入你的名:"<<endl;
    cin>>name[1];
    cout<<"Hello,"
        <<name[0]<<name[1]
        <<"\n"
        <<"goodbye"
        <<"\n"; 
}

int main()
{
    greet_3();
    return 0;
}