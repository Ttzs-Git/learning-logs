#include"Stack.h"

bool Stack::push(const string& str)
{
	if (full())
	{
		return false;
	}
	_stack.push_back(str);
	return true;
}

bool Stack::pop(string& elem)
{
	if (empty())
	{
		//检查空的
		return false;
	}
	elem = _stack.back();
	_stack.pop_back();//尾端删除元素
	return true;
}

bool Stack::peek(string& elem)
{
	if (empty()) {
		return false;
	}
	_stack.pop_back();//删除最后一个元素
	return true;
}

bool Stack::find(const string& elem)
{
	//查找是否有这个函数
	vector<string>::iterator it = ::find(_stack.begin(), _stack.end(), elem);//全局的find
	if (*it != elem)
	{
		return false;
	}
	return true;

}

int Stack::count(const string& elem)
{
	if (!find(elem))
		return 0;
	return ::count(_stack.begin(), _stack.end(), elem);
}

int main()
{
	Stack sta;
	sta.push("Hello world");
	sta.push("a");
	sta.push("a");
	sta.push("a");
	sta.push("a");
	sta.push("a");
	sta.push("ab");
	string elem;
	sta.pop(elem);
	cout << elem << endl;
	cout << sta.find("a") << endl;
	cout << sta.count("a") << endl;
	return 0;
}
