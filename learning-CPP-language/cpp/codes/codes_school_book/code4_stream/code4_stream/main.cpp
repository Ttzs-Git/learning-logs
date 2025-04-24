#include<iostream>
#include<string>
using namespace std;
const int SIZE = 100;

int main()
{
	char str1[SIZE], str2[SIZE];
	string str3, str4;
	cout << "请输入一些内容" << endl;
	cin >> str1;
	cout << str1 << endl;
	cin.getline(str1, SIZE);
	cout << str1 << endl;
	cin.get(str1, SIZE);
	cout << str1 << endl;
	cout << "请输入一些内容" << endl;
	cin >> str3;
	cout << str3 << endl;
	getline(cin, str3);
	cout << str3 << endl;
	return 0;

}