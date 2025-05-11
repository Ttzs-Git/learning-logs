#include<bits/stdc++.h>
using namespace std;

// HDU 2023
int cmp(int arr[],double mean[],int m)
{
    //比较是否超过平均分
    for(int i=0;i!=m;++i)
    {
        if(arr[i]<mean[i])
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    int n=0,m=0;
    while(scanf("%d %d",&n,&m)==2)
    {
        const int row=n,col=m;
        int arr[n][m]={0};//初始化数组
        int num=0;
        int sum_i=0;//计算每个同学的平均分
        const int eof=max(m,n);
        double mean[2][eof]={0};
        int i=0;
        //输入并且计算每个同学的平均成绩
        for(;i!=n;i++)
        {
            sum_i=0;
            for(int j=0;j!=m;++j)
            {
                scanf("%d",&num);
                arr[i][j]=num;    
                sum_i+=num;
            }
            mean[0][i]=sum_i*1.0/m;
        }
        if(n<eof) mean[0][n]=-99999999; //将多余框框封闭
        int sum_j=0,j=0;
        //计算每个学课的平均成绩
        for(;j!=m;++j)
        {
            sum_j=0;
            for(int i=0;i!=n;i++)
            {
                sum_j+=arr[i][j];
            }
            mean[1][j]=sum_j*1.0/n;
        }
        if(m<eof) mean[1][m]=-99999999;
        //输出
        for(i=0;i!=2;++i)
        {
            
            for(j=0;j!=eof;++j)
            {
                
                if(mean[i][j]+99999999.00<1e-10) 
                {break;}
                else{
                    printf("%.2f",mean[i][j]);
                    printf(" ");
                }
                
            }
            printf("\n");
        }
        //计算超均值的个数
        num=0;
        for(i=0;i!=n;++i)
        {
            num+=cmp(arr[i],mean[1],m);
        }
        printf("%d\n",num);
    }
    return 0;
}