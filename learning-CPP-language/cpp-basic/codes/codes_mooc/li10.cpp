#include<iostream>
#include<string>
using namespace std;
class Data{
    protected:
    string name;
    public:
    void print();
}
class Teacher:virtual public data
{
    protected:
    float sal;
    

}

class Student:virtual public data
{
    protected:
    string id;
}
class Postgrad:virtual public Student

int main()
{
    cout<<"The teacher and postgraduate:"<<endl;
    // 输入
    cin>>name>>id>>dn>>sal;
    cout<<"name="<<name<<endl;
    cout<<"id="<<id<<endl;
    cout<<"sal="<<sal<<endl;
    cout<<"dn="<<dn<<endl;
    cout<<"sal="<<sal<<endl;
    return 0;
}