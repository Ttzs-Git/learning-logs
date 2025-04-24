#include<iostream>
#include<string>
using namespace std;

template<typename T>
T mymax(T a, T b)
{
	return a > b ? a : b;
}

string mymax(string a, string b)
{
	return a[0] > b[0] ? a : b;
}

int main()
{
	cout << mymax<string>("hello", "wwa") << endl;
	return 0;
}