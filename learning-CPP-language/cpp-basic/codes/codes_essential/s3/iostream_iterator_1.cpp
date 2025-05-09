#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
using namespace std;

// 目标:利用文件迭代器实现标准读入和输出

int main()
{
    // 使用文件流
    ifstream in_file("text.txt");
    ofstream out_file("text1.txt");
    if (!in_file || !out_file)
    {
        cerr << "Unable to open it!!!" << endl;
        return -1;
    }
    vector<string> astr{"hell0 ", "char", "math", "wuli", "huasd", "ad"};
    sort(astr.begin(), astr.end());
    istream_iterator<string> is(in_file);        // 输入迭代器绑定标准输入
    istream_iterator<string> eof;            // 默认截至
    ostream_iterator<string> oit(out_file, " "); // 输出迭代器绑定标准输出,间隔符号是“ ”

    copy(is, eof, astr.begin());
    copy(astr.begin(), astr.end(), oit);
    cout << endl;

    
    
    return 0;
}