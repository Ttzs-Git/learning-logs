#include <functional>
#include <iostream>
#include <queue>
#include<vector>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> maxheap;
    priority_queue<int,vector<int>,less<int>>  minheap;
    maxheap.push(5);
    maxheap.push(4);
    maxheap.push(3);
    maxheap.push(2);
    maxheap.push(1);
    int size=maxheap.size();
    bool empty=minheap.empty();
    maxheap.pop();
    int top=maxheap.top();
    return 0;
}

