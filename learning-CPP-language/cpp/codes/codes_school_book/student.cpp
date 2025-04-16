#include"Student.hpp"
//静态变量的初始化
int Student::count;

//直接构造函数的实现
Student::Student(string na,string id_,string nm,string sp,int age_):
name(na),id(id_),number(nm),speciality(sp),age(age_)
{
    cout<<"structor"<<endl;
}

//拷贝构造函数的实现
Student::Student(const Student& st):
name(st.name),id(st.id),number(st.number),speciality(st.speciality),age(st.age)
{
    cout<<"copy_structor"<<endl;
}

//数据获得函数
string Student::GetName()
{
    return name;
}
string Student::GetID()
{
    return id;
}
string Student::GetNumber()
{
    return number;
}
string Student::GetSpeciality()
{
    return speciality;
}

int Student::GetAge()
{
    return age;
}

//析构函数
Student::~Student()
{
    cout<<"destructor"<<endl;
}

//输出函数
void Student::Show()
{
    cout<<"学生的姓名:"<<name<<endl;
    cout<<"学生的身份证号:"<<id<<endl;
    cout<<"学生的学号:"<<number<<endl;
    cout<<"学生的专业:"<<speciality<<endl;
    cout<<"学生的年龄:"<<age<<endl;
}

//输入函数
void Student::Input()
{
    cout<<"请输入学生姓名: ";
    cin>>name;
    cout<<endl;
    cout<<"请输入学生身份证号: ";
    cin>>id;
    cout<<endl;
    cout<<"请输入学生学号: ";
    cin>>number;
    cout<<endl;
    cout<<"请输入学生专业: ";
    cin>>speciality;
    cout<<endl;
    cout<<"请输入学生年龄: ";
    cin>>age;
    cout<<endl;
}