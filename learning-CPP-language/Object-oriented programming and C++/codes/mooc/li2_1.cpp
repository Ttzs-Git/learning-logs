#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int age;
    string name;
public:
    Student(int m,string n);
    Student();
    ~Student();
    void SetMember(int m,string n);
    int Getage();
    string Getname();
};

Student::Student(int m,string n)
{
    age=m;
    name=n;
    
}
Student::Student()
{
    age=0;
    name="unnamed";
}

Student::~Student()
{
}

void Student::SetMember(int m,string n)
{
    age=m;
    name=n;
}

int Student::Getage()
{
    // 返回年龄
    return age;
}

string Student::Getname()
{
    // 返回姓名
    return name;
}

int main()
{
    Student stu[3]={Student(13,"wang")};
    stu[2].SetMember(12,"zhang");
    for (int i =0;i!=3;++i)
    {
        cout<<stu[i].Getage()<<','<<stu[i].Getname()<<'\n';
    }
    return 0;
}