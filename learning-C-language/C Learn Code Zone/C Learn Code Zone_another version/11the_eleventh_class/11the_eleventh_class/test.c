#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//指针进阶
//指针（变量）是变量，存放地址；指针是地址
//指针的大小是固定的4（32位）|8（64位）
//指针是有类型的，指针的类型决定了指针跟整数运算时的步长，指针解引用操作的时候的权限
//指针运算

//字符指针
//int main()
//{
//	//字符指针
//	/*char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c", ch);*/
//
//
//	//把字符串的首字符的地址赋值给了p
//	const char* p = "abcdef";//一个表达式中有值属性和类型属性
//	//char arr[]="abcdef";这个里面是数组中含有abcdef
//	//字符串赋给的是首元素a的地址
//
//	//常量字符串 直接赋给p可能不安全
//	//强行修改会引发写入权限异常，加上const进行修饰
//
//	printf("%s", p);//为什么*p是错误的？
//
//	//内存的布局?
//	//生成一个常量字符串
//	//将首元素 的地址付给p
//	//打印时，起始地址一直到‘\0’截至，打印的字符串
//	return 0;
//}

////练习1
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	if (p1 == p2)
//	{
//		printf("p1==p2\n");
//		//p1 p2 指向同一个字符串，常量字符串，放在只读数据区
//		//只读数据区，相同数据只存一份
//		//自然 p1 p2 存的地址是相同的
//	}
//	else
//		printf("p1!=p2");
//	if (arr1 == arr2)
//	{
//		printf("arr1==arr2");
//		//两个独立的数组在内存中开辟一块独立空间，起始地址肯定不同，但是内容是相等的
//	}
//	else
//		printf("arr1!=arr2");
//
//	return 0;
//}

////指针数组_存放指针的数组
//int main()
//{
//	////整形数组；字符数组
//	////指针数组存放的是指针
//	//int* arr2[6];//存放整形指针的数组，
//	//char* arr3[6];//存放字符指针的数组
// //char** arr4;//存放的是字符二级指针的数组
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	//模拟二维数组:arr1 arr2 arr3在内存中不连续存放
//
//	//打印parr
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//			//*(parr[i]+j)
//			//*(p+i)=p[i]
//		}
//		printf("\n");
//	}
//	return 0;
//}

//C语言实现简单的数据结构：指针+结构体+动态内存管理

//数组指针
//数组指针——指向的数组指针
//整形指针——指向整形的针织
//字符指针——指向字符的指针

//int* p1[];//指针数组,类型int* []
//int (*p2)[];//数组指针；指向int [],该数组的每个元素是int类型
//【】的优先级是高于* 所以必须加上（）保证p和*结合

////数组名
//int main()
//{
//	//int arr[10] = { 0 };
//	//int* p= arr;
//	//int (*p)[10] = &arr;
//	////int[10] (*p)——>int (*p)[10]
//	////数组指针是用来存放数组的地址
//	////去掉标识符，剩下的就是数据类型
//
//
//	//printf("%p\n", arr + 1);
//	//printf("%p\n", &arr[0] + 1);
//	//printf("%p\n", &arr + 1);
//
//	////printf("%d", sizeof(arr));
//	char* arr[5] = {0};
//	char (*pc)[5] = &arr;
//	//二级指针
//	char a = 'a';
//	char* pc = &a;
//	char** pcc= &pc;
//	return 0;
//}
////总结:
////1. 数组名通常表示的是数组首元素的地址
////但是有两个例外：1.sizeof(数组名)——>整个数组的大小|单位是字节
////				  2.&数组名——>整个数组的地址

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* q = arr;
//	int (*p)[10] = &arr;//此处【】不写是0；//此处是一个数组指针
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", q[i]);
//		//printf("%d ", (*p)[i]);//p解引用后相当于数组名，数组名
//	}//*p本质上是数组首元素的地址
//	return 0;
//}
////用法还是int* q比较好用一点；数组指针不是这么用的

////常见用法
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5], int r, int c)//行指针或者是数组指针
//{
//	int i = 0, j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//
//		}
//		printf("\n");
//	}
//
//
//}
//
////print1 print2差别其实不大
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	//arr表示首元素的地址——即第一行的地址，一维数组的地址
//	return 0;
//}
//
//int (*p)[5];
//p的类型是int (*)[5]
// 但是p指向整形数组
//p+1:跳过5个元素，指向下一个整形数组

