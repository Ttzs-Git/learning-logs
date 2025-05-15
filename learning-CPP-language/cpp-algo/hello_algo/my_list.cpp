#include "MyList.h"

MyList::MyList()
{
    arr = new int[arrCapacity];
}

MyList::~MyList()
{
    delete[] arr;
}

int MyList::size()
{
    return arrSize;
}

int MyList::capacity()
{
    return arrCapacity;
}

int MyList::get(int index)
{
    if (index < 0 || index >= size())
    {
        throw std::out_of_range("索引越界");
    }
    return arr[index];
}

void MyList::set(int num, int index)
{
    if (index < 0 || index >= size())
    {
        throw std::out_of_range("索引越界");
    }
    arr[index] = num;
}

void MyList::add(int num)
{
    if (size() == arrCapacity)
        ExtendCapcity();
    arr[size()] = num;
    arrSize++;
}

void MyList::insert(int index, int num)
{
    // 仅仅执行在内部的插入，尾部的插入有O(1)的add
    if (index < 0 || index >= size())
        throw std::out_of_range("索引越界");
    if (size() == arrCapacity)
        ExtendCapcity();
    for (int i = size(); i > index; --i)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = num;
    arrSize++;
}

int MyList::remove(int index)
{

    if (index < 0 || index >= size())
        throw std::out_of_range("索引越界");
    int num = arr[index];
    for (int i = index; i < size() - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }
    arrSize--;
    return num;
}

void MyList::ExtendCapcity()
{
    arrCapacity = arrCapacity * arrExtend;
    int *p = arr;
    arr = new int[arrCapacity];
    for (int i = 0; i < size(); ++i)
    {
        arr[i] = p[i];
    }
    delete[] p;
}

std::vector<int> MyList::toVector()
{
    std::vector<int> nums;
    // std::vectot<int> nums(size());
    for (int i = 0; i < size(); ++i)
    {
        nums.push_back(arr[i]);
    }
    return nums;
}