#include<iostream>
#include<map>
#include<fstream>
#include<algorithm>
#include<string>
#include<iterator>
#include<vector>
#include<set>
using namespace std;



int main()
{
	map<string, int> word_count;//   统计单子和出现的次数
	vector<string> vstr{ "a","an","but","or","and","the" };
	set<string> word_excution(vstr.begin(), vstr.end());//记录不需要的单词
	string word;//输入的单词
	//定义输入和输出文件流
	ofstream outfile("outfile.txt");
	ifstream infile("infile.txt");
	if ((!infile) || (!outfile))
	{
		//检查安全性
		cerr << "Unable to open it !!!" << endl;
		return -1;
	}
	//查看输入流
	while (infile >> word)
	{
		if (word_excution.count(word))//检查是否在排除集中
		{
			continue;
		}
		word_count[word]++;
	}
	//输出内容
	//定义流迭代器
	map<string, int>::iterator it = word_count.begin();
	map<string, int>::iterator itend = word_count.end();
	
	for (; it != itend; ++it)
	{
		outfile << it->first << " " << it->second << endl;
	}



	return 0;
}