//int arr[10];
//int (*p)[10]=&arr;//整个数组的地址
//int* p2=arr;//首元素的地址
//p+1跳过一个整形数组
//p2+1跳过1个元素

//p+i;跳过i个指向数据的类型的字节

//int (*parr3[10])[5];//parr3s是存放数组指针的数组 ，包括10个元素,每个元素是一个数组指针
// ，指向int [5]

//数组参数和指针参数——写数组名的情况
//一维数组的传参
// 普通的数组的接受：数组【】|数组【number】|指针//一维数组的【】number可写可不写
//指针数组的接受：（一模一样）数组；    二级指针
//void test(int** p)
//{
//}
//int main()
//{
//	int* p[20];
//	test(p);
//	return 0;
//}

//二维数组的传参
// 二维数组的数组名表示首元素的地址其实是第一行的地址
//函数的形参：数组（可以省略行|第一维，不可以省略列）；数组指针

//一级指针传参
//形参：指针；//?数组接收很好

//如果形参是一级指针，实参可以是本质一致的一级指针、普通变量的地址、一维数组的数组名

//二级指针传参
//函数的形参：二级指针

//如果形参是二级指针，实参可以是：二级指针，一级指针的地址，指针数组的数组名、三级指针解引用

////函数指针——指向函数的指针
////类比数组指针——指向数组的指针
//int add(int a, int b)
//{
//	return (a + b);
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int (*p)[5] = &arr;//数组指针
//	//&数组名——取出的是数组的地址
//	//printf("%p\n", &add);
//	//printf("%p", add);
//	//对于函数而言
//	//add-
//	//&add是一样的
//	//不能数值运算
//	int (*pf)(int, int) = &add;//指向函数的指针;括号中只要交代类型就可以
//	//int* pf(int, int);//函数的声明
//	//
//	(*pf)(2, 3);//传参数，并进行
//	//int ret = (*pf)(2, 3);//通过函数指针间接地访问函数
//	int ret = (pf)(2, 3);//可以写，也可以不写*,但是写*，必须加（）；add<-->pf--(*add)--(*pf)
//	printf("%d ", ret);
//	return 0;
//}

//int add(int a, int b)
//{
//	return a + b;
//}
//void calc(int (*pf)(int,int))
//{ 
//	int a = 9;
//	int b = 10;
//	int ret = (*pf)(9, 10);//? 完全可以直接调用函数
//	
//}
//int main()
//{
//	calc(add);
//	return 0;
//}
//函数——>代码区；只读，不能改

//int main()
//{
//	int* arr[4];//指针数组
//	int arr1[4];
//	int (*p)[4]=&arr1;//数组指针
//	char* arr4[4];
//	char* (*pa)[4] = &arr4;// 指针数组指针
//	char** pm = arr4;//二级指针
//	return 0;
//}

//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//int main()
//{
//	////函数指针——指向函数的指针
//	////printf("%p\n", &test);
//	////printf("%p\n", test);
//	//int (*pf)(const char*) = test;//类型要一致，可以没有名字;定义的时候必须写（*）
//	//pf("abc");
//	//test("abc");
//	//(*pf)("abc");
//	//printf("%u", sizeof(pf));//sizeof的操作数不能是函数
//
//	return 0;
//}
//typedef unsigned int uint;
//typedef void(*pf_t)(int);//把这样一个函数指针类型重命名为pf_t;
//int main()
//{
//	(*(void(*)())0)();//void(*p)()--函数指针；///函数的调用0作为的地址处 的函数
//	//void(*)()函数指针类型——强制类型的转化，0——>地址，无参无返回的函数
//	//调用0地址的这个函数
//	//0是解题关键——0x00000---0
//	//《C陷阱和缺陷》
//	void(* signal(int, void(*)(int)))(int);
//	//signal-函数名，跟后面的括号结合；如果是函数指针-(*signal)()
//	//void(*)(int);
//	//声明的signal函数的第一个参数的类型是int ，第二个参数的类型是函数指针,该函数的指针指向的函数参数是int,返回类型的void
//	//signal 函数的返回值是也是一个函数指针，该指针指向的函数参数是int ,返回值类型是void
//	pf_t signal(int, pf_t);
//	return 0;
//}
//
////函数指针的妙用
////项目：计算器：加减乘除
//void menu()
//{
//	printf("***************************************\n");
//	printf("**********  1.add    2.sub   **********\n");
//	printf("**********  3.mul    4.div   **********\n");
//	printf("**********  0.exit  Ttzs出品 **********\n");
//	printf("***************************************\n");
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a * b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
////回调函数机制
////C语言工程——函数指针是关键
//void calc(int (*pf)(int, int))
//{
//	int x = 0, y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//int main()
//{
//	int a = 0;
//	//由于while需要使用，不能定义在内部
//	do {
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &a);
//		switch (a)
//		{
//		case 1:
//			calc(add);
//			break;
//		case 2:
//			calc(sub);
//			break;
//		case 3:
//			calc(mul);
//			break;
//		case 4:
//			calc(div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (a);
//	return 0;
//}

