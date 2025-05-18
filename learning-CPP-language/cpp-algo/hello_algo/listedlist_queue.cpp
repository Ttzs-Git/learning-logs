#include <iostream>
#include <vector>
#include <stdexcept>

struct ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

class LinkedListQueue
{
private:
    ListNode *front, *rear;
    int qeSize;

public:
    LinkedListQueue();
    ~LinkedListQueue();
    int size();
    bool empty();
    void push(int num);
    int ListedListQueue();
    int pop();
    std::vector<int> toVector();
};

LinkedListQueue::LinkedListQueue()
{
    front = rear = nullptr;
    qeSize = 0;
}

LinkedListQueue::~LinkedListQueue()
{
    while (front = nullptr)
    {
        ListNode *tem = front;
        front = front->next;
        delete tem;
    }
}

int LinkedListQueue::size()
{
    return qeSize;
}

bool LinkedListQueue::empty()
{
    return size() == 0;
}

void LinkedListQueue::push(int num)
{
    ListNode *p = new ListNode(num);
    if (empty())
        front = p;
    else
        rear->next = p;
    rear = p;
    qeSize++;
}

int LinkedListQueue::ListedListQueue()
{
    if (empty())
        throw std::out_of_range("队列为空");
    return front->val;
}

int LinkedListQueue::pop()
{
    int num = ListedListQueue();
    ListNode *tep = front;
    front = front->next;
    delete tep;
    qeSize--;
    return num;
}

std::vector<int> LinkedListQueue::toVector()
{
    std::vector<int> nums(size());
    ListNode *p = front;
    for (int i = 0; i < size(); ++i)
    {
        nums[i] = p->val;
        p = p->next;
    }
    return nums;
}

int main()
{
    return 0;
}