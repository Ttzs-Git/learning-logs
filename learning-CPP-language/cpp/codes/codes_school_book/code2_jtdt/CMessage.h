#pragma once
#include<iostream>
#include<cstring>
using namespace std;

class Cmessage
{
private:
	char* p;
public:
	Cmessage(const char* message);//构造函数
	~Cmessage();
	Cmessage operator=(const Cmessage& message);//重载运算符

};