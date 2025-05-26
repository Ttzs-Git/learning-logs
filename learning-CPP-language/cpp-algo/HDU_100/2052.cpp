#include <iostream>
#include <vector>
using namespace std;

// HDU 2052
int main()
{
    int m = 0, n = 0;
    while (cin >> m >> n)
    {
        // m竖 n横
        for (int i = 0; i < m+2; i++)
        {
            if (i == 0 || i == m + 1)
                cout << "+";
            else
                cout << "-";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m+2; j++)
            {
                if (j == 0 || j == m + 1)
                    cout << "|";
                else
                    cout << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < m+2; i++)
        {
            if (i == 0 || i == m + 1)
                cout << "+";
            else
                cout << "-";
        }
        cout << endl;
    }
    return 0;
}