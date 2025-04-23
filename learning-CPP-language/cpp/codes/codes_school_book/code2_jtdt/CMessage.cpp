#include"CMessage.h"

Cmessage::Cmessage(const char* message = "None")
{
	p = new char[strlen(message) + 1];
	strcpy_s(p, strlen(message) + 1, message);
}
Cmessage::~Cmessage()
{
	delete[] p;
}

Cmessage Cmessage::operator=(const Cmessage& message)
{
	//复制运算
	if (*p)
	{
		//如果p有内容就清除
		delete[] p;
	}
	p = new char[strlen(message.p) + 1];
	strcpy_s(p, strlen(message.p) + 1, message.p);
	cout << "hello" << endl;
	return p;
}

int main()
{
	Cmessage a("Ttzs is my wife");
	Cmessage b;
	b = a;
	return 0;
}
