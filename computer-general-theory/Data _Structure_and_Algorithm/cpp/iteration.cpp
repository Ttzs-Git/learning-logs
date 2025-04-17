#include<iostream>
using namespace std;
//实现1+2...+n
//for-loop
int for_loop(int n)
{
    int res=0;
    for(int i=0;i!=n;++i)
    {
        res+=i;
    }
    return res;
}
//whlie-loop
int while_loop(int n)
{
    int res=0;
    int i=0;
    while(i!=n)
    {
        res+=i;
        ++i;
    }
    return res;
}


//while-loopii
def while_loopII(int n)
{

}
int main()
{
    cout<<for_loop(10)<<endl;
    cout<<while_loop(10)<<endl;
    return 0;
}