#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//数组：一组相同类型元素的集合
//数组的创建方式:数组的元素类型  数组名【常量表达式——>数组的大小】
//int main()
//{
//	int arr2[10] = {0};
//	char ch[5];
//	double data[20];//可以是常量或者常量表达式；
//	//C99标准之前：数组的大小必须是常量或者常量表达式
//	//在其之后，数组的大小可以是变量，为了支持边长数组
//	/*int n = 10;
//	scanf("%d", &n);
//	int ar[n];*///这种数组是不能初试化的
//	//gcc的编译器是支持
//	//gcc test.c -std=c99
//	//数组的初始化——>创建并给一定的值
//
//
//	//不完全初始化
//	int  arr[10] = {1,2,3};//其余为0
//
//	char ch1[5] = {'a','c'};//其余为‘0’
//	//a c 0 0  0
//	char cha[5] = "ac";
//	//a c \0 0 0 ---->字符串的形式（打印）
//
//	//根据初试化的内容，形成大小
//	char arr4[] = "abcd";
//
//	//[]数组下标引用操作符
//	//连续的空间
//	//这里的编号从0开始
//	//打印数组——数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//	for (i = sz-1; i >=0; i--)
//	{
//		printf("%d  ", arr[i]);
//	}
//	//数组可以使用下标来访问，下标是从0开始的；数组的大小都可以通过计算得到
//	return 0;
//}

//一维数组在内存布局：随着下标增长，数组的地址也在进行有规律地增长；一维数组在内存中是连续存放的
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,56,786,5,72};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);//每一个整型占4个字节
//	
//	}
//	return 0;
//}

////二维数组——创建和初试化
////1 2 3 4 
////2 3 4 5
////3 4 5 6
//int main()
//{
//	//不完全初始化+完全初始化
//	int arr1[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6};//自动分行分列；少了几个，补0；
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };//做一定的分组
//	int arr2[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };//多行多列
//	int arr4[][4] = { {1,2},{2,3,3 } };//可以省略行数，不可以省略列数；
//	int arr5[][4] = { 1,2,2,3,3 };
//
//	//三维数组只能省略第一维，不可以省略后两维度
//	char arr6[5][10] ;
//
//	//二维数组——> 
//	int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	int i = 0;
//	int j = 0;
//	//两层for循环_输入+打印	
//	/*for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//			scanf("%d ",& arr[i][j]);
//		printf("\n");
//	}*/
//	//把二维数组，看做一维数组（把一行看成一个元素）：一维数组的数组
//	//arr[][j]中arr[]看成一个一维数组名
//	//二维数组在内存中的存储方式
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//			printf("&arr[%d][%d]=%p  ",i,j,&arr[i][j]);
//		//二维数组在内存也是连续的存放，int元素
//		//int arr[i][j]和arr[i*j]在内存中存储方式相同
//		//【】【j】j 的意义在于知道后续的方式——知道
//
//		printf("\n");
//	}
//
//
//	
//	return 0;
//}
////数组越界
////i<0或者i>n-1:数组越界
////数组越界，编译器不一定报错
////数组作越界检查，比如：i<sz
////错误示范
////int main()
////{
////	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,0 };
////	int i = 0;
////	for (i = 0; i < 3; i++)
////	{
////		int j = 0;
////		for (j = 0; j <= 4; j++)
////		{
////			printf("%d  ",arr[i][j]);
////		}
////		printf("\n");
////		行内越界，会访问下一行的内容（内存的连续性）；但最后还是会越界
////	}
////}

////数组作为函数参数
////数组——>函数
//// 
//// 
//// 
////数组形参有两种写法：数组；指针
////数组的model——>容易理解（直观）
////冒泡排序
////核心思想：两个相邻的元素进行比较，大小不合适就调整
////一套冒泡排序让一个数来到它最终应该出现的位置——n个元素--->n-1趟
////void bubble_sort(int arr[],int sz)//大小可写可不写；写上大小，也不会被采纳；黑色方块ins
////{
////	数组名本质上是：数组首元素的地址
////	指针应该是使用指针来接受
////	arr看起来是数组，本质上是指针变量
////	x86情况下，指针是4个字节
////	不能在函数内部，求数组的大小
////	二维数组传参不可以写成二级指针，应该是指向一维数组的指针
////	int i = 0, t = 0,j=0;
////	总趟数
////	for (j = 0; j<sz-1; j++)
////	{
////		1趟
////		for(i = 0;i<sz-1 -j;i++)
////			if (arr[i + 1] < arr[i])
////			{
////				t = arr[i];
////				arr[i] = arr[i+1];
////				arr[i+1] = t;
////			}
////
////	}
////}
// 形参是指针形式
//int bubble_sort(int* arr[], int sz)


//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//把数组的内容排成升序
//	//0 1 2 3 4 5 6 7  8 9
//	//冒泡排序的算法
//	bubble_sort(arr,sz);//传数组名
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// 
// 
//数组名到底是什么？？
//数组名确实是首元素的地址
//但是有2个例外：
//1、sizeof（数组名）。这里的数组名表示这个数组，计算的是整个数组的大小，单位是字节
//2、&数组名——>这里的数组名表示整个数组，取出的是整个数组的地址
//int main()
//{
//	int arr[10];
//	printf("%p\n",arr);//数组名arr是首元素的地址
//	printf("%p\n", arr+1);
//	printf("----------------------------------\n");
//	printf("%p\n",&arr[0]);//首元素的地址
//	printf("%p\n", &arr[0]+1);
//	printf("----------------------------------\n");
//	printf("%p\n",&arr);//数组的地址
//	printf("%p\n", &arr+1);//整个数组后的一个地址，跳过整个数组；
//
//	//数组名也是数组的首元素的地址——>对应1.2两个式子的大小 
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//如果是首元素的地址，似乎sizeof（arr）的值应该是4;说明不太准确
//
//	printf("%d", sz);
//
//}
//&arr怎么用呢??

