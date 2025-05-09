#include<iostream>
using namespace std;

//HDU 2007
int main()
{
    int x=0,y=0;
    while(cin>>x>>y)
    {
        // int tem=y;
        // y=y>x?y:x;
        // x=tem>x?x:y;
        if(x>y) swap(x,y);
        int m=0,n=0;
        for(int i=x;i!=y+1;++i)
        {
            if(i%2==0)
            {
                m+=i*i;
            }
            else{
                n+=i*i*i;
            }

        }
        cout<<m<<" "<<n<<endl;
    }
    return 0;
}