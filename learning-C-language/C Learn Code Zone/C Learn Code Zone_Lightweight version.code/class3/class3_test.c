#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
//函数：一定的过程封装和细节隐藏；输入参数和返回值；库
//库函数；自定义函数
//求字符串长度   -strlen
//比较2个字符串的大小  -strcmp
//打印数据 
//。。。。

//虚拟机：虚拟出来一个电脑
//vmare workstation
//  vmdk  -500G
// 操作系统的知识
//D:\...\test.c

//四六级不重要。但是英语很重要


//IO相关函数
//字符串操作函数
//字符内存操作函数
//内存操作函数
//时间、日期函数
//数学函数
//其他库函数

//strcpy
//int main()
//{
//	int arr[20] = { 0 };
//	char arr2[] = "Hello bit";
//	strcpy(arr,arr2);
//	printf("%s\n",arr);
//	return 0;
//}
//函数名+函数模型+详细介绍+形式参数+返回值+例子+相关函数
//依赖的库


//memset
//mem-内存
//set-设置

//size—t 无符号整型
//int main()
//{
//	int a = 10;
//	char arr[20] = "Hello world";
//	memset(arr, 'x', 5);
//	memset(arr+6, 'x', 5);
//
//	printf("%s",arr);
//	return 0;
//}
//库函数的使用必须包含头文件

//MSDN
//CPP
//CPPreference    https://en.cppreference.com/w/
//https://zh.cppreference.com/w/%E9%A6%96%E9%A1%B5
//菜鸟教程也可以，但以上是官方文件


//自定义文件
//返回值类型 函数名（形式参数表）{函数体}

//函数：逻辑的封装；只需要输入，只给出输出；黑盒
// 最大值函数
//int Max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d",Max(a,b));
//}
//


//互换函数
//void change(int x, int x)
//{
//	//x，y是形式参数；当实参传递给实参时，实参是形参的一份临时拷贝
//	//
//	//所以对形参的修改，不会影响实参
//	int t = 0;
//	t = x;
//	x = y;
//	y = t;
//}
//void change(int* px, int* py)
//{
//	int z = *px;//z=a
//	*px = *py;//a=b
//	*py = z;//b=z
//	//变量z的值赋给指针py所指向的变量
//	//指针存储地址，指向相应的变量
//
//}
//int main()
//{
//	int a = 0, b = 0;
//	int* p = &a;
//	//a = 10;
//	//*a = 10;
//	scanf("%d%d",&a,&b);
//	printf("交换前：a=%d b=%d\n",a,b);
//	//a,b实际参数
//	change(&a,&b);
//	printf("交换后：a=%d,b=%d\n",a,b);
//	return 0; 
//}

//离开学校后，将失去应届生的身份，将不能参加校招
//应届生的身份比较重要
// 能力相同的条件下
//应届生——15k
//非应届生——10-12k

//大一——大二——大三：学习技术，参加日常实习
//大三找实习：找暑期实习（以就业为目的的）——转正
// 7-8月秋招提前批
//大四9月：秋招（大学生）
//9月-12月
//大四下：3-4-5月春招（最后一次）；6月份本科生身份结束

//一个工程下，可以有多个.c文件，但只能有一个main函数

//写一个函数交换两个整型的内容

//void change(int* p1, int* p2)
//{
//	int t = *p1;
//	*p1 = *p2;
//	*p2 = t;
//
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", add(a,b));
//	printf("a=%d,b=%d\n", a, b);
//	change(&a, &b);
//	printf("a=%d,b=%d", a, b);
//
//	return 0;
//}
//想改变外部变量，需要传址；
//其他，只需要传值；
//*p 跟p不同：前者是指向内容；后者是地址；A.B的地址是不能改变
// 
// 函数参数
// 实参和形参
// 实参：真实传给函数的参数——变量、常量、表达式、函数等-----一定有返回值
// 形参：只在函数被调用的时候才存在，占用空间；函数结束后，就会被销毁
// 形参实例化其实是实参的临时拷贝
// 
// 函数的调用：
//传值调用：对形参的修改不会影响实参
//传址调用：与实参建立了某种联系；函数内部可以控制函数内部；
//形参的指针变量里面存的是实参的地址

