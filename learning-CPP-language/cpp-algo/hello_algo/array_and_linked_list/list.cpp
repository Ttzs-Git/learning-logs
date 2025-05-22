#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 动态数组--列表
int main()
{
    // 初始化列表
    vector<int> nums(10); // 默认初始化
    vector<int> nums2 = {1, 0, 0, 1, 0, 1};
    // 访问列表
    int num = nums[0];
    nums[1] = -1;
    // 插入与删除元素
    nums.clear();
    nums.insert(nums.begin(), 1);
    nums.push_back(1);
    nums2.erase(nums2.begin() + 3);
    // 遍历元素
    // 索引遍历
    for (auto i = 0; i != nums2.size(); ++i)
    {
        cout << nums2[i] << " ";
    }
    // 元素遍历
    for (auto &num : nums)
    {
        cout << num << " ";
    }
    // 拼接列表
    nums2.insert(nums2.end(), nums.begin(), nums.end());
    // 排序列表
    sort(nums2.begin(), nums2.end());
    cout << endl;
    return 0;
}