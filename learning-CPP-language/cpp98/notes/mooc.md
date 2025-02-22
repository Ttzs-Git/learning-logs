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