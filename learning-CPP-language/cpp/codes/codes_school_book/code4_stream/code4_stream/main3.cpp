#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;

void CreateFile(string na) {
	ofstream out(na);
	if (!out)
	{
		cerr << "Unable to open it !!!" << endl;
		return;
	}
	//out << "Hello world" << endl;
	//out << "ennnn..." << endl;
	//out << "I love cat" << endl;
	char s[100];
	string m = "hello world";
	strcpy_s(s, m.c_str());
	out.write((const char*)s, strlen(s));
	out.close();
}

void ReadFile(string na)
{
	ifstream in(na);
	if (!in)
	{
		cerr << "Unable to open it!!" << endl;
		return;
	}
	string str;
	while (in >> str)
	{
		cout << str << endl;
	}
	string ma;
	char p[100] = " ";
	in.read((char*)p, 100);
	cout << p << endl;
	in.close();
}

int main()
{

	CreateFile("Test.txt");
	ReadFile("Test.txt");
	return 0;
}