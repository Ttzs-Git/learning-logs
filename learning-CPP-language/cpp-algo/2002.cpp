#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;
#define PI 3.1415927
//HDU 2002



int main()
{
    vector<float> vint;//接受数据
    float a;
    while(cin>>a)
    {
        vint.push_back(a);
    }
    int i=0,eof=vint.size();
    for(i=0;i!=eof;i++)
    {
        printf("%.3f\n",4/3.0*PI*pow(vint[i],3));
    }
    return 0;
}