#include "test.hpp"

// 整体架构——计算算数平方根的计算器
// 先打招呼
// 询问要计算的数
// 返回答案

int main()
{
    std::cout<<"Hello,world!"<<std::endl;
    int a = 0;
	std::cin>>a;
    std::cout<<hsqrt(a)<<std::endl;
    return 0;
}