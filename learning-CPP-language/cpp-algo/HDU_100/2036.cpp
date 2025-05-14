#include<bits/stdc++.h>
using namespace std;

// HDU 2036
// double mysqrt(vector<int> &vint1,vector<int> &vint2)
// {
//     return sqrt(pow((vint1[0]-vint2[0]),2)+pow((vint1[1]-vint2[1]),2));
// }

// double input(vector<vector<int>> &point)
// {
//     int eof=point.size();
//     double sum=0;
//     for(int i=1;i!=eof-1;++i)
//     {
//         double a=mysqrt(point[0],point[i]);
//         double b=mysqrt(point[0],point[i+1]);
//         double c=mysqrt(point[i],point[i+1]);
//         double p=(a+b+c)/2;
//         sum+=sqrt(p*(p-a)*(p-b)*(p-c));
//     }
//     return sum;
// }
struct p{
    int x;
    int y;
};

int s(p p1,p p2)
{
    return (p1.x*p2.y-p1.y*p2.x);
}
int main()
{
    int n=0;
    while(cin>>n&&n!=0)
    {
        // vector<vector<int>> point;
        // vector<int> point0;
        // for(int i=0;i!=n;++i)
        // {
        //     point0.clear();
        //     for(int j=0;j!=2;++j){
        //     int num=0;
        //     cin>>num;
        //     point0.push_back(num);
        //     }
        //     point.push_back(point0);
            
        // }
        // printf("%.1f\n",input(point));
        vector<p> vp;
        for(int i=0;i!=n;++i)
        {
            p p;
            cin>>p.x>>p.y;
            vp.push_back(p);
        }
        vp.push_back(vp[0]);
        double sum=0;
        for(int i=0;i<n;++i)
        {
            sum+=s(vp[i],vp[i+1]);
        }
        printf("%.1f\n",sum/2.0);
    }
    return 0;
}