#include<iostream>
using namespace std;

//测试函数指针的知识

int max(int a, int b)
{
	return a > b ? a : b;
}

int max_item(int* p, int (*q)(int a, int b))
{
	int n = p[0];
	for (int i = 1; i != 5; ++i)
	{
		n = q(n, p[i]);
	}
	return n;
}
int main()
{
	int arr[] = { 1,2,3,7,6 };
	cout << (max_item(arr, max)) << endl; ;
	return 0;
}

//summay: 使用函数指针给人一种函数也是一个对象的感觉，使用起来跟Python的函数感觉很类似
// CPython!!!