#include <iostream>
#include <string>
using namespace std;

// HDU 2054
void simple(string &x)
{
    size_t it = x.find('.');
    for (int i = x.size() - 1; i >= it; i--)
    {
        if (x[i] >= '1' && x[i] <= '9')
        {
            break;
        }
        else
        {
            x.erase(x.begin() + i);
        }
    }
}
bool s(string a, string b)
{
    simple(a);
    simple(b);
    return a == b;
}

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        cout << (s(a, b) ? "YES" : "NO") << endl;
    }
    return 0;
}