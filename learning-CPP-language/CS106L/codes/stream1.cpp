#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    ostringstream oss("ITO En Green Teo");
    // cout<<oss.str()<<endl;

    oss<<16.9<<string("Ounce");
    // cout<<oss.str()<<endl;

    oss<<"("<<"hello "<<")";
    // cout<<oss.str()<<endl;

    istringstream iss(oss.str());
    double num;
    string str1;
    iss>>num>>str1;
    cout<<str1<<" "<<num<<endl;
    return 0;
}