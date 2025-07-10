#include <iostream>
#include <string>
using namespace std;

class Data
{
protected:
    string name;

public:
    Data(string pn)
    {
        name = pn;
    }
    void print()
    {
        cout << "name=" << name << endl;
    }
};

class Teacher : virtual public Data
{
protected:
    float sal;

public:
    Teacher(string nm, float sl) : Data(nm)
    {
        sal = sl;
    }
    void print()
    {

        cout << "sal=" << sal << endl;
    }
};
class Student : virtual public Data
{
protected:
    string id;

public:
    Student(string nm, string pid) : Data(nm)
    {
        id = pid;
    }
    void print()
    {
        Data::print();
        cout << "id=" << id << endl;
    }
};
class Postgrad : public Student
{
protected:
    string dn;

public:
    Postgrad(string name, string id, string dn) : Data(name), Student(name, id), dn(dn) {}
    void print()
    {
        Student::print();
        cout << "dn=" << dn << endl;
    }
};
class Tpost : public Postgrad, public Teacher
{
public:
    Tpost(string name, string id, string dn, float sal) : Data(name), Postgrad(name, id, dn), Teacher(name, sal) {}
    void print()
    {
        cout << "The teacher and postgraduate:" << endl;
        Postgrad::print();
        Teacher::print();
    }
};
int main()
{
    string name, id, dn;
    float sal;
    cin >> name >> id >> dn >> sal;
    Tpost p(name, id, dn, sal);
    p.print();
    return 0;
}