#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long a, b;
    while (cin >> hex >> a >> b)
    {
        long long n = a + b;
        if (n < 0)
        {
            n = -n;
            printf("-");
        }
        cout << setiosflags(ios::uppercase) << hex << n << endl;
    }
}