#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<string>
#include<algorithm>
using namespace std;
//复习基础的泛型容器的操作

//展示遍历函数
template<typename T>
void display(T& p, const string name)
{
	cout << "This is " << name << " after operations" << endl;
	for (auto& item : p)
	{
		cout << item << " ";
	}
	cout << endl;
}

int main()
{
	//顺序容器的创立四种方式
	list<int> a;//默认创立
	deque<int> b(10);//指定大小
	vector<string> c(4, "hello");//指定大小和全部初始化
	list<string> d(c.begin(), c.end());//使用iterator创立
	//展示容器
	display(a, "a");
	display(b, "b");
	display(c, "c");
	display(d, "d");
	//顺序容器常见操作
	a.push_back(12);
	a.push_front(13);
	//cout << "This a after operations" << endl;
	display(a, "a");
	b.pop_back();
	b.pop_front();
	//cout << "This b after operations" << endl;
	display(b, "b");
	//其他非特化的操作
	list<int>::iterator it = find(a.begin(), a.end(), 12);
	a.insert(it, 12);
	//cout << "This a after operations" << endl;
	display(a, "a");
	vector<string>::iterator it2 = find(c.begin(), c.end(), "123");
	//容器的内容重新分配导致
	c.insert(it2, 2, "123");
	display(c, "c");
	it2 = find(c.begin(), c.end(), "123");
	c.insert(it2, d.begin(), d.end());
	display(c, "c");
	//c.insert(it2);
	//display(c, "c");
	//erase
	it2 = find(c.begin(), c.end(), "123");
	c.erase(it2, it2 + 1);
	display(c, "c");
	it2 = find(c.begin(), c.end(), "123");
	c.erase(it2);
	display(c, "c");


	return 0;
}