#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student {
private:
	int no;//学号
	string name;//姓名
public:
	Student();//默认构造函数
	Student(string name, int no);//含参构造函数
	void print();//展示函数
	void print(int n);//含参数展示函数
};