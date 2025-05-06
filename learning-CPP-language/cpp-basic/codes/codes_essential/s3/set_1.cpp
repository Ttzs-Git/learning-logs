#include <iostream>
#include <set>
#include <string>
#include<vector>
using namespace std;

int main()
{
    set<string> strset;
    vector<string> strvect = {"a", "ane", "the", "but", "however", "and", "so", "of"};
    strset.insert(strvect.begin(), strvect.end());
//对于set拥有两种构造方式:迭代器构造,默认构造
    return 0;
}