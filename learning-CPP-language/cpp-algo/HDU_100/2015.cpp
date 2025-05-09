#include <bits/stdc++.h>
using namespace std;

// HDU 2015

// int mean(vector<int>::iterator beg,vector<int>::iterator en)
// {
//     vector<int>::iterator it=beg;
//     int sum=0,n=0;
//    for(;it!=en;++it)
//    {
//     sum+=*it;
//     ++n;
//    }
//    return sum/n;
// }

// int main()
// {
//     int n=0,m=0;
//     while(cin>>n>>m)
//     {
//         vector<int> lint;
//         for(int i=1;i!=n+1;++i)
//         {
//             lint.push_back(i*2);
//         }
//         int eof=lint.size()%m==0?lint.size()/m:lint.size()/m+1;
//         for(int i=0;i!=eof;++i)
//         {
//             if(i==lint.size()/m) cout<<mean(lint.begin()+i*m,lint.end())<<endl;
//             else cout<<mean(lint.begin()+i*m,lint.begin()+m*(i+1))<<" ";
//         }
//     }
//     return 0;
// }

int main()
{
    int n = 0, m = 0;
    while (cin >> n >> m)
    {
        int k = 0; // 输出位表示
        int sum = 0;
        for (int i = 2; i <= n * 2 + 1; i += 2)
        {
            sum += i;
            k++;
            if (k % m == 0)
            {
                cout << sum / k << " ";
                sum = 0;
                k = 0;
                if (i == 2 * n)
                    cout << endl;
            }
        }
        if (k > 0)
        {
            cout << sum / k << endl;
        }
    }
    return 0;
}