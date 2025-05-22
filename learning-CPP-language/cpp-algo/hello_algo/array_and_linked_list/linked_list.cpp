#include <iostream>
using namespace std;

// 链表的常用操作
// 链表的初始化
// 插入节点
// 删除节点
// 访问节点
// 查找节点

// 链表的定义
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

// 双向列表的定义
struct DoubleListNode
{
    int val;
    DoubleListNode *next;
    DoubleListNode *prev;
    DoubleListNode(int val) : val(val), next(nullptr), prev(nullptr) {}
};

// 节点的插入
void insert(ListNode *n0, ListNode *p)
{ // 即将插入的前面一个节点，插入节点
    ListNode *n1 = n0->next;
    p->next = n1;
    n0->next = p;
}

// 节点的删除
void remove(ListNode *n0)
{ // 删除n0之后的节点
    if (n0->next == nullptr)
        return;
    ListNode *n1 = n0->next;
    ListNode *n2 = n1->next;
    n0->next = n2;
    // delete n1;
}

// 节点的访问
ListNode *acess(ListNode *head, int index)
{
    for (int i = 0; i < index; ++i)
    {
        if (head == nullptr)
            return nullptr;
        head = head->next;
    }
    return head;
}

// 节点的查找
int find(ListNode *head, int num)
{
    int index = 0;
    while (head != nullptr)
    {
        if (head->val == num)
            return index;
        head = head->next;
        index++;
    }
    return -1;
}

// 链表的打印
void ListNodePrint(ListNode *head)
{
    while (head != nullptr)
    {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    // 链表的初始化
    ListNode *n0 = new ListNode(1);
    ListNode *n1 = new ListNode(2);
    ListNode *n2 = new ListNode(3);
    ListNode *n3 = new ListNode(4);
    n0->next = n1;
    n1->next = n2;
    n2->next = n3;
    ListNode *nx = new ListNode(0);
    // 函数测试
    insert(n0, nx);
    ListNodePrint(n0);
    remove(n2);
    ListNodePrint(n0);
    cout << (find(n0, 3)) << endl;
    cout << (acess(n0, 3) == nullptr) << endl;
    // 释放堆空间
    delete n0;
    delete n1;
    delete n2;
    delete n3;
    return 0;
}