//函数指针数组
//指针数组
//int* p[2];
//存放函数指针的数组
//int main()
//{
//	//函数类型（参数和返回类型）要一模一样
//	int(*p[4])(int, int) = { add, sub, mul, div };//arr就是函数指针的数组；
//	//int (*p)(int,int)=add;函数指针；
//	//数组的元素的数字要紧跟数组名
//	//调用函数
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		printf("%d \n", p[i](2, 3));
//	}
//	return 0;
//}
//
// 
// 
//函数指针数组---->极大简化了代码；有点类似于跳转的功能
//转移表
//如果链表的数据域使用了这个？嘿嘿嘿

//
//int main()
//{
//	int a = 0;
//	//由于while需要使用，不能定义在内部
//	int x = 0, y = 0;
//	do {
//		menu();
//		printf("请选择:>\n");
//		scanf("%d", &a);
//		int (*p[])(int, int) = { 0,add,sub,mul,div };
//		if (a >= 1 && a <= 4) {
//			printf("请输入操作数：> \n");
//			scanf("%d%d", &x, &y);
//			printf("%d \n", p[a](x, y));
//		}
//		else if (a != 0) {
//			printf("请重新输入: > \n");
//		}
//		else {
//			printf("退出计算器\n");
//		}
//	} while (a);
//	return 0;
//}

////指向函数指针数组的指针
//int main()
//{
//	int (*p[])(int, int) = { 0,add,sub,mul,div };
//	int(*(*pff)[5])(int, int) = &p;//函数指针数组的地址
//	return 0;
//}

//回调函数：通过函数指针调用的函数
//冒泡排序：最初的那个只能排序整形数据
//void bubble_sort(int* p, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组有序
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (p[j] > p[j + 1])
//			{
//				int t = p[j + 1];
//				p[j + 1] = p[j];
//				p[j] = t;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			return;
//		}
//	}
//}
//库函数qsort()函数——快速排序的思想实现的排序函数——这个函数可以排序任意函数的数据
///_cdecl-函数调用约定
#include<string.h>
#include<stdlib.h>
//void qsort(void* base,//排序的数据的起始位置
//	size_t num,//待排序的数据元素的个数——sz
//	size_t width,//待排序的数据元素的大小(单位是字节 )
//	int(*cmp)(const void* p1, const void* p2)//函数指针——比较函数;p1\p2要比较的两个元素的地址
//);
//比较两个整形元素
//e1|e2->整数
//
//typedef struct STU
//{
//	char name[20];
//	int age;
//}STU;
int cmp_int(const void* p1, const void* p2)
{
	return -(*(int*)p1) + (*(int*)p2);
}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,1,2,3,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//升序
//	//bubble_sort(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////测试使用q-sort来排序结构体
//int cmp_stu_name(const void* p1, const void* p2)
//{
//	return strcmp(((STU*)p1)->name, ((STU*)p2)->name);
//}
//int cmp_stu_age(const void* p1, const void* p2)
//{
//	return ((STU*)p1)->age - ((STU*)p2)->age;
//}
//
//void test2()
//{
//	STU s[] = { {"zhangsan",15},{"lisi",31},{"wangwu",25} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(STU), cmp_stu_age);
//}
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char* pa = &a;//类型不兼容
//	void* pv = &a;//void* 是无具体类型的指针，可以接受任意类型的指针，不能解引用和数值计算的操作
//	return 0;
//}
//
////qsort()函数——>void* 用于接受任何类型的指针——泛型
////交换函数_char函数
//void swp(char* b1, char* b2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *b1;
//		*b1 = *b2;
//		*b2 = tmp;
//		b1++;
//		b2++;
//	}
//}
//void bubble_sort(void* p, int sz, int width, int (*cmp)(const void* p1, const void* p2))
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组有序
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)p + j * width, (char*)p + (j + 1) * width) > 0)  //起始位置+偏移量
//			{
//				//交换函数
//				swp((char*)p + j * width, (char*)p + (j + 1) * width, width);
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			return;
//		}
//	}
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,1,2,3,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//升序
//	//bubble_sort(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}

