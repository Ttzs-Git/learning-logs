#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

int main()
{
	//输入流
	ifstream in("infile");
	if (!in)
	{
		cerr << "Unable to open it !!" << endl;
		return -1;
	}
	//流迭代器
	istream_iterator<string> it(in);
	istream_iterator<string> eof;
	// 输入到容器中
	vector<string> vstr;
	copy(it, eof, vstr.begin());
	//排序
	sort(vstr.begin(), vstr.end(), );
	return 0;
}