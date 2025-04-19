#ifndef MAIN_HPP
#define MAIN_HPP
//引用头文件
#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;


//类声明

//全局函数声明
void greet(string &user_name);
void oftxt(const string& sth);
void oftxt(int sth);
void iftxt(string& str);
void guess(const int &anw);
void console(const int &failures);
void prompt(const int &n);
void game(vector<int> &vint,int &grade);
#endif