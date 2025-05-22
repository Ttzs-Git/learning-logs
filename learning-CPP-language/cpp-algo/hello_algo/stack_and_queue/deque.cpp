#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> deque;
    deque.push_back(1);
    deque.push_front(0);
    deque.pop_back();
    deque.pop_front();
    int num = deque.size();
    auto empty = deque.empty();
    cout << num << " " << empty << endl;
    return 0;
}