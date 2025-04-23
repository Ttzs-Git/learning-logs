#include "main.h"

Boy::Boy(string name, int age) :
	name(name), age(age)
{

}

Boy::~Boy() {

}

int Boy::GetAge()
{
	return age;
}

string Boy::GetName()
{
	return name;
}

Girl::Girl(string name, int age) :
	name(name), age(age)
{

}

Girl::~Girl() {

}

int Girl::GetAge()
{
	return age;
}

string Girl::GetName()
{
	return name;
}

void Girl::VisitBoy(Boy& boy)
{
	cout << "BOY的私有成员" << boy.age << " " << boy.name << endl;
}

void Boy::VisitGirl(Girl& girl)
{
	cout << "Girl的私有成员" << girl.age << " " << girl.name << endl;
}

void VisitBoyGirl(Boy& boy, Girl& girl)
{
	cout << "BOY的私有成员" << boy.age << " " << boy.name << endl;
	cout << "Girl的私有成员" <<girl.age << " " << girl.name << endl;

}
int main()
{
	Boy boy1("T", 18);
	Girl girl1("Y", 19);
	cout << "男生的年龄" << boy1.GetAge() << endl;
	cout << "女生的名字" << girl1.GetName() << endl;
	girl1.VisitBoy(boy1);
	boy1.VisitGirl(girl1);
	VisitBoyGirl(boy1, girl1);
	return 0;
}
