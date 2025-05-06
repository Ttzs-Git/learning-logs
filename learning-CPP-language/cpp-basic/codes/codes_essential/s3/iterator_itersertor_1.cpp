#include <iostream>
#include <vector>
#include <iterator>
#include <functional>
using namespace std;

template <typename iterator, typename va, typename pre, typename output>
output my_filter(iterator beg, iterator end, output at, const va &val, const pre &plt)
{
    while ((beg = find_if(beg, end, bind2nd(plt, val))) != end)
    {
        *at = *beg;
        ++beg;
        ++at;
    }
    return at;
}

// 上述是my_filter的板子
// 任务使用插入迭代器：三种

int main()
{
    const int max_size = 8;
    int a[max_size] = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> avec = {a, a + max_size};
    vector<int> a2vec;
    my_filter(avec.begin(), avec.end(),
              back_inserter(a2vec), 3, less<int>());
    return 0;
}