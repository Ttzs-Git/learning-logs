#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
using namespace std;

vector<int> less_than(vector<int>& vint, int val)
{
	//最简单的版本
	vector<int> p;
	//vector<int>::const_iterator it = vint.begin();
	//while (it!=vint.end()
	for (int i = 0; i != vint.size(); ++i)
	{
		if (vint[i] < val)
		{
			p.push_back(vint[i]);
		}
	}
	return p;
}

inline bool less_than(int a, int b)
{
	return a < b ? true : false;

}
inline bool greater_than(int a, int b)
{
	return a > b ? true : false;
}

vector<int> my_filter(const vector<int>& p, int val, greater<int>& plt)//bool (*pre)(int, int))
{
	vector<int> m;
	//for (int i = 0; i != p.size(); ++i)
	//{
	//	if (plt(p[i], val))
	//	{
	//		m.push_back(val);
	//	}
	//}
	//return m;
	vector<int>::const_iterator it = p.begin();
	while ((it = find_if(it, p.end(), (bind2nd(plt, val)))) != p.end())
	{
		m.push_back(*it);
		++it;
	}
	return m;
}

template<typename iterator, typename va, typename pre, typename output>
output my_filter(iterator beg, iterator end, output at, const va& val, const pre& plt)
{
	while ((beg = find_if(beg, end, not1(bind2nd(plt, val)))) != end)
	{
		*at = *beg;
		++beg;
		++at;

	}
	return at;
}
template<typename T>
void display(vector<T>& p)
{
	for (auto& item : p)
	{
		cout << item << " ";
	}
	cout << endl;
}


int my_count(const vector<int>& p, int val)
{
	vector<int>::const_iterator it = p.begin();
	int n = 0;
	while ((it = find(it, p.end(), val)) != p.end())
	{
		++it;
		++n;
	}
	return n;
}

template<typename iterator, typename outiterator, typename va, typename pre>
outiterator sub_vec(const iterator& beg, const iterator& end, outiterator& out, const va value, const pre& plt)
{
	sort(vc.begin(), vc.end());
	vector<int>::const_iterator it = find_if(vc.begin(), vc.end(), bind2nd(plt, value));
	vc.erase(it - 1, vc.end());
	return vc;
}

int main()
{
	vector<int> vint{ 1,2,3,4,5,6,7,8,9,10 };
	//vector<int> vint2 = less_than(vint, 10);
	////cout << vint2 << endl;
	//cout << my_count(vint, 10) << endl;
	////vector<int> m = my_filter(vint, 5, );
	//将vint分为两个容器，一个元素全部大于5，另一个元素全部小于5
	vector<int> vi(vint.size());
	my_filter(vint.begin(), vint.end(), vi.begin(), 5, less<int>());
	//vector<int> vx = sub_vec(vint, 5, greater<int>());
	display(vx);
	return 0;
}