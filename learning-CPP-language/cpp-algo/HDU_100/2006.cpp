#include<iostream>
#include<vector>
using namespace std;

//HDU 2006

int main()
{
    int num=0;
    int j=1;
    while(cin>>num)
    {
        j=1;
        int s;
        for(int i=0;i!=num;++i)
        {
            cin>>s;
            if(s%2!=0)
            {
                j*=s;
            }
        }
        cout<<j<<endl;

    }
    return 0;
}