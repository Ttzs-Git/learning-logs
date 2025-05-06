#include "BookCard.hpp"

BookCard::BookCard(string id, string stuName, int number) :
	id(id), stuName(stuName), number(number)
{

}

void BookCard::display()
{
	//展示信息
	cout << id << " " << stuName << " " << number << endl;
}

bool BookCard::borrow()
{
	if (number >= 10)
	{
		return false;
	}
	else {
		number++;
	}
}

void f(BookCard& bk)
{
	if (!bk.borrow())
	{
		bk.display();
		cout << "you have borrowed 10 books,can not borrow any more!" << endl;
	}
	else
		bk.display();
}
int main()
{
	BookCard bk1("B20190620", "东平", 10), bk2;
	f(bk1);
	f(bk2);
	return 0;
}
