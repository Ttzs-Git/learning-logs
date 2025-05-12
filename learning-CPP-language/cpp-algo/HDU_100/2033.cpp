#include<bits/stdc++.h>
using namespace std;

// HDU 2033
// struct Time
// {
//     int hour;
//     int min;
//     int sec;
// };

// Time myadd(Time &t1,Time& t2)
// {
//     Time t3;
//     t3.sec=t1.sec+t2.sec;
//     t3.min=t1.min+t2.min;
//     t3.hour=t1.hour+t2.hour;
//     if(t3.sec>60)
//     {
//         t3.sec-=60;
//         t3.min+=1;
//     }
//     if(t3.min>60)
//     {
//         t3.min-=60;
//         t3.hour+=1;
//     }
//     return t3;

// }

int main()
{
    int n;
    while(cin>>n)
    {
        for(int i=0;i!=n;++i)
        {
            // Time t1,t2;
            // scanf("%d %d %d %d %d %d",&t1.hour,&t1.min,&t1.sec,&t2.hour,&t2.min,&t2.sec);
            // Time t3=myadd(t1,t2);
            // cout<<t3.hour<<" "<<t3.min<<" "<<t3.sec<<endl;
            int a1=0,b1=0,c1=0,a2=0,b2=0,c2=0;
            cin>>a1>>b1>>c1>>a2>>b2>>c2;
            int c3=(c1+c2)%60;
            int b3=(b1+b2+(c1+c2)/60)%60;
            int a3=(a1+a2+(b1+b2+(c1+c2)/60)/60);
            cout<<a3<<" "<<b3<<" "<<c3<<endl;
        }
    }
    return 0;
}