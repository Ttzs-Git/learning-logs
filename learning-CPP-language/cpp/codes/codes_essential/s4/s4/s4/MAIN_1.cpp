#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void input(vector<int>& vint)
{
	char n;
	cin >> n;
	while (n != 'N')
	{
		cin >> n;
		vint.push_back(int(n));
		//推入容器中
	}
}
void display(vector<int>& vint)
{
	for (auto it = vint.begin(); it != vint.end() - 1; ++it)
	{
		cout << (*it + *(it + 1)) << " ";
	}
	cout << endl;
}

void imerge(const vector<int> vint1, const vector<int> vint2, vector<int> vint3)
{
	vector<int>::const_iterator it1 = vint1.begin();
	vector<int>::const_iterator it1_ = vint1.end();
	vector<int>::const_iterator it2 = vint2.begin();
	vector<int>::const_iterator it2_ = vint2.end();
	copy(it1, it1_, vint3.begin());
	copy(it2, it2_, vint3.begin() + vint1.size());


}

void print(const vector<int> vint)
{
	for (auto it = vint.begin(); it != vint.end(); ++it)
	{
		cout << (*it) << " ";
	}
	cout << endl;
}

int main()
{
	vector<int> vint1;
	vector<int> vint2;
	vector<int> vint3;

	//输入函数
	input(vint1);
	input(vint2);

	//打印函数
	display(vint1);
	//合并
	imerge(vint1, vint2, vint3);
	print(vint1);
	return 0;
}