#pragma once
#include<iostream>
#include<fstream>
#include<cstring>
#include<iomanip>
using namespace std;

class Student {
private:
	char name_[10];
	char id_[10];
	int age;
public:
	Student(const char* name = " ", const char* id = " ", int age = 18);
	friend ostream& operator<<(ostream& out, const Student& p);
};

