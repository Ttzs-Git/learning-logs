#include<cstdio>
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//HDU 2003

int main()
{
    // vector<double> vdou;
    // double i;
    // while((scanf("%lf",&i)!=EOF))
    // {
        
    //     vdou.push_back(i);

        
    // };
    // int eof=vdou.size();
    // for(i=0;i!=eof;++i)
    // {
    //     //printf("%.2f\n",(vdou[i]>0)?(vdou[i]):-vdou[i]);
    //     printf("%.2f\n",abs(vdou[i]));
    // }
    vector<double> vdou;
    double i;
    while(cin>>i)
    {
        vdou.push_back(i);
    }
    int eof=vdou.size();
    for(i=0;i!=eof;++i)
    {
        printf("%.2f\n",(vdou[i]>0)?(vdou[i]):-vdou[i]);
        //printf("%.2f\n",abs(vdou[i]));
    }
    return 0;
}