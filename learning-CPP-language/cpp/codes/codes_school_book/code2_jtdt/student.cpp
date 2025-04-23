#include"Student.h"

Student::Student()
{
	//默认构造函数
	no = 17;
	name = "同学";
}

Student::Student(string name, int no) :
	name(name), no(no)
{
	cout << " " << endl;
}

void Student::print()
{
	//默认打印函数
	cout << name << " " << no << endl;
}

void Student::print(int n)
{
	//含参数展示函数
	cout << name << " B" << n << no << endl;
}

int main()
{
	Student stu1("Ttzs", 18);
	Student stu2;
	stu2.print();
	stu1.print();
	stu1.print(2024);
	return 0;
}