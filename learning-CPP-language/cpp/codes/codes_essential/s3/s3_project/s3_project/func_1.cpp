#include<iostream>  
#include<string>  
#include<vector>  
using namespace std;
//复习基础的find函数--如何从一个简单的arr到是适合所有的容器



////写一个find函数仅对vector<int >有效  
//int* find(const vector<int>& p, int value)
//{
//	cout << "This is vector<int> func" << endl;
//	int m = p.size();
//	for (int i = 0; i != m; i++)
//	{
//		if (p[i] == value)
//		{
//			return const_cast<int*>(&p[i]); // 修复返回值类型不匹配的问题  
//		}
//	}
//	return nullptr;
//}
//
////vector模板find函数  
//template<typename T>
//T* find(const vector<T>& p, T value)
//{
//	auto m = p.size();
//	cout << "This is template-func" << endl;
//	for (auto i = 0; i != m; ++i)
//	{
//		if (p[i] == value)
//		{
//			return const_cast<T*>(&p[i]); // 修复返回值类型不匹配的问题  
//		}
//	}
//	return nullptr;
//}
//
//
////数组的find 函数
//template<typename T>
//T* find(T* arr, int size, T value)
//{
//	cout << "This is T*-int-T find" << endl;
//	if (!arr || size == 0)
//	{
//		return nullptr;
//	}
//	for (int i = 0; i < size; ++i)
//	{
//		if (arr[i] == value) {
//			return &arr[i];
//		}
//
//	}
//	return nullptr;
//}
//
////数组的find函数
//template<typename T>
//T* find(T* beg, T* end, T value)
//{
//	cout << "This is T*-T*-T" << endl;
//	if (beg == end)
//	{
//		return nullptr;
//	}
//	for (; beg != end; beg++)
//	{
//		if ((*beg) == value)
//		{
//			return beg;
//		}
//
//	}
//	return nullptr;
//}
//
////获取向量的首地址
//int* begin(vector<int>& p)
//{
//	return p.empty() ? nullptr : &p[0];
//}
namespace my {
	template<typename T, typename t>
	T find(T beg, T end, const t& value)
	{
		cout << "This is find func1" << endl;
		for (; beg != end; ++beg)
		{
			if (*beg == value)
			{
				return beg;
			}
		}
		return end;
	}

	template<typename T>//写泛型输出函数
	void display(T beg, T end)
	{
		/*if (!beg || !end)
		{
			cerr << "Unable to use this pointer" << endl;
			return;
		}*/
		while (beg != end)
		{
			cout << *beg << " ";
			++beg;
		}
		cout << endl;

	}


	template<typename T>//写泛型输出函数
	void display(T beg, int size)
	{
		if (!beg || !end)
		{
			cerr << "Unable to use this pointer" << endl;
			return;
		}
		int i = 0;
		while (i < size)
		{
			cout << *beg << " ";
			++beg;
			size++;
		}
		cout << endl;

	}
	template<typename T>
	void display(const vector<T>& vec, ostream& os)
	{
		typename vector<T>::const_iterator beg = vec.begin();
		typename vector<T>::const_iterator end = vec.end();
		while (beg != end)
		{
			os << *beg << " ";
			++beg;
		}
		os << endl;
	}
}


int main()
{
	//vector<int> m{ 0,1,2,3,4,5,6 };
	//float z[] = { 0.1,0.2,0.3,0.4,0.5 };
	//vector<float> n(z, z + 5);
	////int* p = find(m, 1);
	//cout << (*p) << endl;
	////cout << (*(find<float>(n, 0.1))) << endl;
	//int arr[10] = { 1,2,3,4,5,6 };
	////cout << *(find(arr, 6, 5)) << endl;
	vector<string> l{ "hello ","this ","nanjing","nuh" };
	vector<string>::iterator p = my::find(l.begin(), l.end(), "this ");
	if (p != l.end())
	{
		cout << "We find it:" << *p << endl;

	}
	else
	{
		cout << "We can not find it" << endl;
	}
	my::display(l.begin(), l.end());
	my::display(l, cout);
	return 0;
}