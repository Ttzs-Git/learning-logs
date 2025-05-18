#include <iostream>
#include <vector>
#include <stdexcept>

// 基于链表的栈的实现
// 压栈
// 出栈
// 访问栈顶元素
// 转化为数组进行打印

struct ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

class LinkedListStack
{
private:
    ListNode *stackTop; // 栈的节点
    int stkSize;        // 栈的元素个数
public:
    LinkedListStack(int num);
    ~LinkedListStack();
    int size();
    bool empty();
    void push(int num);
    int top();
    int pop();
    std::vector<int> toVector();
};

LinkedListStack::LinkedListStack(int num)
{
    stackTop = nullptr;
    stkSize = 0;
}

LinkedListStack::~LinkedListStack()
{
    while (stackTop != nullptr)
    {
        ListNode *temp = stackTop;
        stackTop = stackTop->next;
        delete temp;
    }
}

int LinkedListStack::size()
{
    return stkSize;
}

bool LinkedListStack::empty()
{
    return size() == 0;
}

void LinkedListStack::push(int num)
{
    ListNode *p = new ListNode(num);
    p->next = stackTop;
    stackTop = p;
    stkSize++;
}

int LinkedListStack::top()
{
    if (empty())
        throw std::out_of_range("栈内空");
    return stackTop->val;
}

int LinkedListStack::pop()
{
    int num = top();
    if (size() == 0)
        throw std::out_of_range("栈内空");
    ListNode *temp = stackTop;
    stackTop = stackTop->next;
    delete temp;
    stkSize--;
    return num;
}

std::vector<int> LinkedListStack::toVector()
{
    ListNode *node = stackTop;
    std::vector<int> nums(size());
    for (auto i = size() - 1; i >= 0; ++i)
    {
        nums[i] = node->val;
        node = node->next;
    }
    return nums;
}

int main()
{
    return 0;
}