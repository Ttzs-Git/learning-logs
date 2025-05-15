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