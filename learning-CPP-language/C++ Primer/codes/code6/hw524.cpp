#include<iostream>
using namespace std;

int f(int a,const int* b)
{
    if(a>(*b))
    return a;
    else
    return *b;
}

int main()
{
    int a=5;
    int m =f(4,&a);
    cout<<m;
    return 0;
}