////二维数组名的理解
//int main()
//{
//	int arr[3][4];
//	/*int sz = sizeof(arr);
//	printf("%d",sz);*/
//	arr;//二维数组的数组名也表示数组首元素的地址——表示第一行的地址（把二维数组——>一维数组）
//	printf("%p\n", arr);//第一行的地址
//	printf("%p\n", arr+1);//第二行的地址
//	//行的计算
//	int row = sizeof(arr) / sizeof(arr[0]);//整个数组的大小/第一行的数组名的大小
//	printf("%d\n",row);
//	//列的计算
//	int line = sizeof(arr[0]) / sizeof(arr[0][0]);//第一行的数组名的大小/第一个数组的元素的大小
//	printf("%d", line);
//	return 0;
//}
////&arr取出的是整个二维数组的地址

//高维数组要理解成一维数组

////将字符串逆序排列
//#include<string.h>
//void Change1(char arr[],int sz)
//{
//	int i = 0, j = 0;
//	char a = '0';
//	for(j=0;j<sz-2;j++)
//	{ 
//	for (i = 0; i < sz-2-j; i++)
//	{
//		a = arr[i];
//		arr[i] = arr[i + 1];
//		arr[i + 1] = a;
//	}
//	}
//
//}
//void Change2(char arr[], int sz)
//{
//	int left = 0, right = sz - 2;
//	while (left <= right) {
//		char a = '0';
//		a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//		left++;
//		right--;
//	}
//}
////错误版本
////void change3(char arr[], int left,int right)
////{
////	char a = '0';
////	a = arr[left];
////	arr[left] = arr[right];
////	arr[right] = a;
////	if (left < right)//当字符串数量为偶数时，会重复更改
//// 
////		change3(arr, left + 1, right - 1);
////}
//void change3(char arr[], int left, int right)
//{
//	char a = '0';
//	if (left < right)
//	{
//		a = arr[left];
//		arr[left] = arr[right];
//		arr[right] = a;
//		change3(arr, left + 1, right - 1);
//	}
//}
//int my_strlen(char* str)
//{
//	int counter = 0;
//	while (*str != '\0')
//	{
//		counter++;
//		str++;
//	}
//	return counter;
//}
//
//
//void Change4(char* str)//只能一个参数
//{
//	char tmp = *str;
//	int len =my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if(my_strlen(str+1)>=2)
//	Change4(str+1);
//	*(str + len - 1) = tmp;
//}
////只能传一个参数；不能使用字符串里的库函数
//void Change5(char* str)//只能一个参数
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//		Change4(str + 1);
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefghij";//测试多组不同的式子；
//	int sz = sizeof(arr) / sizeof(arr[0]);//sizeof()-->abcdef\0-->计算内存的大小//sz=strlen(arr);right = sz-1;
//	Change1(arr, sz);
//	printf("%s\n", arr);
//	Change2(arr,sz);
//	printf("%s\n", arr);
//	int left = 0, right = sz - 2;
//	change3(arr, left,right);
//	printf("%s\n", arr);
//	Change4(arr);
//	printf("%s\n", arr);
//	Change5(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//
//int Digitsum(unsigned int n)
//{
//	if (n >= 10)
//		return Digitsum(n / 10) + n % 10;
//	else
//		return n;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	int sum = Digitsum(n);
//	printf("%d\n",sum);
//	return 0;
//}


//float pow(float n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k < 0)
//		return 1.0 / pow(n, -k);//将负号转化为正号
//	else if(k>0)
//		return n * pow(n, k - 1);
//}
//
//int main()
//{
//	float n = 0.0f;
//	int k = 0;
//	scanf("%f%d", &n, &k);
//	printf("%lf",pow(n, k));
//	return 0;
//}

//数组必须是花括号（数组中不止一个元素）
//字符数组以字符串的形式定义才有"\0"
//int main()
//{
//	int num = 10;
//	int arr[10] = { 0 };//数组arr的类型： int [10]--->数组的类型就是去掉数组名的部分
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(int [10]));
//	return 0;
//}
// 
// sizeof和strlen的对比
//sizeof：操作符   计算变量（类型所创造的变量）所占内存空间的大小  单位是字节  不关注内存中存放的具体内容
//strlen：库函数       专门计算字符串长度——到‘\0’结束  只能针对字符串  
//从参数给定的地址向后一直找\0，统计\0之前出现的字符的个数

////“     ”
////‘ ’，‘ ’
////字符串和字符数组；字符数组无法统计字符串的长度；数组的长度=数组元素的个数
//
////数组初始化，中间不能空点东西
//
////将数组的内容进行互换
//int main()
//{
//	int arr1[] = { 1,2,3,4,4,5,6,6,7};
//	int arr2[] = {2,3,4,5,6,5,6,8,2};
//	int tmp = 0,i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	//整型数组用循环打印
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

////数组操作——初始化+打印数组+数组元素的逆序
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//
//void reverse(int arr[], int left,int right)
//{
//	int tmp = 0;
//	if(left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		return reverse(arr, left + 1,right-1);
//	}
//}
//
//
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	int left = 0, right = sz - 1;
//	reverse(arr,left,right);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}