//// 指针的复习
////int main()
////{
////	int a = 10;
////	int* p = &a;
////	*p = *p + 20;
////	printf("%d", *p);
////	return 0;
////	char c = 'a';
////	char* pc = &c;
////	指针类型决定：数值运算和解引用操作的访问权限；
////	指针数组：数组存放的是指针或者说地址；
////	int* arr[10];
////	数组名大部分情况下是首元素的地址；sizeof(数组名)——整个数组；&数 组名——整个数组的地址
////	int arr[3];
////	int (*p)[3]=&arr;--数组指针
////}

//int ADD(int x, int y)
//{
//	return x + y;
//
//}
//int main()
//{
//	printf("%p ", ADD);
//	int (*pf)(int, int) = ADD;
//	//* 除了定义之外外都是摆设
//	int i = (pf)(2, 3);
//	printf("%d", i);
//	return 0;
//}

//int (*arr[10])(int ,int);//元素是函数指针类型
//函数指针实现回调函数
//回调函数：通过函数指针调用的函数；函数有一个函数指针的接口
//qsort函数——使用冒泡函数模拟qsort函数

//1. qsort函数如何使用？
//2. 如何实现通用的排序？

//数据结构——指针+结构体+动态内存管理——>链表


//
//int main()
//{
//	//一维数组
//	int a[] = { 1,2,3,4 };
//	//数组有4个元素
//	printf("%d\n", sizeof(a));
//	//16——sieof(数组名)——数组名表示整个数组的，计算的是整个数组的大小
//	printf("%d\n", sizeof(a + 0));
//	//a+0——不再是单独的数组名|数组首元素的地址；指针是4/8(试卷会声明环境)
//	//a不是单独放在放在sizeof内部，也没有取地址，所以a就是首元素的地址
//	//a<==> &a[0];
//	printf("%d\n", sizeof(*a));
//	//a[0] 4
//	printf("%d\n", sizeof(a + 1));
//	//&a[1]->第二个元素的地址  4/ 8
//	printf("%d\n", sizeof(a[1]));
//	//第二个元素 4
//	printf("%d\n", sizeof(&a));
//	//数组指针的大小——4/8
//	//vs早期古老产品可能是16
//	printf("%d\n", sizeof(*&a));
//	//整个数组的地址解引用——16
//	//*和&相当于抵消 
//	printf("%d\n", sizeof(&a + 1));
//	//整个数组的地址+1——跳过整个数组--4/8
//	//&a+1  是从数组a的地址向后跳过了一个4个整形元素的数组的大小
//	printf("%d\n", sizeof(&a[0]));
//	//&a[0]--第一个元素的地址-4/8
//	printf("%d\n", sizeof(&a[0] + 1));
//	//&a[1]第二个元素的地址---4/8
//	return 0;
//}
//数组名的理解+指针运算、指针类型的意义
//#include<string.h>
//int main()
//{
//	//字符数组
//	char arr[] = { 'a','b','c','d','e','f' };
//	//6个元素
//	printf("%d\n", sizeof(arr));
//	//数组名现在是整个数组的大小------6个字节
//	printf("%d\n", sizeof(arr + 0));
//	//首元素的地址——4/8
//	printf("%d\n", sizeof(*arr));
//	//首元素的地址解引用——首元素—a[0]—1个字节
//	//*(arr+0)==arr[0]
//	printf("%d\n", sizeof(arr[1]));
//	//第二个元素的大小 1
//	printf("%d\n", sizeof(&arr));
//	//整个数组指针——4/8
//	printf("%d\n", sizeof(&arr + 1));
//	//数组后的地址--4/8
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//&arr[1]-第二个元素的地址--4/8
//	//sizeof(arr[0]+1)//4   整形的地址
//
//	//求字符串长度——关注'\0'；strlen只接受地址char* |首地址
//	printf("%d\n", strlen(arr));
//	//随机值；>=6
//	printf("%d\n", strlen(arr + 0));
//	//一模一样的随机值——首元素的地址
//	//printf("%d\n", strlen(*arr));
//	////*arr===arr[0]===a==97(地址)，野指针——程序报错问题，不一定能访问；读取访问冲突；直接退出程序或者报错
//	//printf("%d\n", strlen(arr[1]));
//	////类似 98 野指针
//	printf("%d\n", strlen(&arr));
//	//传入的数组指针,但是会强制类型转换，首元素的地址在相同位置，随机值
//	printf("%d\n", strlen(&arr + 1));
//	//随机值-6；小随机值
//	printf("%d\n", strlen(&arr[0] + 1));
//	//随机值-1
//	//小地址是完全不给用户访问，是属于内核的
//	//C语言中的地址都是虚拟地址，还需要经过计算才能转换成物理地址
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));
//	//整个数组——7个字节
//	printf("%d\n", sizeof(arr + 0));
//	//首元素的地址-4/8
//	printf("%d\n", sizeof(*arr));
//	//首元素-1
//	printf("%d\n", sizeof(arr[1]));
//	//第二个元素-1
//	printf("%d\n", sizeof(&arr));
//	//整个数组的地址-4/8
//	printf("%d\n", sizeof(&arr + 1));
//	//整个数组后的地址-4/8
//	printf("%d\n", sizeof(&arr[0] + 1));
//	//&arr[1]-4/8
//
//	//strlen求字符串长度的，关注的是字符串中的\0,计算的是\0之前出现的字符个数
//	//strlen是库函数，只针对字符串
//	//sizeof()只关注占用内存空间的大小，不在乎内存中的放的是什么
//	//sizeof是操作符
//	printf("%d\n", strlen(arr));
//	//字符串长度 6
//	printf("%d\n", strlen(arr + 0));
//	//6
//	printf("%d\n", strlen(*arr));
//	//？error
//	printf("%d\n", strlen(arr[1]));
//	//？error
//	printf("%d\n", strlen(&arr));
//	//6
//	printf("%d\n", strlen(&arr + 1));
//	//?随机值
//	printf("%d\n", strlen(&arr[0] + 1));
//	//5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";//常量字符串在内存（常量区）中有自己的地址
//	//指针变量是在栈区
//	printf("%d\n", sizeof(p));
//	//首元素的地址--4/8
//	printf("%d\n", sizeof(p + 1));
//	//第二个元素的地址-4/8
//	printf("%d\n", sizeof(*p));
//	//首元素的大小-1
//	printf("%d\n", sizeof(p[0]));
//	//首元素的大小-1
//	printf("%p\n", p);
//	printf("%d\n", sizeof(&p));
//	//指针的指针--二级指针|-4/8
//	printf("%p\n", &p);
//	printf("%d\n", sizeof(&p + 1));
//	//二级指针+1---4/8
//	printf("%p\n", &p + 1);
//
//	printf("%d\n", sizeof(&p[0] + 1));
//	//第二个元素的地址--4/8
//
//
//	printf("%d\n", strlen(p));
//	//6
//	printf("%d\n", strlen(p + 1));
//	//5
//	//printf("%d\n", strlen(*p));
//	////error
//	//printf("%d\n", strlen(p[0]));
//	////error
//	printf("%d\n", strlen(&p));
//	//随机值？
//	printf("%d\n", strlen(&p + 1));
//	//随机值？没没有关系的随机值
//	printf("%d\n", strlen(&p[0] + 1));
//	//5
//	return 0;
//}

