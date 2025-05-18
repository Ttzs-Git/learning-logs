#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // 栈的初始化
    stack<int> stack;
    // 压栈
    stack.push(1);
    // 访问栈顶元素
    int top = stack.top();
    // 出栈
    stack.pop();
    // 栈的性质
    int size = stack.size();    // 大小
    bool empty = stack.empty(); // 空
    return 0;
}
