#pragma once
#include<iostream>
using namespace std;

class Base
{
private:
	int a;
public:
	Base(int a);
	virtual void print();
};

class Drived :public Base
{
private:
	int b;
public:
	Drived(int b);
	virtual void print();
};

