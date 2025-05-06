#pragma once
#include<iostream>
using namespace std;

class Base
{
private:
	int a;
public:
	Base(int a);
	virtual ~Base();
};

class Drived :public Base
{
private:
	int* _b;
public:
	Drived(int b);
	~Drived();
};