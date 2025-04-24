#include"main5.h"

Triangle::Triangle(double r, double h) :
	r(r), h(h)
{
	cout << "Triangle is called" << endl;
}
void Triangle::Area() const
{
	cout << "Triangle's area is" << (PI * r * r * h) << endl;
}

Circle::Circle(double r) :r(r)
{
	cout << "Circle is called" << endl;
}

void Circle::Area() const
{
	cout << "Circle 's area is " << (PI * r * r) << endl;
}

void f(Shape* p)
{
	p->Area();
}

int main()
{
	Triangle tri(1, 1);
	Circle cir(1);
	f(&tri);
	f(&cir);
	return 0;
}
