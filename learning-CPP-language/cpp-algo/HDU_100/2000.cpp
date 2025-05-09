#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

// HDU 2000

int main()
{
    string str;
    while (cin>>str)
    {
        int eof=str.size();
        sort(str.begin(),str.end());
        for(int i=0;i!=eof;++i)
        {
            cout<<str[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}