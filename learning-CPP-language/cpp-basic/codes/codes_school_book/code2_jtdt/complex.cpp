#include"complex.h"

Complex::Complex(float re, float im) :
	re(re), im(im)
{
}

void Complex::print()
{
	cout << re;
	if (im != 0) {
		cout << "+" << im << "i" << endl;
	}
}

Complex& Complex::operator+(float n)
{
	re += n;
	return *(this);
}

Complex& Complex::operator+(const Complex& n)
{
	re += n.re;
	im += n.im;
	return *this;
}

Complex& Complex::operator++()
{
	//前置++   ++i
	re++;
	im++;
	return *this;
}

Complex Complex::operator++(int)
{
	//后置++ i++
	Complex n(re, im);
	re++;
	im++;
	return n;
}

Complex& Complex::operator-(const Complex& n)
{
	re = re - n.re;
	im = im - n.im;
	return *this;
}

Complex operator*(const Complex& n1, const Complex& n2)
{
	Complex tem;
	tem.re = n1.re * n2.re - n1.im * n2.im;
	tem.im = n1.re * n2.im + n1.im * n2.re;
	return tem;
}

Complex operator/(Complex& n1, const Complex& n2)
{
	Complex tem;
	if (n2.re == 0 && n2.im == 0)
	{
		cout << "run error" << endl;
		return Complex(0, 0);
	}
	float m = n2.re * n2.re + n2.im * n2.im;
	tem.re = (n1.re * n2.re + n1.im * n2.im) / m;
	tem.im = (n1.im * n2.re - n1.re * n2.im) / m;
	return tem;
}

istream& operator>>(istream& in, Complex& n)
{
	//只适合设备的输入
	cout << "please input two numbers" << endl;
	in >> n.re >> n.im;
	cout << endl;
	return in;
}

ostream& operator<<(ostream& out, const Complex& n)
{
	out << n.re;
	if (n.im != 0)
	{
		out << "+" << n.im << "i" << endl;
	}
	return out;
}

int main()
{
	Complex a(1, 2);
	Complex b(2, 1);
	a = a + b;
	a.print();
	a = a + 3;
	//a = 3 + a;
	a.print();
	a = a / Complex(0, 0);
	cin >> b;
	cout << b;
	return 0;
}