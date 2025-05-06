#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    int age;
    string name;
    public:
    static int count;
    Student(int m,string n);
    Student();
    void Print()const;
    ~Student();
};
int Student::count;

Student::Student(int m,string n):
age(m),name(n)
{
    count++;
}
Student::Student():
age(0),name("NoName")
{
    count++;
}
Student::~Student()
{
    count--;
}
void Student::Print() const
{
    static int a=0;
    cout<<count-a<<endl;
    cout<<"Name="<<name<<" , "<<"age="<<age<<endl;
}
int main()
{
     cout << "count=" << Student::count << endl;

    Student s1,*p = new Student( 23, "ZhangHong" ) ;    

    s1.Print( ) ;

    p -> Print( ) ;

    delete p;

    s1.Print( ) ;

    Student Stu[4];

    cout << "count=" << Student::count << endl ;
    return 0;
}