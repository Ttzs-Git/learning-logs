#include<iostream>
#include<vector>
//#include<iomanip>
using namespace std;

void user_1()
{
    const int num=128;
    int nint[num];
    double sum=0;
    int i=0,a=0;
    cout<<"请输入一串数字:"<<endl;
    while(cin>>a&&i<num)
    {
     nint[i++]=a;
     sum+=a;   
    }
    cout<<"这段数据的均值是:"<<sum/i<<endl<<"这段数据的总和"<<sum<<endl;
    cout<<nint;
    
}

void user_2()
{
    vector<int> vint;
    int i=0;
    double sum=0;
    cout<<"请输入一串数字"<<endl;
    while(cin>>i)
    {
        vint.push_back(i);
        sum+=int(i);
    }
    int a=vint.size();
    // for(int i=0;i!=a;i++)
    // {
    //     sum+=vint[i];
    // }
    cout<<"这串数字的均值是:"<<sum/vint.size()
    <<endl
    <<"这串数字的总和是:"<<sum<<endl;
}

int main()
{
    user_2();
    return 0;
}