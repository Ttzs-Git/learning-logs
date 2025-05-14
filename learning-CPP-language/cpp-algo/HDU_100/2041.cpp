#include<iostream>
using namespace std;

// HDU 2041
// int s(int m)
// {
//     if(m==1||m==2) return 1;
//     else return s(m-1)+s(m-2);
// }
int main()
{
    int m=0;
    cin>>m;
    int fib[40]={1,1,2};
    for(int i=2;i<=40;++i)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }

    while(m--)
    {
        int num=0;
        cin>>num;
        // cout<<s(num)<<endl;
        cout<<fib[num-1]<<endl;
    }
    return 0;
}