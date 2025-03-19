#include<iostream>
using namespace std;

int main()
{
    double radius;
    const double pi =3.14159; 
    cin>>radius;
    if(radius<=0)
    {
        cout<<"error input!"<<endl;
    }
    else
    {
        double circumference = 2*pi*radius;
        double area = pi*radius*radius;
        cout<<area<<" "<<circumference<<endl;
    }
    return 0;
}