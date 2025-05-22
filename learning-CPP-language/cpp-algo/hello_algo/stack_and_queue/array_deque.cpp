#include <iostream>
#include <vector>
#include <stdexcept>

class ArrayDeque
{
private:
    std::vector<int> nums;
    int dequeSize;
    int front;

public:
    ArrayDeque(int capacity);
    int size();
    int capacity();
    bool empty();
    void pushFront(int num);
    void pushBack(int num);
    int index(int num);
    int popFront();
    int popBack();
    int peekFront();
    int peekBack();
    std::vector<int> toVector();
};

ArrayDeque::ArrayDeque(int capacity) : front(0), dequeSize(0)
{
    nums.resize(capacity);
}

int ArrayDeque::size()
{
    return dequeSize;
}

int ArrayDeque::capacity()
{
    return nums.size();
}

bool ArrayDeque::empty()
{
    return size() == 0;
}

int ArrayDeque::index(int num)
{
    return (num + capacity()) % capacity();
}

void ArrayDeque::pushFront(int num)
{
    if (size() == capacity())
    {
        std::cout << "双端队列已满" << std::endl;
        return;
    }
    else
    {
        front = index(front - 1);
        nums[front] = num;
        dequeSize++;
    }
}

void ArrayDeque::pushBack(int num)
{
    if (size() == capacity())
    {
        std::cout << "双端队列已满" << std::endl;
        return;
    }
    else
    {
        int rear = index(front + size());
        nums[rear] = num;
        dequeSize++;
    }
}

int ArrayDeque::popFront()
{
    if (empty())
        throw std::out_of_range("双端队列为空");

    int num = peekFront();
    front = index(front + 1);
    nums[front] = 0;
    dequeSize--;
    return num;
}

int ArrayDeque::popBack()
{
    if (empty())
        throw std::out_of_range("双端队列为空");
    int num = peekBack();
    int rear = index(front + size());
    nums[rear] = 0;
    dequeSize--;
    return num;
}

int ArrayDeque::peekFront()
{
    if (empty())
        throw std::out_of_range("双端队列为空");
    return nums[index(front)];
}

int ArrayDeque::peekBack()
{
    if (empty())
        throw std::out_of_range("双端队列为空");
    return nums[index(front + size() - 1)];
}

std::vector<int> ArrayDeque::toVector()
{
    std::vector<int> vint(size());
    for (int i = 0; i < size(); ++i)
    {
        vint[i] = nums[index(i + front)];
    }
    return vint;
}

int main()
{
    return 0;
}