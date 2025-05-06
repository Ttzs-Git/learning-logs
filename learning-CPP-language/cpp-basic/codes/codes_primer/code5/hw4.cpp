#include<string>
#include<iostream>
using namespace std;

int main()
{
    string m,n;
    do
    {
        cout<<"输入两个字符串"<<endl;
        cin>>m;
        cin>>n;
        cout<<(m.size()-n.size()>0?m:n)<<endl;
    }while(1);
    return 0;
}