//素数判断函数_打印100—200间的素数
//素数是只能被1和他本身整除
//int isPrime(int a)
//{
//	int j = 2;
//	for (j = 2; j < a; j++)
//	{
//		if (a % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (isPrime(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//
//
//
//#include<math.h>
//int main()
//{
//	任意合数m都可以分解为a*b;其中一个因子必定不大于sqrt(m)
//	int i = 0, count = 0, j = 2;
//	for (i = 101; i <= 200; i+=2)//在奇数中，判断
//	{
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d   ", i);
//		}
//	}
//	printf("\n count=%d", count);
//	return 0;
// }

//数据结构：用C：指针+结构体+动态内存管理

//写一个函数：判断是不是闰年
//单一化功能的函数——方便；高内聚低耦合
//void counter_leap_year(int year,int* p)
//{
//	if (year % 400 == 0 || year % 100 != 0)
//	{
//		printf("%d  ", year);
//		*p += 1;
//	}
//}
//int main()
//{
//	int year = 1000;
//	int counter = 0;
//	for (year = 1000; year <= 2000; year += 4)
//	{
//		counter_leap_year( year,&counter);
//	}
//	printf("\n%d\n", counter);
//	return 0;
//}

//二分查找的函数
//先把函数怎么用想好。在写函数模块
//int binaty_search(int arr[], int k, int sz)
//{
// //如果在此处int sz = sizeof(arr) / sizeof(arr[0]);
//数组的传参，避免空间浪费——实际上传的是首元素的空间
// 形参arr[]看上去是数组且可以通过下标访问，但是本质上是一个指针变量，存arr[0],传的是地址；
// 在函数内部，计算形参数组的元素个数是不靠谱的
// 
//	int left = 0;
//	int right = sz-1;//数组中首标是0
//	while (right>=left)
//	{
//	int mid = left + (right - left) / 2;
//	if (arr[mid] == k)
//		return mid;//找到了返回下标
//	else if (arr[mid] < k)
//		left = mid + 1;
//	else
//		right = mid - 1;
//	}
//	return -1;
//}
////自定义函数：自己设定；return 自己定义根据需求，不能形成歧义
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	printf("请输入你想查询的数:>");
//	scanf("%d", &k);
//	printf("\n");
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了，返回下标
//	//找不到，返回-1
//	int ret = binaty_search(arr,k,sz);//数组传参，输入数组名
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("%d是它的下标",ret);
//	}
//	return 0;
//}
//形参和实参的名字可以相同，也可以不同

//bool类型
//C语言内置类型，在最初的设计中存在char short long int double float
//C99中引入BOOL，表示真假
//bool flag = true;
///bool cha = flase;
//bool hehe(int n)
//{
//	int j = 0;
//	if (j == 0)
//		return true;//return 1；
//	else
//		return false;//return 0；
// }
//bool 类型~int类型的01——将true false封装01
//bool大小为一个字节

//void test(int a[])
//{
//	int b[] = { 1,1,2,3,4,4,5,6 };
//	int sz2 = sizeof(a)/sizeof(a[0]);//只有形参的结果是1，原因是指针
//	printf("a[]的元素个数为%d\n", sz2);
//	int sz1 = sizeof(b)/sizeof(b[0]);
//	printf("b[]的元素个数为%d\n", sz1);
//}
//
//int main()
//{
//	int a[] = { 1,1,2,3,4,4,5,6 };
//	int sz = sizeof(a)/sizeof(a[0]);
//	printf("a[]的元素个数为%d\n\n", sz);
//
//	test(a);
//
//}


//调用函数，num+1
//传值
//int usef(int num)
//{
//	return num + 1;
//}
//int main()
//{
//	int num = 0;
//	num = usef(num);
//	printf("%d", num);
//}
// 
//传址函数——不需要回参
//void usef(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	usef(&num);
//	printf("%d", num);
//}
//num = usef(num);~num=usef(&num);
//不能return n++;
//使用return ++n;
//提倡不用创建全局变量


