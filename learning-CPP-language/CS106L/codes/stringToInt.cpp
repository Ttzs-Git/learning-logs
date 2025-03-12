#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int stringToint(const string &str)
{
    istringstream iss(str);
    int i;
    iss>>i;
    return i;
}

int main()
{
    string a="123";
    stringToint(a);
    return 0;
}