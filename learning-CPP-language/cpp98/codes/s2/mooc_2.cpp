#include<iostream>
using namespace std;

//求整数的平均值和负数的个数
int main()
{
    int n =0;
    cin>>n;
    int *p = new int[n];//生成指定数量的动态数组
    double ave = 0,sum=0;
    int pos=0,number=0;
    for(int i=0;i!=n;++i)
    {
        cin>>p[i];
        if(p[i]>0)
        {
            ++pos;
            sum+=p[i];
        }
        if(p[i]<0)
        {
            ++number;            //统计负数的个数
        }
    }
    if(!pos)
    {
        ave =0;
    }
    else
    {
        ave=sum/pos;
    }
    cout << "ave=" <<ave<<"  number="<<number<<endl;
    delete []p;
    return 0;
}