//函数的嵌套调用
//可以嵌套调用，不可以嵌套定义 
//函数的地位相同

//函数的链式访问
//依赖函数的返回值
//#include<string.h>
//int main()
//{
//	int a = strlen("abcdef");
//	printf("%d\n",a);
//	printf("%d\n", strlen("abcdef"));
//	//链式访问的前提：存在返回值
//	//返回无符号整型；链式访问
//	//把一个函数的返回值，作为另一个函数 的参数
//	//printf()返回值是字符打印的个数
//	//      1              2          43          
//	printf("%d", printf("%d", printf("%d", 43)));
//	//结果：4321
//	return 0;
//}
//函数不写返回值的时候，默认返回值是int
//函数默认返回函数执行过程中最后一条指令执行的结果
//无接收参数的函数传不传参的结果一样
// 
//不推荐以上的写法

//函数名(void)可以明确拒绝参数
//int main()--->明确的说明，main函数不需要参数
//但是，main函数有3个参数 
//int main(int argc,char* argv[],char *envp[])_>main函数是有参数的

//char *p 和char* p 的区别
/*含义上没有本质区别
在 C 和 C++ 语言中，char *p和char* p这两种写法在语义上是完全相同的。它们都声明了一个指针变量p，这个指针指向char类型的数据。
例如，以下两种写法都可以用来声明一个指针，用于指向一个字符或者字符数组：
char *p;
char* p;
风格差异
char *p这种写法，将*和变量p紧密相连。这种风格可能更强调p是一个指针类型的变量。在一些程序员的习惯中，当同时声明多个指针变量时，这种写法可以使代码看起来更清晰。例如：char *p1, *p2, *p3;这里很明确地表示p1、p2和p3都是指针变量。
char* p这种写法，将char*看作是一种类型（指向char的指针类型），然后再定义变量。在一些代码风格规范中，这种写法更符合将类型视为一个整体的理念。比如在写复杂的类型定义（如指向函数的指针等更复杂的类型）时，这种风格可能会更方便理解类型的整体结构。*/

//函数先声明再使用，
// 函数的声明:告诉你函数存在，可能是假的
//函数的定义：函数真真正正的存在，具体表现，交待函数的功能实现

 //int add(int, int);
//#include "add.h"
//#include "sub.h"
////自己制作的头文件用""
////库的采用<>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a,&b);
//	
//
//	int sum = add(a, b);
//	printf("%d",sum);
//	return 0;
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//声明一般放在头文件中

//在初学编程的时候，把所有的代码写到一个文件中最方便。
//但是，在公司中，分块更好
//1、协作的角度
//2、模块化的设计——阅读感
//3、业务拆分

//业务拆分——实现一个计算器
//加法+     减法+     乘法+    除法
//add.h|c  sub.h|c   mul.h|c   div.c|h

//声明+定义分离的好处
//包含头文件的意义：就会把头文件的内容拷贝过来~~~~~函数的声明的效果

//游戏引擎-----出售
//不暴露全部代码;
//add.h+add.c----->形成静态库；看到头文件就知道怎么用；但是静态库是二进制代码，不可见
//静态库.lib---<前提是：声明和定义分离
//声明一般放在头文件中
//#pragma comment(lib,"add.lib")  //静态库的导入
//#include "add.h"
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a,&b);
//	int sum = add(a, b);
//	printf("%d",sum);
//	return 0;
//}


//模块化代码——思路清晰+易于协作
//静态库的依赖的依赖。。。。
//动态库

//code _编辑器——多文件的文件


//函数的递归
//程序调用自身的编程技巧
//把一个大问题转化为一个与原问题相似的解题规模较小的问题求解
//核心思想：把大事化小

//接受一个整型值——>按顺序打印他的每一位
// 1234——> 1 2 3 4
//%d 是打印有符号的整数，%u是打印无符号整数

//函数递归

