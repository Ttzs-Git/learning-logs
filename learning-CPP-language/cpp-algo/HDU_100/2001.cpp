#include<iostream>
//#include<vector>
//#include<string>
#include<cstdio>
#include<cmath>
using namespace std;

//HDU 2001


int main()
{
    double x_1,y_1,x_2,y_2;
    while(cin>>x_1>>y_1>>x_2>>y_2)
    {
        printf("%.2f\n",sqrt(pow((x_1-x_2),2)+pow((y_1-y_2),2)));
    }
    return 0;
}


// void input(vector<string> &vint){
//     string b;
//     while(getline(cin,b))
//     {
//         vint.push_back(b);
//     }
// }
    
// void cpe(vector<string> &vint)
// {
//     int i=0,eof=vint.size();
//     for(i=0;i!=eof;++i)
//     {
//         //读取信息
//         printf("%.2f\n",sqrt((vint[i][0]-vint[i][2])*(vint[i][0]-vint[i][2])+(vint[i][4]-vint[i][6])*(vint[i][4]-vint[i][6])));

//     }
// }

// int main()
// {
//     vector<string> vint;
//     //输入
//     input(vint);
//     //输出
//     cpe(vint);
//     return 0;
// }