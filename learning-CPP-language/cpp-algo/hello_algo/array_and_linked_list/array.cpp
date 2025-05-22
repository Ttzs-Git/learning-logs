#include <iostream>
using namespace std;

// 数组的常用操作
// 数组的定义
// 数组的访问
int randomAcess(int *arr, int size)
{
    int randIndex = rand() % size;
    int randNum = arr[randIndex];
    return randNum;
}

// 数组的插入
void insert(int *arr, int size, int num, int index)
{
    for (int i = size - 1; i > index; ++i)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = num;
}

// 数组的删除
void erase(int *arr, int size, int index)
{
    for (int i = index; i < size - 1; ++i)
    {
        arr[i] = arr[i + 1];
    }
}
// 数组的遍历(仅支持索引遍历)
int traverseIndex(int *arr, int size)
{
    // 索引遍历
    int ans = 0;
    for (int i = 0; i != size; ++i)
    {
        ans += arr[i];
    }
    return ans;
}
void travePrint(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 数组的查找
int find(int *arr, int size, int num)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == num)
            return i;
    }
    return -1;
}

// 数组的扩容
int *extend(int *arr, int size, int enlarge)
{
    int *p = new int[size + enlarge];
    for (int i = 0; i < size; ++i)
    {
        p[i] = arr[i];
    }
    delete[] arr;
    return p;
}

int main()
{
    // 初始化数组
    // 在栈上初始化
    int arr1[10];           // 默认初始化
    int arr2[] = {0, 1, 2}; // 指定初始化
    // 在堆上初始化---手动管理
    int *arr3 = new int[4];
    int *arr4 = new int[4]{1, 2, 3, 4}; // 需要指定大小和初始值

    // 操作
    cout << randomAcess(arr4, 4) << endl; // 随机访问测试
    travePrint(arr4, 4);
    cout << find(arr4, 4, 3) << endl;       // 查找测试
    cout << traverseIndex(arr4, 4) << endl; // 数组遍历求和
    erase(arr4, 4, 3);                      // 删除测试
    travePrint(arr4, 3);
    insert(arr4, 3, 5, 3); // 插入测试
    travePrint(arr4, 4);
    arr4 = extend(arr4, 4, 2);
    travePrint(arr4, 6);
    // 释放空间
    delete[] arr3;
    delete[] arr4;

    return 0;
}