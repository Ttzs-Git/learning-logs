// G++
//#include<bits/stdc++.h>

//c++
#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;

// HDU 2023

int cmp(vector<int> &vint,vector<double> &mean)
{
    int eof=vint.size();
    for(int i=0;i!=eof;++i)
    {
        if(vint[i]<mean[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n=0,m=0;
    while(cin>>n>>m)
    {
        vector<vector<int>> vint;
        vector<vector<double>> mean;
        //输入
        vector<double> mean0;
        for(int i=0;i!=n;++i)
        {
            vector<int> temp;
            double sum=0;
            for(int j=0;j!=m;++j)
            {
                int num=0;
                cin>>num;
                sum+=num;
                temp.push_back(num);
            }
            vint.push_back(temp);
            mean0.push_back(sum/m);
        }
        mean.push_back(mean0);
        //计算
        vector<double> mean1;
        for(int j=0;j!=m;++j)
        {
            double sum=0;
            for(int i=0;i!=n;++i)
            {
                sum+=vint[i][j];
            }
            mean1.push_back(sum/n);
        }
        mean.push_back(mean1);
        //输出
        for(int i=0;i!=2;++i)
        {
            for(int j=0;j!=mean[i].size();++j)
            {

                printf("%.2lf",mean[i][j]);
                if(j!=mean[i].size()-1) printf(" ");
            }
            printf("\n");
        }
        //判断数量超过平均分
        int num=0;
        for(int i=0;i!=n;++i)
        {
            num+=cmp(vint[i],mean[1]);
        }
        printf("%d\n",num);
    }
    return 0;
}