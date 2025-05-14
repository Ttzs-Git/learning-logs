#include<iostream>
#include<string>
#include<sstream>
using namespace std;

// 实现 1+2+3...+n
int forLoop(int n)
{
    int sum=0;
    for(int i=1;i!=n+1;++i)
    {
        sum+=i;
    }
    return sum;
}

int whileLoop(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n;
        --n;
    }
    return sum;
}

int whileLoop2(int n)
{
    int sum=0;
    int i=1;
    while(n)
    {
        n--;
        sum+=i;
        i++;
        i*=2;
    }
    return sum;
}


string nestedForLoop(int n)
{
    ostringstream res;
    for(int i=0;i!=n;++i)
    {
        for(int j=0;j!=n;++j)
        {
            res<<"("<<i<<","<<j<<")"<<",";
        }

    }
    return res.str();
}

int main()
{
    int n=0;
    cin>>n;
    cout<<forLoop(n)<<endl;
    cout<<whileLoop(n)<<endl;
    cout<<whileLoop2(n)<<endl;
    cout<<nestedForLoop(n)<<endl;
    return 0;
}