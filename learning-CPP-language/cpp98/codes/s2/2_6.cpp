#include<iostream>
using namespace std;

int square(int a , int b = 1)
{
    return a*a+b*b;
}

float square(float a)
{
    return a*a;
}

double square(double a = 10.0)
{
    return a*a;
}

int main()
{
    cout<<square()<<endl;
    cout<<square(10.0)<<endl;
    cout<<square('A')<<endl;
    cout<<square(10.0f)<<endl;
    return 0;
}