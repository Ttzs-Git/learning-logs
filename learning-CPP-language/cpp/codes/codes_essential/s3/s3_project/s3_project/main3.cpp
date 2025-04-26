#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool is_elem(vector<int> p, int a)
{
	//使用泛型算法进行排序
	vector<int> m(10);
	copy(p.begin(), p.end(), m.begin());
	sort(m.begin(), m.end());
	int max = m.empty() ? 0 : m[m.size() - 1];
	if (a > max)
	{
		return false;
	}
	else {
		return binary_search(m.begin(), m.end(), a);
	}

}


int main()
{
	//使用顺序容器
	vector<int> p{ 1,4,51,4,58,29,25 };
	cout << "What do you want to check?" << endl;
	int a;
	cin >> a;
	cout << boolalpha << is_elem(p, a);
	return 0;
}