#pragma once
#include<iostream>
using namespace std;

template<typename n1, typename n2>
class base {
private:
	n1 a;
	n2 b;
public:
	base(n1 a, n2 b);
	~base()
	{
		cout << "~base is called" << endl;
	}
};