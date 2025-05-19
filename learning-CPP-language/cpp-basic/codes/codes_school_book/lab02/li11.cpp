#include <iostream>
using namespace std;

class Vehicle
{
private:
    int MaxSpeed;
    int Weight;

public:
    Vehicle(int m, int w)
    {
        MaxSpeed = m;
        Weight = w;
        cout << "Constructiong Wehicle ...\n";
    }
    ~Vehicle()
    {
        cout << "Destructing Vechicle ...\n";
    }
    void Run()
    {
        cout << "The vechine is running!\n";
    }
    void Stop()
    {
        cout << "Please stop running!\n";
    }
    void Show()
    {
        cout << "It\'s maxspeed is :" << MaxSpeed << endl;
        cout << "It\'s weight is:" << Weight << endl;
    }
};

class Bicycle : virtual public Vehicle
{
protected:
    int Height;

public:
    Bicycle(int m, int w, int h) : Vehicle(m, w)
    {
        Height = h;
        cout << "Constructing Bicycle...\n";
    }
    ~Bicycle()
    {
        cout << "Destructing Bycycle..\n";
    }
    void Show()
    {
        Vehicle::Show();
        cout << "It\'s height is:" << Height << endl;
    }
};

class Car : virtual public Vehicle
{
public:
    int SeatNum;
    Car(int m, int w, int s) : Vehicle(m, w)
    {
        SeatNum = s;
        cout << "Constructing Car...\n";
    }
    ~Car()
    {
        cout << "Destructing Car...\n";
    }
    void Show()
    {
        Vehicle::Show();
        cout << "It\'s SeatNum is:" << SeatNum << endl;
    }
};
class MotorCycle : public Bicycle, public Car
{
public:
    MotorCycle(int m, int w, int h, int s) : Vehicle(m, w), Bicycle(m, w, h), Car(m, w, s)
    {
        cout << "Constructing MotorCycle..\n";
    }
    ~MotorCycle()
    {
        cout << "Destructing MotorCycle...\n";
    }
    void Show()
    {
        Vehicle::Show();
        cout << "It\'s height is:" << Height << endl;
        cout << "It\'s SeatNum is:" << SeatNum << endl;
    }
};
int main()
{
    Bicycle b(1, 1, 1);
    b.Run();
    b.Stop();
    b.Show();
    Car c(1, 1, 2);
    c.Run();
    c.Stop();
    MotorCycle mc(3, 3, 3, 3);
    mc.Run();
    mc.Stop();
    return 0;
}