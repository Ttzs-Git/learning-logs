#include<iostream>
#include"hw6.hpp"
using namespace std;

int f(int k)
{
    static int m=0;
    if (!m)
    {
        return 0;
    }
    else
        return 1;
}
int fact(int n)
{
    if (n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}

int abs(int m)
{
    if (m<0)
        return -1*m;
    else
        return m;
}