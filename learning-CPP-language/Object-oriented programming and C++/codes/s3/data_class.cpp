#include<iostream>
#include<string>
using namespace std;
class Data
{
private:
    int year;
    int day;
    int month;
public:
    Data(int year=2025,int month=3,int day = 19);
    Data();
    Data(const Data &p);
    ~Data();
    void show();
};

Data::Data(int year ,int month,int day):year(year),month(month),day(day)
{}

Data::Data()
{}

Data::Data(const Data &p)
{
    year=p.year;
    month=p.month;
    day=p.day;
}

Data::~Data()
{}

void Data::show()
{
    cout<<"现在是北京时间:"<<year<<"-"<<month<<"-"<<day<<endl;
}

int main()
{
    Data m=Data(2024,3,19);
    m.show();
    return 0;
}