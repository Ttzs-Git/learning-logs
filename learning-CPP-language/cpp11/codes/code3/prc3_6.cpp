#include"string.hpp"
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(auto &c:s)
    {
        c = 'X';
    }
    cout<<s<<endl;
    return 0;
}