#include<iostream>
#include<string>
using namespace std;

class Car
{
    private:
    string brand;
    string type;
    int year;
    double price;
    public:
    Car(string a="undefinition",string b="undefinition",int c=2000,double d=0);
    string GetBrand();
    string GetType();
    int GetYear();
    double GetPrice();
};

Car::Car(string a,string b,int c,double d):
brand(a),type(b),year(c),price(d)
{

}

string Car::GetBrand()
{
    return brand;
}

string Car::GetType()
{
    return type;
}

int Car::GetYear()
{
    return year;
}

double Car::GetPrice()
{
    return price;
}

int main()
{
    Car car1("FIAT","Palio",2021,6.5); 
    cout<<car1.GetBrand()<<" "<<car1.GetType()<<" "<<car1.GetYear() <<" " <<car1.GetPrice()<<endl; 
    Car car2; 
    cout<<car2.GetBrand()<<" "<<car2.GetType()<<" "<<car2.GetYear()<<" " <<car2.GetPrice()<<endl; 
    return 0;
}