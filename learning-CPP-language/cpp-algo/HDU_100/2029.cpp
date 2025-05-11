#include<bits/stdc++.h>
using namespace std;

// HDU 2029
bool check(string &str)
{
    string::iterator it=str.begin();
    string::iterator of=str.end()-1;
    while(it<of)
    {
        if(*it!=*of) return false;
        it++;
        of--;
    }
    return true;
    
}

int main()
{
    int n=0;
    cin>>n;
    getchar();
    string str;
    while(cin>>str)
    {
        
        
        cout<<(check(str)?"yes":"no")<<endl;
    }
    return 0;
}