//void ss (unsigned int b)
//{
//	if (!b)
//		return;
//	int c = b % 10;
//	printf("%d  ",c);
//	ss( b/10);
//		
//}
//ss(1234)--->ss(123)  4--->ss(12) 3 4 --> ss（1） 2 3 4 - ---> 1 2 3 4
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d  ",n%10);
//	//逻辑一气到底，还要回溯
//	//逻辑递延，回归；
//}
//
//
//
//int main()
//{
//	unsigned int sum = 0;
//	scanf("%d", &sum);
//	//ss(sum);
//	print(sum);
//	return 0;
//}
// 
// 
// 直接递归——突出树
//没有条件——死递归——栈溢出Stack overflow
//内存——栈区、堆区、静态区
//   栈区——   局部变量、函数的形参、函数的返回值（有可能寄存区）、每次的函数的调用、返回值，都会在栈区（临时使用）中申请空间
// 堆区：动态内存分布：malloc、free、calloc、realloc
// 静态区：静态变量、全局变量
//函数栈帧的创建和销毁~~~~~
//递归的必要条件：限制条件、每一次递归后接近这个递归条件
//没有必错，有了不一定对

//编写函数不允许创建临时便令求字符串长度
#include<string.h>
//模拟实现strlen


//int my_strlen(char* p)//参数部分的数组形式、指针形式char arr[]
//{//一个字符一个字节
//	int count = 0;//计数；创建了临时变量
//	while (*p != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//递归求解——abcd-->bcd 1--->cd  1  -->d  1
//int my_strlen(char* p)
//{
//	if (*p == '\0')
//		return 0;
//	else
//	{
//		return  1 + my_strlen(p+1);//p++前置++，先传参，在++；不推荐++p，p的内容改变；而p+1,内容不改
//	}
//}
//
//
//
//int main()
//{
//	char arr[] = "abcd";
//	int n = my_strlen(arr);//传字符串的首字母的地址
//	printf("%d",n);
//	return 0;
//}
//递归和迭代
//迭代——循环....；
//
////n!的递归
//int fac1(int n)
//{
//	if (n <= 1)
//		return 1;
//	return n * fac1(n-1);
//}
////n! 的迭代_非递归
//int fac2(int n)
//{
//	int ret = 1;
//	int i = 1;
//	for (i = 1; i <= n; i++)
//		ret *= i;
//	return ret;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	printf("%d\n", fac1(a));
//	printf("%d\n", fac2(a));
//
//	return 0;
//}


//求第n个兔子数列的值
//int count = 0;
//int Fib1(int n)
//{
//	if (n == 3)
//		count++;//严重的重复计算
//	if (n <= 2)
//		return 1;
//	else
//		return (Fib1(n-1)+Fib1(n-2));
//}
//
////考虑迭代
//int f(int m)
//{
//	int i = 0;
//	int r = 1, t = 1;
//	int f= 1;
//	//if (m >= 3)
//	//{
//		for (i = 3; i <= m; i++)
//		{//r  t  f
//			f = r + t;
//			r = t;
//			t = f;
//		}
// 等价于while(m>=3)
//     {    f = r + t;
//			r = t;
//			t = f;
//         m--;
// }
//		return f;
//	//}
//	//else
//	//	return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d\n", f(n));
//
//	printf("%d\n", Fib1(n));
//}
//
//如何在递归和迭代中选择？
//如果递归——写出来、计算非常快，没有什么缺陷（效率低下）；
//如果递归不能，会栈溢出
//递归不是死递归，，递归层次太深，依然可能出现栈溢出的现象


//解决栈溢出的可能手法：
//递归——>非递归
// 局部对象——>静态对象：减少对栈区的占用

//但是递归也有重大应用
//汉诺塔问题——B站：比特大博哥
//青蛙跳台阶问题  每次跳一个或者两个台阶——C语言的刷题提训练营



//作业的讲解
//int main()
//{
//	int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (i = 5)//这里不是判断，这是赋值
//				printf("%d ",i);
//		}//这是死循环
//	return 0;
//}

//if语句中0表示假，非0表示真；
//if语句是一种分支语句，可以实现单分支，也可以实现多分支
//if语句可以后跟多个语句，要加大括号，形成一条语句块，语法上承认这是一条语句；

