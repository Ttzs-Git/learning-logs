#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<int, string> map;
    map[10001] = "abc";
    map[10002] = "cdb";
    map[10003] = "sad";
    string na = map[10002];
    map.erase(10001);
    for (auto &p : map)
    {
        cout << p.first << "->" << p.second << endl;
    }
    for (auto it = map.begin(); it != map.end(); ++it)
    {
        cout << it->first << "->" << it->second << endl;
    }
    return 0;
}