#include<iostream>
#include<string>
using namespace std;

class POINT
{
    private:
    int x,y;
    public:
    POINT(int a,int b);
    void change(int a,int b);
    void show();
};

POINT::POINT(int a,int b):
x(a),y(b)
{
}


void POINT::change(int a,int b)
{
    x=a;
    y=b;
}

void POINT::show()
{
    cout<<"("<<x<<","<<y<<")"<<endl;
}

class CIRCLE:public POINT
{
    private:
    int r;
    public:
    CIRCLE(int a,int b,int c);
    void show();
};

CIRCLE::CIRCLE(int a,int b,int c):
POINT(a,b),r(c)
{

}

void CIRCLE::show()
{
    cout<<"the center of the circle is:\n";
    POINT::show( );
    cout<<"the radius is:"<<r<<endl;
}

int main()
{
    POINT p (2, 3);

    CIRCLE c (3, 4, 5);

    cout<<"original p:\n";

    p.show ();

    p.change (20,30);

    cout<<"changed p:\n";

    p.show ();

    cout<<"original c:\n";

    c.show ( );

    c.change (30,40);

    cout<<"changed c:\n";

    c.show ( );
    return 0;
}