#ifndef STUDENT_HPP
#define STUDENT_HPP
#include<iostream>
#include<string>
using namespace std;
//保障多文件下此处只有一个头文件的嵌入
class Student
{
    private:
    string name;
    string id;
    string number;
    string speciality;
    int age;
    public:
    //静态变量
    static int count;
    //获取数据成员的成员函数
    string GetName();    
    string GetID();
    string GetNumber();
    string GetSpeciality();
    int GetAge();
    //构造函数
    Student(string na="none",string id="00",string nm="00",string sp="none",int age=18);
    //拷贝构造函数
    Student(const Student& st);
    //析构函数
    ~Student();
    //输出函数
    void Show();
    //输入函数
    void Input();
};

#endif