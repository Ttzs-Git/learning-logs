#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream f("TEST_.txt");
	if (!f)
	{
		cerr << "unable to open it !!!" << endl;
		return -1;

	}
	int a = 0;
	int b = 4;
	char c1, c2;
	for (; a < b; a++, b--)
	{
		f.seekg(a, ios::beg);
		f.get(c1);
		f.seekg(b, ios::beg);
		f.get(c2);
		f.seekp(a, ios::beg);
		f.put(c2);
		f.seekp(b, ios::beg);
		f.put(c1);

	}
	f.close();
	return 0;
}