#include <iostream>
#include <string>
#include <vector>
using namespace std;

void greet_1()
{
    string name_1, name_2;
    cout << "请输入你的姓:" << endl;
    cin >> name_1;
    cout << "请输入你的名" << endl;
    cin >> name_2;
    cout << "Hello,"
         << name_1 << name_2
         << "\n"
         << "goodbye"
         << "\n";
}

void greet_2()
{
    string name[2];
    cout << "请输入你的姓:" << endl;
    cin >> name[0];
    cout << "请输入你的名:" << endl;
    cin >> name[1];
    cout << "Hello,"
         << name[0] << name[1]
         << "\n"
         << "goodbye"
         << "\n";
}

void greet_3()
{
    vector<string> name(2);
    // string name1, name0;

    cout << "请输入你的姓:" << endl;
    // cin >> name[0];
    if (!(cin >> name[0]))
    {
        cerr << "读取名失败" << endl;
        return;
    }
    cout << "请输入你的名:" << endl;
    cin >> name[1];
    cout << "Hello,"
         << name[0] << name[1]
         << "\n"
         << "goodbye"
         << "\n";
}

int main()
{
    greet_2();
    cout << "HRLLO" << endl;
    return 0;
}