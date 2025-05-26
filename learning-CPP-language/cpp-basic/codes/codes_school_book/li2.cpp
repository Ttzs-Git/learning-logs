#include <iostream>
#include <cmath>
using namespace std;

class Container
{
protected:
    double radius;

public:
    Container(double r = 0) : radius(r) {}
    virtual double area() = 0;
    virtual double volume() = 0;
    virtual void print() = 0;
};
class Cube : public Container
{

public:
    Cube(double r = 0) : Container(r) {}
    double area()
    {
        return pow(radius, 2) * 6;
    }
    double volume()
    {
        return pow(radius, 3);
    }
    void print()
    {
        cout << "正方体的a是:" << radius << endl
             << "正方体的面积是:" << area() << endl
             << "正方体的体积是:" << volume() << endl;
    }
};
class Sphere : public Container
{
private:
    const double pi = 3.1415926;

public:
    Sphere(double r = 0) : Container(r) {}
    double area()
    {
        return 4 * pi * radius * radius;
    }
    double volume()
    {
        return pow(radius, 3) * 4 / 3 * pi;
    }
    void print()
    {
        cout << "球体的半径是:" << radius << endl
             << "球体的面积是:" << area() << endl
             << "球体的体积是:" << volume() << endl;
    }
};

class Cylinder : public Container
{
private:
    double h;
    const double pi = 3.1415926;

public:
    Cylinder(double r = 0, double h = 0) : Container(r), h(h) {}
    double area()
    {
        return pow(radius, 2) * pi * 2 + 2 * pi * radius * h;
    }
    double volume()
    {
        return pow(radius, 2) * pi * h;
    }
    void print()
    {
        cout << "圆柱体的半径是:" << radius << "," << "圆柱体的高是:" << h << endl
             << "圆柱体的面积是:" << area() << endl
             << "圆柱体的体积是:" << volume() << endl;
    }
};

void TopPrint(Container &r)
{
    r.print();
}
int main()
{
    // Container p(0);
    Container *p;
    Cube c(1);
    Sphere h(1);
    Cylinder cy(1, 1);
    p = &c;
    cout << p->area() << endl;
    cout << p->volume() << endl;
    p->print();
    p = &h;
    cout << p->area() << endl;
    cout << p->volume() << endl;
    p->print();
    p = &cy;
    cout << p->area() << endl;
    cout << p->volume() << endl;
    p->print();
    return 0;
}