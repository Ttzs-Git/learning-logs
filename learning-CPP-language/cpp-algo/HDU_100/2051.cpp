#include <iostream>
#include <stack>
using namespace std;

// HDU 2051
void f(int n)
{
    stack<int> num;
    while (n != 0)
    {
        num.push(n % 2);
        n = n / 2;
    }
    while (!num.empty())
    {
        int n = num.top();
        num.pop();
        cout << n;
    }
    cout << endl;
}

int main()
{
    int n = 0;
    while (cin >> n)
    {
        f(n);
    }
    return 0;
}