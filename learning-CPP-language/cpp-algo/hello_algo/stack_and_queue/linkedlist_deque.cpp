#include <iostream>
#include <vector>
#include <stdexcept>

struct DoublyListNode
{
public:
    int val;
    DoublyListNode *prev;
    DoublyListNode *next;
    DoublyListNode(int val) : val(val), prev(nullptr), next(nullptr) {}
};

class LinkedListDeque
{
private:
    DoublyListNode *front, *rear;
    int dequeSize;

public:
    LinkedListDeque();
    ~LinkedListDeque();
    int size();
    bool empty();
    void push(int num, bool isFront);
    void pushFront(int num);
    void pushBack(int num);
    int pop(bool isFront);
    int popFront();
    int popBack();
    int peek(bool isFront);
    int peekFront();
    int peekBack();
    std::vector<int> toVector();
};

LinkedListDeque::LinkedListDeque() : dequeSize(0), front(nullptr), rear(nullptr)
{
}

LinkedListDeque::~LinkedListDeque()
{
    while (front != nullptr && rear != nullptr)
    {
        DoublyListNode *tep = front;
        front = front->prev;
        delete tep;
    }
}

int LinkedListDeque::size()
{
    return dequeSize;
}

bool LinkedListDeque::empty()
{
    return size() == 0;
}

void LinkedListDeque::push(int num, bool isFront)
{
    DoublyListNode *p = new DoublyListNode(num);
    if (empty())
    {
        front = p;
        rear = p;
    }
    else
    {
        if (isFront)
        {
            front->next = p;
            p->prev = front;
            front = p;
        }
        else
        {
            rear->prev = p;
            p->next = rear;
            rear = p;
        }
        dequeSize++;
    }
}

void LinkedListDeque::pushFront(int num)
{
    push(num, true);
}

void LinkedListDeque::pushBack(int num)
{
    push(num, false);
}

int LinkedListDeque::pop(bool isFront)
{
    if (empty())
        throw std::out_of_range("队列为空");
    int num = peek(isFront);
    if (isFront)
    {
        DoublyListNode *tem = front;
        front = front->prev;
        front->next = nullptr;
        tem->prev = nullptr;
        delete tem;
    }
    else
    {
        DoublyListNode *tem = rear;
        rear = rear->next;
        rear->prev = nullptr;
        tem->prev = nullptr;
        delete tem;
    }
    dequeSize--;
    return num;
}

int LinkedListDeque::popFront()
{
    return pop(true);
}

int LinkedListDeque::popBack()
{
    return pop(false);
}

int LinkedListDeque::peek(bool isFront)
{
    if (empty())
        throw std::out_of_range("双端队列为空");
    if (isFront)
        return front->val;
    else
        return rear->val;
}

int LinkedListDeque::peekFront()
{
    return peek(true);
}

int LinkedListDeque::peekBack()
{
    return peek(false);
}

std::vector<int> LinkedListDeque::toVector()
{
    std::vector<int> nums(size());
    DoublyListNode *p = front;
    for (int i = 0; i < size(); ++i)
    {
        nums[i] = p->val;
        p = p->prev;
    }
    return nums;
}

int main()
{
    return 0;
}