//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//整个数组-12*4=48；
//	printf("%d\n", sizeof(a[0][0]));
//	//首元素的大小-4
//	printf("%d\n", sizeof(a[0]));//a[0]表示第一行整个一位数组的数组名
//	//第一行的大小-4*4；//sizeof(数组名)-整个数组的大小
//	printf("%d\n", sizeof(a[0] + 1));
//	//a[0]不单独且且未取地址，表示首元素地址
//	//a[0][1]-4/8--a[0][0]+1
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//a[0][1]  -4
//	printf("%d\n", sizeof(a + 1));
//	//a虽然是二维数组的地址，但是未取地址且不单独
//	// //a表示首元素的地址，二维数组的首元素的地址就是他第一行的地址
//	//第二行的行指针- 4/8   
//	//&a+1//跳过整个二位数组的地址
//	printf("%d\n", sizeof(*(a + 1)));
//	//*a[1]-对第二行的地址的解引用-16
//	printf("%d\n", sizeof(&a[0] + 1));
//	//a[1]-第二行的行指针--4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//第二行的解引用-16
//	printf("%d\n", sizeof(*a));
//	//数组首元素的解引用-16
//	printf("%d\n", sizeof(a[3]));
//	//数组没有第四行，数组第四行--16
//	//sizeof()--分析类型，而非真正的访问数组，计算它的字节
//	return 0;
//}

