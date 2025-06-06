#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

// HDU 2056
struct Point
{
    double x;
    double y;
    friend istream &operator>>(istream &in, Point &p);
};

istream &operator>>(istream &in, Point &p)
{
    in >> p.x >> p.y;
    return in;
}
void pointswap(Point &a, Point &b)
{
    // 图形标准化
    if (a.x > b.x)
        swap(a.x, b.x);
    if (a.y > b.y)
        swap(a.y, b.y);
}

int main()
{
    Point a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        pointswap(a, b);
        pointswap(c, d);
        double p = 0;
        if (b.x < c.x || a.x > d.x)
        {

            printf("%.2f\n", p);
        }
        else if (b.x > c.x && (a.y > d.y || b.y < c.y))
        {
            printf("%.2f\n", p);
        }
        else
        {
            pointswap(a, c); // min a
            pointswap(b, d); // max d
            printf("%.2f\n", abs(b.x - c.x) * abs(b.y - c.y));
        }
    }
    return 0;
}