//C语言对缩进不敏感
// case后必须是常量表达式（char-属于整型家族，ASCII）；
// default可以放在任何位置——顺序；
// case语句不要求顺序；
// case后一定不可以是float\double
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch(n)
//	{ 
//		case 1:
//			printf("1\n");
//			break;
//		
//		case 2:
//			printf("2\n");
//			break;
//		default:
//			printf("hehe\n");
//			break;
//	}
//	return 0;
//}
//


//void change(int* a, int* b)
//{
//	int p =*a;
//	*a = *b;
//	*b = p;
//}
////将三个整数从大到小输出
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//排序
//	int tmp = 0;
//	if (a < b)
//	{
//		change(&a,&b);
//	}
//	if (a < c)
//	{
//		change(&a, &c);
//
//	}//保证最大的a
//	if(b<c)
//	{
//		change(&b, &c);
//
//	}
//
//	printf("%d  %d  %d\n",a,b,c);
//	return 0;
//
//}

//void three_judge(int n)
//{
//	if (n %3== 0)
//		printf("%d  ", n);
//}
//
//int main()
//{
//	int i = 0;
//	/*for (i = 1; i <= 100; i++)
//	{
//		three_judge(i);
//	}*/
//	for (i = 3; i <= 100; i += 3)
//		printf("%d  ", i);
//	return 0;
//}
//
////最大公约数
////暴力求解——不够高效
//int minmax(int a, int b)
//{
//	int c = (a < b ? a : b);
//	for (int i = c; i > 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//			return i;
//	}
//}
////辗转相除法----原理
//int zzz(int a, int b)
//{//a\b的大小无关
//	int c = a % b;
//	if (c == 0)
//		return b;
//	else
//	{
//		a = b;
//		b = c;
//		return zzz(a, b);
//	}
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	//生成最大公约数
//	int c = minmax(a, b);
//	int d = zzz(a, b);
//	printf("%d\n",c);
//	printf("%d", d);
//
//	return 0; 
//}

//最小公倍数——暴力解法|ab/最大公约数

//无break、goto、return continue的while语句中，条件判断表达式总是比循环体执行多一次
//数数字(1-100)9的总个数个数
// :9 19 29 ....
//90 91 
//int main()
//{
//	int i = 0, counter = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断是不是个位9，十位9
//		if (i % 10 == 9)
//			counter++;
//		if( i / 10 == 9)
//			counter++;
//
//		
//	}
//	printf("%d",counter);
//	return 0;
//
//}

//计算1/1-1/2+1/3+......-1/100
//int main()
//{
//	int i = 1;
//	float sum = 0;
//	float sign = 1.0f;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += sign/i;
//		sign = -sign;
//	}//循环内判断，会增加很多
//	printf("%f", sum);
//	return 0;
//}

////求10个整数中的最大值
//int main()
//{
//	int arr[10] = { 0 };
//	//int arr[]={0}根据初始化的内容推算元素的个数；否则会越界访问——错误示范
//	int i = 0;
//	//数组的输入
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	//找出最大值
//	int i = 0, max = arr[0];//不能是0，如果是全负数数组
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}
//
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d *%2d =%2d ",i,j,i*j);//右对齐2d;左对齐-2d；\t水平制表符
//		}
//		printf("\n");
//	}
//	return 0;
//}

//(v,u),(x,y)---->逗号表达式，算作一个参数；函数的值算做一个参数
//函数应该高内聚低耦合，参数不易过多
// 设计函数时，要做到谁申请的资源就谁来释放
//尽量要少用全局变量
//
//void print(int n)
//{
//	int i = 0, j = 0;
//	for (i = 1; i <= n; i++)
//	{
//	for (j = 1; j <= i; j++)
//	{
//		printf("%2d *%2d =%2d ", i, j, i * j);//右对齐2d;左对齐-2d；\t水平制表符
//	}
//	printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	
//	return 0;
//}

//返回主调函数2个结果：全局变量、参数为数组（本质是上指针）、参数为指针 
//return 3,4————>4(逗号表达式)
//arr[0]----*(arr+0)
//arr[1]----*(arr+1)

