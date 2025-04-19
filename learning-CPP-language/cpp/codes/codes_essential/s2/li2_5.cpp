#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<typename T>
T max(const T& a,const T& b)
{
    return a>b?a:b;
}


template<typename T>
T max(const vector<T> &a)
{
    T b=a[0];
    for(auto i=1;i<a.size();++i)
    {
        if(a[i]>b)
        {
            b=a[i];
        }
    }   
    return b;
}

// template<typename T>
// T max(const T *b,int c)
// //template<typename T,size_t N>
// //T max(const T (&b)[N],int size )
// {
//     //T是类型的占位符，b是标识符,c是整数
//     T tem=b[0];
//     for(int i=1;i<c;++i)
//     {
//         if(b[i]>tem)
//         {
//             tem=b[i];
//         }
//     } 
//     return tem;
// }

template<typename T>
T max(const T *b,int c)
{
    return *max_element(b,b+c);
}

int main()
{
    int a=1,b=2;
    cout<<(std::max(a,b));
     vector<double> vec{1.1, 3.3, 2.2};
    cout << max(vec) << endl;   // 输出3.3

    // 测试数组
    int arr[] = {7, 2, 9, 4};
    cout << max(arr, 4) << endl; // 输出9
    return 0;
}
