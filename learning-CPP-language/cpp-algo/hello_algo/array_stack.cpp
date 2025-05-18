#include <iostream>
#include <vector>
#include <stdexcept>

class ArrayStack
{
private:
    std::vector<int> stack;

public:
    ArrayStack();
    ~ArrayStack();
    int size();
    bool empty();
    void push(int num);
    int pop();
    int top();
    std::vector<int> toVector();
};

ArrayStack::ArrayStack()
{
}

ArrayStack::~ArrayStack()
{
}

int ArrayStack::size()
{
    return stack.size();
}

bool ArrayStack::empty()
{
    return stack.empty();
}

void ArrayStack::push(int num)
{
    stack.push_back(num);
}

int ArrayStack::pop()
{
    int num = top();
    stack.pop_back();
    return num;
}

int ArrayStack::top()
{
    if (empty())
        throw std::out_of_range("栈内空");
    return stack.back();
}

std::vector<int> ArrayStack::toVector()
{
    return stack;
}

int main()
{
    return 0;
}