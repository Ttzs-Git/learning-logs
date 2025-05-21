#include <iostream>
#include <string>
#include <functional>
using namespace std;

int main()
{
    const int a = 1000007;
    size_t hasha = hash<int>()(a);
    bool b = true;
    size_t hashb = hash<bool>()(b);
    double c = 1.0086;
    size_t hashc = hash<double>()(c);
    string d = "helloalgo";
    size_t hashd = hash<string>()(d);
    cout << hasha << " " << hashb << " " << hashc << " " << hashd << endl;
    return 0;
}