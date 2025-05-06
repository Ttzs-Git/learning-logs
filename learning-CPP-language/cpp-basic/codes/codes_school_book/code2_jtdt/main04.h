#pragma once
#include<iostream>
using namespace std;

class Point
{
public:
	virtual void Draw() = 0;//
};

class Line :public Point
{
public:
	void Draw();

};

class Circle :public Point
{
public:
	void Draw();
};