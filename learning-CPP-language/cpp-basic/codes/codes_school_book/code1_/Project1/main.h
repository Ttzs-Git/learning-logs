#pragma once
#include<iostream>
#include<string>
using namespace std;
class Gril;
class Boy
{
private:
	string name;
	int age;
public:
	Boy(string name, int age);
	~Boy();
	string GetName();
	int GetAge();
	friend class Girl;
	void VisitGirl(Girl&);
	friend void VisitBoyGirl(Boy&, Girl&);
};

class Girl
{
private:
	string name;
	int age;
public:
	Girl(string name, int age);
	~Girl();
	string GetName();
	int GetAge();
	void VisitBoy(Boy&);
	friend class Boy;
	friend void VisitBoyGirl(Boy&, Girl&);
};