#include "Time.hpp"

//类函数
//构造函数
//Time::Time(int Hour, int Minute, int Second) :
//	Hour(Hour), Minute(Minute), Second(Second)
//{
//	cout << "constructing.." << endl;
//}

////拷贝构造函数
//Time::Time(const Time& t) :
//	Hour(t.Hour), Minute(t.Minute), Second(t.Second)
//{
//	cout << "copy_constructing..." << endl;
//}

//析构函数
Time::~Time()
{
	cout << "Deconstructing.." << endl;
}

//信息获取函数
int Time::GetHour() const
{
	return Hour;
}

int Time::GetMinute() const
{
	return Minute;
}

int Time::GetSecond() const
{
	return Second;
}

//改变信息函数
void Time::ChangeHour(int Hour_)
{
	Hour = Hour_;
}

void Time::ChangeMinute(int Minute_)
{
	Minute = Minute_;
}

void Time::ChangeSecond(int Second_)
{
	Second = Second_;
}

//输出函数
void Time::PrintTime()
{
	cout << Hour << ":" << Minute << ":" << Second << endl;
}

//增加函数
void Time::IncreaceOneSecond()
{
	if (Second < 59)
	{
		Second++;

	}
	else
	{
		//Second==60
		//检查minute
		if (Minute < 59)
		{
			Second = 0;
			Minute++;
		}
		else {
			//Second==59
			//Minute==59
			if (Hour < 59) {
				Second = 0;
				Minute = 0;
				Hour++;
			}
			else
			{
				Second = 0;
				Minute = 0;
				Hour = 0;

			}
		}
	}
	PrintTime();
}

//void f(Time  t)
//{
//	//值参数
//	t.PrintTime();
//}

void f(Time& t)
{
	t.PrintTime();//引用参数
}

void f(Time* t)
{
	//指针参数
	t->PrintTime();
}

int main()
{
	Time t1(16, 11, 56);
	Time t2 = t1;
	cout << t1.GetHour() << " " << t1.GetMinute() << " " << t1.GetSecond() << endl;
	t1.PrintTime();
	t1.IncreaceOneSecond();
	t1.IncreaceOneSecond();
	t1.IncreaceOneSecond();
	t1.IncreaceOneSecond();
	t1.IncreaceOneSecond();
	f(&t1);
	return 0;
}