#include<iostream>
using namespace std;

bool larger(int a,int b)
{
    if(a>b)
    {
        return true;
    }
    else
    {
    return false;
    }
}

int main()
{
    int a = 0,b = 0;
    cin>>a>>b;
    bool m = larger(a,b);
    cout<<m<<" "<<boolalpha<<m<<" "<<noboolalpha<<m<<endl;
    if(m)
    {
        cout<<a-b<<endl;
    }
    else
    {
        cout<<a+b;
    }
    return 0;
}