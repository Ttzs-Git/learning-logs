#include <iostream>
using namespace std;

// HDU 2004

int main()
{
    int i = 0;
    char g[] = {'E', 'D', 'C', 'B', 'A', 'A'};
    while (cin >> i)
    {

        if (i < 0 || i > 100)
        {
            cout << "Score is error!" << endl;
        }
        else
        {
            cout << g[((i - 60) < 0 ? 0 : (i - 60) / 10 + 1)] << endl;
        }
        // else if(i<60)
        // {
        //     cout<<"E"<<endl;
        // }
        // else if(i<70)
        // {
        //     cout<<"D"<<endl;
        // }
        // else if(i<80)
        // {
        //     cout<<"C"<<endl;
        // }
        // else if(i<90)
        // {
        //     cout<<"B"<<endl;
        // }
        // else
        // {
        //     cout<<"A"<<endl;
        // }
    }
    return 0;
}