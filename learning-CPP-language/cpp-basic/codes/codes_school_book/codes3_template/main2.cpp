#include"main2.h"

template<typename n1, typename n2>
base<n1, n2>::base(n1 a, n2 b) :
	a(a), b(b)
{
	cout << "base is called" << endl;
}

int main()
{
	int a = 1, b = 2;
	base<int, int> n(a, b);
	return 0;
}