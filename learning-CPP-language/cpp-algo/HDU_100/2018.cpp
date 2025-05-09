#include<bits/stdc++.h>
using namespace std;

// HDU 2018

// int f(int n)
// {
//     if(n<=4)
//     {
//         return n>0?n:0;
//     }
//     else{
//         //n>4
//         // n---cnmn:n-3;f(n)=f(n-1)+n-3
//         //n-1------ n-4;f(n-1)
//         return f(n-1)+f(n-3);
//     }
// }

int main()
{
    int n=0;
    while(cin>>n&&n!=0)
    {
        //cout<<f(n)<<endl;
        if(n<=4) cout<<n<<endl;
        else{
        int cow1=1,cow2=1,cow3=1,cow4=1;//第4个年头结束的时候
        for(int i=5;i<=n;++i)
        {
            cow4+=cow3;//2 
            cow3=cow2;//1 
            cow2=cow1;//1
            cow1=cow4; //2
        }
        cout<<cow1+cow2+cow3+cow4<<endl;
    }
    }
    // vector<int> vint;
    // vint.push_back(1);
    // vint.push_back(2);
    // vint.push_back(3);
    // for(int i=3;i<56;++i)
    // {
    //     vint.push_back(vint[i-1]+vint[i-3]);
    // }
    // while(cin>>n&&n!=0)
    // {
    //     cout<<vint[n-1]<<endl;
    // }
    return 0;
}