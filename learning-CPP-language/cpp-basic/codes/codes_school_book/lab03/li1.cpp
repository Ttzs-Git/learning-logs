#include <iostream>
using namespace std;
class Point
{
private:
    double x;
    double y;

public:
    Point(double x = 0, double y = 0) : x(x), y(y) {}
    Point &operator++()
    {
        x++;
        y++;
        return *(this);
    }
    Point operator-(const Point &p)
    {
        Point ans;
        ans.x = this->x - p.x;
        ans.y = this->y - p.y;
        return ans;
    }
    friend Point operator+(Point &B, double a);
    friend Point operator+(Point &B, const Point &m);
    friend ostream &operator<<(ostream &out, Point &p);
};
Point operator+(Point &B, double a)
{
    Point p;
    p.x += B.x + a;
    p.y += B.y + a;
    return p;
}

Point operator+(Point &B, const Point &m)
{
    Point p;
    p.x += B.x + m.x;
    p.y += B.y + m.y;
    return p;
}

ostream &operator<<(ostream &out, Point &p)
{
    out << "(" << p.x << "," << p.y << ")" << endl;
    return out;
}

int main()
{
    Point pt1(10.5, 20.8), pt2(-5.3, 18.4), pt3;
    cout << "original pt1,pt2,pt3 are:\n";
    cout << pt1 << pt2 << pt3;
    pt3 = pt1 + 100.8;
    cout << "after pt3=pt1+100.8, pt3 is:" << pt3;
    pt3 = pt1 + pt2;
    cout << "after pt3=pt1+pt2, pt3 is:" << pt3;
    pt3 = ++pt1;
    ++pt2;
    cout << "after ++ pt1,pt2,pt3 are:\n";
    cout << pt1 << pt2 << pt3;
    pt3 = pt1 - pt2;
    cout << "after pt3=pt1-pt2, pt3 is:" << pt3;
    return 0;
}
