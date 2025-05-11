#include<bits/stdc++.h>
using namespace std;

// HDU 2025

int main()
{
    string str;
    while(cin>>str)
    {
        char max_;
        // int len=0;
        bool b=true;
        int eof=str.size();
        for(int i=0;i!=eof;++i)
        {
       
            if(b) {
                max_=str[i];
                b=false;
            }
            if(max_<str[i])
            {
                max_=str[i];
            }
            // if(str[i]-'A'>len) len=str[i]-'A';
        }
        for(int i=0;i!=eof;++i)
        {
       
            if(str[i]==max_)
            // if(str[i]-'A'==len)
            cout<<str[i]<<"(max)";
            else cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}