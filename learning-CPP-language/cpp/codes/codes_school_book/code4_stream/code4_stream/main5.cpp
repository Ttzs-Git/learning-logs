#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream in("Test.txt");
	ofstream out("Test1.txt");
	if (!in || !out)
	{
		cerr << "Unable to open it" << endl;
		return -1;
	}
	char ch;
	while (in.get(ch))
	{
		cout << ch;
		out.put(ch);
	}
	cout << endl;
	in.close();
	out.close();
	return 0;
}