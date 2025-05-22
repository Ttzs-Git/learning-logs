#ifndef MYLIST_H
#define MYLIST_H
#include <vector>
#include <stdexcept>
class MyList
{
private:
    int *arr;
    int arrSize = 0;      // 列表的大小
    int arrCapacity = 10; // 列表的容量
    int arrExtend = 2;    // 列表的扩容倍数
public:
    MyList();
    ~MyList();
    int size();                      // 获取列表的长度
    int capacity();                  // 获取容量
    int get(int index);              // 访问元素
    void set(int num, int index);    // 更改元素
    void add(int num);               // 尾部插入元素
    void insert(int index, int num); // 中间插入元素
    int remove(int index);           // 删除元素
    void ExtendCapcity();            // 扩容列表
    std::vector<int> toVector();     // 转化为vector
};
#endif

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


int main()
{
    return 0;
}