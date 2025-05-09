#include<bits/stdc++.h>
using namespace std;

// HDU 2014

int main()
{
    int n=0;
    while(cin>>n)
    {
        vector<double> grade;
        double gra=0;
        for(int i=0;i!=n;++i)
        {   
            cin>>gra;
            grade.push_back(gra);
        }
        sort(grade.begin(),grade.end());
        double sum=0;
        for(int i=1;i!=grade.size()-1;++i)
        {
            sum+=grade[i];
        }
        printf("%.2f\n",sum/(n-2));

    }
    return 0;
}