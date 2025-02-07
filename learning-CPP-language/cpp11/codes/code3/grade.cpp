#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vint={10,50,60,70,90,60};
    vector<int> count(11);
    auto beg = vint.cbegin(),end = vint.cend();
    for(;beg!=end;++beg)
    {
        ++count[(int)(*beg)/10];
    }
    for(auto beg = count.cbegin();beg!=count.cend();++beg)
    {
        cout<<*beg<<" ";
    }
    cout<<endl;
    return 0;
}