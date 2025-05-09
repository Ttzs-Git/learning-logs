#include<iostream>
using namespace std;

//HDU 2011
double f(int num)
{
    double sum=0;
    double seg=1.0;
    for(int i=1;i!=num+1;++i)
    {
        sum+=seg*1/i;
        seg=-seg;
    }
    return sum;

}
int main()
{
    int n=0;
    while(cin>>n)
    {
        for(int i=0;i!=n;++i)
        {
            int num=0;
            cin>>num;
            printf("%.2f\n",f(num));
        }
    }
    return 0;
}