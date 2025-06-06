#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

class Course
{
    string name;
    int number;

public:
    friend ostream &operator<<(ostream &out, const Course &p);
    friend istream &operator>>(istream &in, Course &p);
};

ostream &operator<<(ostream &out, const Course &p)
{
    out << p.name << " " << p.number << endl;
    return out;
}

istream &operator>>(istream &in, Course &p)
{
    in >> p.name;
    in >> p.number;
    return in;
}

int main()
{
    Course obj[100];
    ifstream in;
    in.open("course.txt");
    if (!in)
    {
        cerr << "error!!Not txt!!" << endl;
        return -1;
    }
    int i = 0;
    while (!in.eof())
    {
        in >> obj[i++];
    }
    i--;
    for (int j = 0; j < i; j++)
    {
        cout << obj[j] << endl;
    }
    in.close();
    return 0;
}