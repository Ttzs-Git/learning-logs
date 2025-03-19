#include<iostream>
#include<sstream>
#include<string>
using namespace std;

 void printBits(const istream& iss);

int stringToint(const string &str)
{
    istringstream iss(str);
    printBits(iss);
    int i;
    iss>>i;
    if (iss.fail()) throw std::domain_error("error!");
    return i;
}

 void printBits(const istream& iss)
 {
    cout<<"State bits:"<<(iss.good()?'G':'-')
    <<(iss.fail()?'F':'-')
    <<(iss.eof()?'E':'-')
    <<(iss.bad() ? "B":"-")
    <<endl;
 }

int main()
{
    string a;
    cin>>a;
    stringToint(a);
    return 0;
}