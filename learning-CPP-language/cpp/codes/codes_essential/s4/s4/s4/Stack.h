#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Stack;//前置声明

class Stack
{
private://私有信息
	vector<string> _stack;
public://公有接口
	int size() { return _stack.size(); }
	bool empty() { return _stack.empty(); }
	bool full() { return _stack.size() == _stack.max_size(); }
	bool push(const string&);
	bool pop(string& elem);
	bool peek(string& elem);
	bool find(const string& elem);
	int count(const string& elem);
};