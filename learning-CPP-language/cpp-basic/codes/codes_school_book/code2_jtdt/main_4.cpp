#include "main04.h"

//void Point::Draw()
//{
//	cout << "Point is called" << endl;
//}

void Line::Draw()
{
	cout << "Line is called" << endl;
}

void Circle::Draw()
{
	cout << "Circle is called " << endl;

}


void f(Point* p)
{
	p->Draw();
}

int main()
{
	Point* p;//基类的指针
	Line L;
	Circle C;
	p = &L;//指向线类
	cout << "This is a line" << endl;
	f(p);
	p = &C;//指向圆类
	cout << "This is a circle" << endl;
	f(p);
	return 0;
}
