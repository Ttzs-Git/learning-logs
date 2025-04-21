#pragma once
#include<iostream>
using namespace std;
class Time {
private:
	int Hour;
	int Minute;
	int Second;
public:
	//Time(int Hour, int Minute, int Second);//构造函数
	//Time(const Time& t);//拷贝构造函数
	~Time();//析构函数
	//获取信息
	int GetHour() const;
	int GetMinute() const;
	int GetSecond() const;
	//改变信息
	void ChangeHour(int);
	void ChangeMinute(int);
	void ChangeSecond(int);
	//输出时间
	void PrintTime();
	//秒增加函数
	void IncreaceOneSecond();

};