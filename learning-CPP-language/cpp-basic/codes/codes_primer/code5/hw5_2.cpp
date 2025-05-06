#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    try{
        if (b==0)
        {
            throw out_of_range("b==0 error");
        }
        else
        {
            cout<<(a/b)<<endl;
        }
    }catch(out_of_range)
    {
        cout<<"b不能为0"<<endl;
    }

    return 0;
}
