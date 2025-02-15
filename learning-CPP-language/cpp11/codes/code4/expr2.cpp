#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vint = {1,2,3,4,5,6,7,8,9};
    for(auto &i :vint)
    {
        i = (i%2!=0)?i*2:i;
    }
    //展示容器内容
    for(auto i:vint)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}