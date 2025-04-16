#include<iostream>
using namespace std;

void change(int * m,int* n)
{
    int temp=*m;
    *m=*n;
    *n=temp;
}

int main()
{
    int a =10,b=20;
    cout<<a<<b<<endl;
    change(&a,&b);
    cout<<a<<b<<endl;
    return 0;
}