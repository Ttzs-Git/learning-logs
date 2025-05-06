#ifndef BOOKCARD_HPP
#define BOOKCARD_HPP
#include<string>
#include<iostream>
using namespace std;
class BookCard
{
private:
	string id;          //借书证学生的学号
	string stuName;    //借书证学生的姓名
	int number;       //所借书的数量
public:
	BookCard(string id = "B19010250", string stuName = "雪峰", int number = 4);//构造函数
	void display();//显示三个数据成员的信息
	bool borrow();//可接书的检测

};

#endif