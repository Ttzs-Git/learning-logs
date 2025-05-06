#pragma once
#include<iostream>
using namespace std;


class Shape {//抽象类
public:
	virtual void Area() const = 0;//虚函数
	double PI = 3.1415926;
};

class Triangle : public Shape
{
	//圆柱
public:
	Triangle(double r, double h);
	void Area() const;
private:
	double r;
	double h;
};

class Circle :public Shape
{
	//圆
public:
	Circle(double r);
	void Area() const;
private:
	double r;

};