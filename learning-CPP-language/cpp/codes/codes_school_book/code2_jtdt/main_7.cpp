#include"main_7.h"

Base::Base(int a) :
	a(a)
{
	cout << "Base is called" << endl;

}

Base::~Base()
{
	cout << "decountor" << endl;
}

Drived::Drived(int b) :
	Base(b)
{
	_b = new int(b);
	cout << "Drived is called" << endl;
}

Drived::~Drived()
{
	delete[] _b;
	cout << "decountor" << endl;
}

int main()
{
	//申请 动态内存空间
	Base* p = new Drived(9);
	//p->~Drived();
	Drived m(10);
	p = &m;
	p -> ~Base();// ~Drived();
	return 0;
}