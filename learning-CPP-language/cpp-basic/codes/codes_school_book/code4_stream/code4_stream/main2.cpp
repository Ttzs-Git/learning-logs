#include<iostream>
#include<iomanip>
using namespace std;

ostream& setup(ostream& out)
{
	out.setf(ios::left);
	out << setw(10) << setfill('*');
	return out;
}

int main()
{
	cout.setf(ios::showpos | ios::hex);
	int n = 12306;
	cout << n << endl;
	cout.unsetf(ios::showpos | ios::hex);
	cout << setfill('#') << setw(10) << n << endl;
	cout << setup << 110 << endl;
	return 0;
}