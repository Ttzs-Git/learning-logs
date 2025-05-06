#pragma once
#include<iostream>
using namespace std;

class Complex {
private:
	float re;
	float im;
public:
	Complex(float re = 0, float im = 0);//构造函数
	void print();//展示函数
	//插入运算符的重载
	//输出运算符的重载
	Complex& operator+(float n);//+的操作符重载//使用后原来的值修改
	Complex& operator+(const Complex& n);//使用后原来的值修改
	Complex& operator++();//前置++的重载
	Complex operator++(int);//后置++的重载
	Complex& operator-(const Complex& n);
	friend Complex operator*(const Complex& n1, const Complex& n2);//乘法重载
	friend Complex operator/(Complex& n1, const  Complex& n2);//除法重载
	friend istream& operator>>(istream& in, Complex& n);//重载输入运算
	friend ostream& operator<<(ostream& out, const Complex& n);//重载输出运算
};