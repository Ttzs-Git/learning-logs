#include <iostream>
#include <string>
#include <map>
using namespace std;

// map的第一份作业:写一段程序，输入并统计其中的单词个数
// map的第二个任务:检查x元素是否在其中

// map检查元素的前提认识:
bool x_check(map<string, int> &twords, const string &word)
{
    // 缺点:污染原来的样本集合;且无法区分是元素的值为0，还是不存在该元素
    // 放弃！！！！
    if (!twords[word])
    {
        cout << "there is no this word" << endl;
        return false;
    }
    return true;
}

bool x_check2(map<string, int> &twords, const string &word)
{
    // find
    map<string, int>::iterator it = twords.find(word);
    if (it != twords.end())
    {
        cout << "yes" << endl;
        return true;
    }
    return false;
}

bool x_check3(map<string, int> &twords, const string &word)
{
    return twords.count(word); // 只返回0/1
}

int main()
{
    map<string, int> twards;
    string word;
    while (cin >> word)
    {
        twards[word]++;
    }
    map<string, int>::iterator it = twards.begin();
    map<string, int>::iterator h = twards.end();

    // 展示内容
    for (; it != h; ++it)
    {
        cout << "key:" << it->first // 这是一个指向map迭代器，其元素是pair
             << " "
             << "value:" << it->second << endl;
    }
    cout << x_check3(twards, "hello");
    return 0;
}