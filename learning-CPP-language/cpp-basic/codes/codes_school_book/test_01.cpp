#include <iostream>
#include <iomanip>
using namespace std;
// // class A
// // {
// // public:
// //     int x;
// //     A(int a = 0)
// //     {
// //         x = a;
// //         if (a == 0)
// //             cout << "A0" << endl;
// //         else
// //             cout << "A_" << endl;
// //     }
// // };
// // class B : public A
// // {
// // public:
// //     B(int b = 0) : A(b)
// //     {
// //         cout << 'B' << endl;
// //     }
// //     void show()
// //     {

// //         cout << x << endl;
// //     }
// // };
// // class C : virtual public A
// // {
// // public:
// //     C(int c = 0) : A(c)
// //     {
// //         cout << 'C' << endl;
// //     }
// //     void show()
// //     {
// //         cout << x << endl;
// //     }
// // };
// // class D : public B, public C
// // {
// // public:
// //     D(int d = 0) : B(d + 1), C(d + 2)
// //     {
// //     }
// // };
// // int main()
// // {
// //     D obj(5);
// //     obj.B::show();
// //     obj.C::show();
// //     return 0;
// // }
// class A1
// {
// public:
//     A1()
//     {
//         cout << "A1" << endl;
//     }
// };
// class A2
// {
// public:
//     A2()
//     {
//         cout << "A2" << endl;
//     }
// };
// class B : virtual public A1, virtual public A2
// {
// public:
//     B()
//     {
//         cout << "B" << endl;
//     }
// };
// class C : virtual public A2, virtual public A1
// {
// public:
//     C()
//     {
//         cout << "C" << endl;
//     }
// };
// class D : public B, public C
// {
// public:
//     D()
//     {
//         cout << "D" << endl;
//     }
// };

// int main()
// {
//     D d;
//     return 0;
// }
// int main()
// {
//     int n = 123;
//     string s = "sd";
//     double m = 1234.5678;
//     cout.setf(ios::hex);
//     cout.precision(10);
//     cout.width(10);
//     cout.fill('#');
//     cout << n << endl;
//     cout << m << endl;
//     cout << s << endl;
//     cout << n << endl;
//     cout << 133 << endl;
//     return 0;
// }
class A
{
public:
    A()
    {
        cout << " A" << endl;
    }
    A(const A &p)
    {
        cout << "A_copy" << endl;
    }
    A(int a)
    {
        cout << " A_N" << endl;
    }
    ~A()
    {
        cout << "De_A" << endl;
    }
};
A saw()
{
    A b;
    return b;
}
int main()
{
    A a;
    saw();
    return 0;
}