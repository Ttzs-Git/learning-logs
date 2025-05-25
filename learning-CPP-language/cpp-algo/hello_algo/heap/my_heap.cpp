#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MyHeap
{
private:
    vector<int> maxHeap;

public:
    MyHeap(vector<int> heap)
    {
        for (int i = 0; i != heap.size(); ++i)
        {
            maxHeap.push_back(heap[i]);
            siftUp(i);
        }
    }
    MyHeap(vector<int> heap, bool b)
    {
        maxHeap = heap;
        for (int i = parent(size() - 1); i > 0; i--)
        {
            siftdown(i);
        }
    }
    int left(int num)
    {
        return (2 * num + 1);
    }
    int right(int num)
    {
        return 2 * num + 2;
    }
    int parent(int num)
    {
        return (num - 1) / 2;
    }
    int peek()
    {
        return maxHeap[0];
    }
    int size()
    {
        return maxHeap.size();
    }
    bool empty()
    {
        return maxHeap.empty();
    }
    void push(int num)
    {
        maxHeap.push_back(num);
        siftUp(size() - 1);
    }
    void siftUp(int num)
    {
        while (num > 0)
        {
            if (maxHeap[num] > maxHeap[parent(num)])
            {
                swap(maxHeap[num], maxHeap[parent(num)]);
            }
            else if (maxHeap[num] >= maxHeap[parent(num)])
            {
                break;
            }
            num--;
        }
    }
    void pop()
    {
        if (empty())
        {
            throw out_of_range("超出索引范围");
        }
        swap(maxHeap[size() - 1], maxHeap[0]);
        maxHeap.pop_back();
        siftdown(0);
    }
    void siftdown(int num)
    {
        while (true)
        {
            int l = left(num), r = right(num), i = num;
            if (l < size() && maxHeap[l] > maxHeap[i])
            {
                i = l;
            }
            else if (r < size() && maxHeap[r] < maxHeap[i])
            {
                i = r;
            }
            else
            {
                break;
            }
            swap(maxHeap[i], maxHeap[num]);
            num = i;
        }
    }
};

int main()
{

    return 0;
}