//任何数组都遵守：
//1. sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小。
//2. & 数组名，这里的数组名表示整个数组，取出的是整个数组的地址。
//3. 除此之外所有的数组名都表示首元素的地址。

//做好当下，踏踏实实往前走——心态很好
// 不建议太长的静态规划，
//OKR--完成关键结果，实现目标

//笔试题：

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);//a的类型是 int(*) [5]//若过没有强制类型转化，汇报警报。但是值不变
//	//取出数组的地址+1==数组后的地址;
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	//					2   ,  5 
//	return 0;
//}

////x86
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//	printf("%p\n", p + 0x1);
//	//0x100014//指针+1
//	printf("%p\n", (unsigned long)p + 0x1);
//	//转化成了无符号长整型---0x10001-----整形+1
//	printf("%p\n", (unsigned int*)p + 0x1);//指针+1
//	//0x100004
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	//数组后地址
//	int* ptr2 = (int*)((int)a + 1);
//	//0x10001//首元素的
//	//   假设a=0x00012121
//	//   a+1=  0x00012125
//	//(int)a+1 0x00012122
//	//%x 用于以16进制格式输出整数值
//	// 小端——低地址--低位数
//	//小端存储模式-------01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00、
//	//			低地址													高地址
//	//ptr2存储的   0x00 00 00 02
//	//			   0x02 00 00 00
//	printf("%x,%x", ptr1[-1], *ptr2);
//	//a[3]  -4
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	//			区别()和{}：小括号是逗号表达式
//	//			{ 1, 3  , 5 }
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	//a[0][0]=1
//	return 0;
//}

////画图—一维数组[25]
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	//行指针
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}
// %u-打印补码
//%p--直接打印内存中的补码--无符号数
//-4
//1000 0000 0000 0000 0000 0000 0000 0100
//111111111111111111111111111111111111011
//111111111111111111111111111111111111100->补码
//地址没有原反补的概念，直接以16进制打印
//FF FF FF FC


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	//数组后地址
//	int* ptr2 = (int*)(*(aa + 1));
//	//&aa[1][0]
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	//				10          5
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}
//指针的类型决定了数值计算时跳过几个字节
int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	//           p1       p2     p3      p4
	char** cp[] = { c + 3,c + 2,c + 1,c };
	//              //&p4  &p3  &p2  &p1
	char*** cpp = cp;
	//            &&p4
	printf("%s\n", **++cpp);
	//              * p3-POINT

	printf("%s\n", *-- * ++cpp + 3);
	//              er
	printf("%s\n", *cpp[-2] + 3);
	//              st
	printf("%s\n", cpp[-1][-1] + 1);
	//           ew
	return 0;
}
//注意：++cpp和cpp+1的区别

//代码——>画出内存布局——> 代码-瞬间想起-内存布局

//编程————内存
				//函数递归
				//函数栈帧


//数据结构一定要画图


//如何解决指针问题——画图法