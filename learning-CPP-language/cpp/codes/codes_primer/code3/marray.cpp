#include<iostream>
#include<vector>
#include<cstddef>
using namespace std;

int main()
{
    int ia[3][4]={0};
    // for(auto &a:ia)
    // {
    //     for(auto &n:a)
    //     {
    //         cout<<n;
    //     }
    //     cout<<endl;
    // }
    // for(size_t i = 0 ;i!=3;i++)
    // {
    //     for(size_t j =0 ; j!=4;j++)
    //     {
    //         cout<<ia[i][j];
    //     }
    //     cout<<endl;
    // }
    for(auto it = begin(ia);it!=end(ia);it++)
    {
     //it是ia[0]的指针
     for(auto itt = *ia;itt!=*ia+4;itt++)
     cout<<*itt<<" ";
    cout<<endl;   
    }
    cout<<endl;
    return 0;
}