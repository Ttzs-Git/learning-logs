#include <iostream>
#include <vector>
#include <stdexcept>
// 数组实现队列的一个重点: 用取模实现环形数组

class ArrayQueue
{
private:
    int *arr;
    int front;
    int Size;
    int Capacity;

public:
    ArrayQueue(int capacity);
    ~ArrayQueue();
    int size();
    bool empty();
    int capacity();
    int index(int num);
    void push(int num);
    int top();
    int pop();
    std::vector<int> toVector();
};

ArrayQueue::ArrayQueue(int capacity) : Capacity(capacity), front(0), Size(0)
{
    arr = new int[capacity];
}

ArrayQueue::~ArrayQueue()
{
    delete[] arr;
}

int ArrayQueue::size()
{
    return Size;
}

bool ArrayQueue::empty()
{
    return size() == 0;
}

int ArrayQueue::capacity()
{
    return Capacity;
}

int ArrayQueue::index(int num)
{
    return (num) % capacity();
}

void ArrayQueue::push(int num)
{
    if (size() == capacity())
    {
        std::cout << "队列已满" << std::endl;
        return;
    }
    int n = index(front + size());
    arr[n] = num;
    Size++;
}

int ArrayQueue::top()
{
    if (empty())
        throw std::out_of_range("队列为空");
    return arr[index(front + size())];
}

int ArrayQueue::pop()
{
    int num = top();
    front = index(front + 1);
    Size--;
    return num;
}

std::vector<int> ArrayQueue::toVector()
{
    std::vector<int> nums(size());
    int a = front;
    for (int i = 0; i < size(); ++i)
    {
        nums[i] = arr[a];
        a = index(a + 1);
    }
    return nums;
}

int main()
{
    return 0;
}