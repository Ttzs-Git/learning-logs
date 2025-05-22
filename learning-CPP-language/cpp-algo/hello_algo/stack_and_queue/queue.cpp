#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> queue; // 定义一个队列
    auto empty=queue.empty();
    auto size=queue.size();
    queue.push(1);
    queue.push(2);
    int num = queue.front();
    cout << num << endl;
    queue.pop();
    return 0;
}