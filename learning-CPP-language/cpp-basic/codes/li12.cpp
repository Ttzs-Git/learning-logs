#include <iostream>
using namespace std;
const double pi = 3.1415;
class shape
{
public:
    virtual double volume() = 0;
};

class cylinder : public shape
{
private:
    double r;
    double h;

public:
    cylinder(double r, double h) : r(r), h(h)
    {
    }
    double volume()
    {
        return pi * r * r * h;
    }
};
class sphere : public shape
{
private:
    double r;

public:
    sphere(double r) : r(r) {}
    double volume()
    {
        return 4 / 3.0 * pi * r * r * r;
    }
};
int main()
{
    shape *p;

    double r, h;

    cin >> r >> h;

    cylinder cy(r, h);

    sphere sp(r);

    p = &cy;

    cout << p->volume() << endl;

    p = &sp;

    cout << p->volume() << endl;
    return 0;
}