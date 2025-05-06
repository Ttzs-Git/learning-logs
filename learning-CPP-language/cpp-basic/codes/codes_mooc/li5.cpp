#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class Point
{

private:

	double X, Y;

public:

	Point( double a, double b );

	Point( Point &p );

	double GetX( ) ; 

	double GetY( ) ; 

};

Point::Point(double a,double b):
X(a),Y(b)
{   }

Point::Point(Point &p):
X(p.X),Y(p.Y)
{

}

double Point::GetX()
{
    return X;
}
double Point::GetY()
{
    return Y;
}


class Line
{

private:

	Point A,B ;                    		//定义两个Point类的对象成员

	double length ;

public:

	Line( Point p1 , Point p2 ) ;//Line类的构造函数原型，函数体类外实现

	double GetLength( );

};

Line::Line(Point p1,Point p2):
A(p1),B(p2)
{
    length=pow((pow((A.GetX()-B.GetX()),2)+pow((A.GetY()-B.GetY()),2)),0.5);
}


double Line::GetLength()
{
    return length;
}

int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    Point p1(a,b),p2(c,d);
    Line L(p1,p2);
    cout<<setprecision(3)<<L.GetLength()<<endl;
    return 0;
}