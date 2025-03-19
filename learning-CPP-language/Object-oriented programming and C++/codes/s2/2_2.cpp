#include<iostream>
using namespace std;

namespace Ttzs
{
    const int a = 100;
    int b =10;
}

int main()
{
    int a =200;
    cout<<a<<"Ttzs下"<<Ttzs::a<<endl;
    return 0;
}