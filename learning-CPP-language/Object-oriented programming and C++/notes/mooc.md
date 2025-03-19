# 面向对象程序设计及C++MOOC练习

> 适用对象: 参加南京邮电大学的C++课程的学生

> 声明: 本指南仅用于参考,以及追求更好的编程经验。如果涉及抄袭等问题，按照校规后果自负。

## 例1:I/O流

![image-20250222132225197](mooc.assets/image-20250222132225197.png)

```c++
#include<iostream>
using namespace std;

int main()
{
    double radius;
    const double pi =3.14159; 
    cin>>radius;
    if(redius<=0)
    {
        cout<<"error input!"<<endl;
    }
    else
    {
        double circumference = 2*pi*radius;
        double area = pi*radius*radius;
        cout<<area<<" "<<circumference<<endl;
    }
    return 0;
}
```

> Q:我们是否还能再进一步改进？
>
> A(deepseek-R1):
>
> ```c++
> #include<iostream>
> using namespace std;
> 
> int main() {
>     double radius;
>     const double pi = 3.14159;
>     cin >> radius;
> 
>     if (radius > 0) {
>         double area = pi * radius * radius;
>         double circumference = 2 * pi * radius;
>         cout << area << " " << circumference << endl;
>     } else {
>         cout << "error input!" << endl;
>     }
> 
>     return 0;
> }
> ```
>
> 

## 例二:动态内存管理

![image-20250305192815686](D:\github\learning-logs\learning-CPP-language\cpp98\notes\mooc.assets\image-20250305192815686.png)

```c++
#include<iostream>
using namespace std;

//求整数的平均值和负数的个数
int main()
{
    int n =0;
    cin>>n;
    int *p = new int[n];//生成指定数量的动态数组
    double ave = 0,sum=0;
    int pos=0,number=0;
    for(int i=0;i!=n;++i)
    {
        cin>>p[i];
        if(p[i]>0)
        {
            ++pos;
            sum+=p[i];
        }
        if(p[i]<0)
        {
            ++number;            //统计负数的个数
        }
    }
    if(!pos)
    {
        ave =0;
    }
    else
    {
        ave=sum/pos;
    }
    cout << "ave=" <<ave<<"  number="<<number<<endl;
    delete []p;
    return 0;
}
```
>补充的测试样例:
>
>输入:0;返回:ave=0,  number=0

> Q:我们是否还能再进一步改进？
>
> A(qwen):
>
> ```c++
> #include <iostream>
> using namespace std;
> 
> // 函数声明
> void readArray(int* arr, int n);
> double calculatePositiveAverage(const int* arr, int n, int& positiveCount);
> int countNegatives(const int* arr, int n);
> 
> int main() {
>     int n;
>     cout << "请输入数组元素个数: ";
>     cin >> n;
> 
>     // 动态分配数组
>     int* p = new int[n];
> 
>     // 输入数组元素
>     readArray(p, n);
> 
>     // 计算正数平均值和统计负数个数
>     int positiveCount = 0;
>     double ave = calculatePositiveAverage(p, n, positiveCount);
>     int number = countNegatives(p, n);
> 
>     // 输出结果
>     cout << "ave=" << ave << "  number=" << number << endl;
> 
>     // 释放动态分配的内存
>     delete[] p;
> 
>     return 0;
> }
> 
> /**
>  * 从标准输入读取数组元素
>  */
> void readArray(int* arr, int n) {
>     for (int i = 0; i < n; ++i) {
>         cout << "请输入第" << i + 1 << "个元素: ";
>         cin >> arr[i];
>     }
> }
> 
> /**
>  * 计算正数的平均值，并通过引用返回正数的数量
>  */
> double calculatePositiveAverage(const int* arr, int n, int& positiveCount) {
>     positiveCount = 0;
>     double sum = 0.0;
>     for (int i = 0; i < n; ++i) {
>         if (arr[i] > 0) {
>             sum += arr[i];
>             ++positiveCount;
>         }
>     }
>     if (positiveCount == 0) {
>         return 0.0;
>     } else {
>         return sum / positiveCount;
>     }
> }
> 
> /**
>  * 统计负数的个数
>  */
> int countNegatives(const int* arr, int n) {
>     int count = 0;
>     for (int i = 0; i < n; ++i) {
>         if (arr[i] < 0) {
>             ++count;
>         }
>     }
>     return count;
> }
> ```

## 例三:练习类和对象数组的定义与使用,思考深拷贝与浅拷贝的问题

![image-20250319201225948](D:\github\learning-logs\learning-CPP-language\Object-oriented programming and C++\notes\mooc.assets\image-20250319201225948.png)1

```cpp
#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
    int age;
    string name;
public:
    Student(int m,string n);
    Student();
    ~Student();
    void SetMember(int m,string n);
    int Getage();
    string Getname();
};

Student::Student(int m,string n)
{
    age=m;
    name=n;
    
}
Student::Student()
{
    age=0;
    name="unnamed";
}

Student::~Student()
{
}

void Student::SetMember(int m,string n)
{
    age=m;
    name=n;
}

int Student::Getage()
{
    // 返回年龄
    return age;
}

string Student::Getname()
{
    // 返回姓名
    return name;
}

int main()
{
    Student stu[3]={Student(13,"wang")};
    stu[2].SetMember(12,"zhang");
    for (int i =0;i!=3;++i)
    {
        cout<<stu[i].Getage()<<','<<stu[i].Getname()<<'\n';
    }
    return 0;
}
```

> Q:我们是否有进一步改进的地方？
>
> A:(QW-2.5)
>
> ```cpp
> #include<iostream>
> #include<string>
> using namespace std;
> 
> class Student {
> private:
>     int age;
>     string name;
> 
> public:
>     // 构造函数
>     Student(int m = 0, const string& n = "unnamed") : age(m), name(n) {}
> 
>     // 设置成员变量
>     void SetMember(int m, const string& n) {
>         age = m;
>         name = n;
>     }
> 
>     // 获取年龄
>     int GetAge() const {
>         return age;
>     }
> 
>     // 获取姓名
>     string GetName() const {
>         return name;
>     }
> };
> 
> int main() {
>     // 在C++98中，数组元素不能直接使用构造函数初始化，所以我们逐个初始化
>     Student stu[3];
>     stu[0] = Student(13, "wang");
>     stu[1] = Student(); // 使用默认构造函数
>     stu[2] = Student();
>     stu[2].SetMember(12, "zhang");
> 
>     // 输出学生信息
>     for (int i = 0; i < 3; ++i) {
>         cout << stu[i].GetAge() << ',' << stu[i].GetName() << endl;
>     }
> 
>     return 0;
> }
> ```

## 例四：练习类与对象的定义与正确使用

![image-20250319201258064](D:\github\learning-logs\learning-CPP-language\Object-oriented programming and C++\notes\mooc.assets\image-20250319201258064.png)