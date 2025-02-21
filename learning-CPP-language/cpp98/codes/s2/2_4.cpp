#include<iostream>
using namespace std;

int sum = 5050;

int main()
{
    int sum =0;
    int arr[3]={10,20,30};
    for(int i = 0;i!=3;++i)
        sum +=arr[i];
    cout<<"局部的sum:"<<sum<<endl;
    ::sum +=sum;
    cout<<"全局的sum:"<<::sum<<endl;
    return 0;
}