#include<iostream>
#include"hw6.hpp"
using namespace std;


int main()
{
    int m;
    cout<<"请输入一个数字，我将输出它的阶乘"<<endl;
    cin>>m;
    m=fact(m);
    cout<<m<<endl;
    cout<<"请输入一个数字，我将输出他的绝对值"<<endl;
    cin>>m;
    m=abs(m);
    cout<<m<<endl;
    return 0;
}