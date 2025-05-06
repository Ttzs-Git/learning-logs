#include"main_6.h"

Base::Base(int a) :
	a(a)
{
	cout << "Base is called" << endl;

}

void Base::print()
{
	cout << "a=" << a << endl;
}

Drived::Drived(int b) :
	b(b), Base(b)
{
	cout << "Drived is called" << endl;
}

void Drived::print()
{
	cout << "b=" << b << endl;
}

void f(Base& p)
{
	p.print();
}

int main()
{
	Base m(1);
	Drived n(2);
	cout << "This is sth about pointing Base" << endl;
	f(m);

	f(n);
	return 0;
}