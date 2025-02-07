#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//字符串操作函数

//strlen函数
//int main()
//{
//	char arr[] = "abcdef";//abcdef\0;
//	int len = strlen("abcdef");
//	//strlen计算\0之前的字符的个数
//	//字符串中没有\0
//	char brr[] = { 'a','b','c','d','e','f' };
//	//随机值
//	printf("%d ", strlen(brr));//没有意义
//	printf("%d\n", len);
//	return 0;
//}
//strlen函数的返回值--size_t --unsigned int
//size_t strlen(const char* str)
//
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//直接比较或者强制类型转换
//		//-3 -- 4294967293//无符号整数
//		printf(">");
//	else
//		printf("<=");
//	return 0;
//
//}

////模拟实现strlen函数
////计数器的方法
#include<assert.h>
//size_t my_strlen(const char* str)//返回值无符号
//{
//	assert(str);//防止是空指针
//	size_t n = 0;
//	while (*str++ != '\0')
//	{
//		++n;
//	}
//	return n;
//}
////指针-指针
////递归的方法
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t n = my_strlen(arr);
//	printf("%u\n", n);
//	return 0;
//}

//////strcpy函数-字符串拷贝
// char* strcpy(char* destination, const char* source)
//string copy
//int main()
//{
//	char name[3] = "";
//	//"zhangsan"
//	strcpy(name, "zhang\0san");
//	//\0后面的字符不会拷贝,\0以及之前的所有字符都会被拷贝
//	//如果没有\0，会一直拷贝下去，直到遇到\0
//	//name = "zhangsan";//error,name数组名是常量指针，地址，不是变量
//	
//
//	printf("%s\n", name);
//	return 0;
//}
//strcpy使用的注意事项
//源字符串必须是一个以\0结尾的字符串
//会将源字符串的\0拷贝到目标字符串中
//目标空间必须足够大，否则会出现溢出；否则，程序会崩溃
//目标空间必须可变,不能是常量字符串

//int main()
//{
//	char* p = "abcdef";
//	char arr[] = "bit";
//	strcpy(p, arr);//error//目标区域不可修改
//	return 0;
//}

////模拟实现strcpy函数
//char* my_strcpy(char* p1, const char* p2)
//{
//	char* ret = p1;
//	assert(p1 && p2);
//	//空指针即报错;
//	while (*p1++ = *p2++);
//	return ret;
//	//p1已经不是头地址了，所以应该返回ret
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//////strcat函数--字符串拼接|追加
//char* strcat(char* destination, const char* source)

////感受strcat函数的使用
//int main()
//{
//	char arr1[20] = "hello ";
//	strcat(arr1, "world");
//	printf("%s\n", arr1);
//	return 0;
//}
//注意事项
//源字符串必须是一个以\0结尾的字符串
//目标空间必须足够大，否则会出现溢出；否则，程序会崩溃
//目标空间必须可变,不能是常量字符串

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//找到目标空间的末尾\0
//	while (*++dest);
//	//拷贝字符串
//	while (*dest++ = *src++);
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	my_strcat(arr1, "world");
//	//库函数—自己访问有的编译器可能实现，但是其实不能
//	//自己给自己追加
//	//my_strcat(arr1, arr1);//但是\0会被覆盖，陷入死循环——写入读写
//	printf("%s\n", arr1);
//	return 0;
//}
//库函数是编译器的实现方的写的

//////strcmp函数--字符串比较
//int strcmp(const char* str1, const char* str2)
////感受strcmp函数的使用
//int main()
//{
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	//abcdef
//	//abq 大——不是比较长度，而是比较的ASCII码值
//	//比较两个字符串的相等
//	int ret = strcmp(arr1, arr2);
//	if (ret < 0)
//	{
//		printf("arr1<arr2\n");
//	}
//	else if (ret > 0)
//	{
//		printf("arr1>arr2\n");
//	}
//	else
//	{
//		printf("arr1==arr2\n");
//	}
//	//	//if(arr1==arr2)//比较的是首元素的地址，而不是两个字字符串的内容
//	//{
//	//	printf("==\n");
//	//}
//	//else
//	//{
//	//	printf("!=\n");
//	//}
//	return 0;
//}
//gbk可以，但是不知道是什么

////模拟实现strcmp函数
////int my_strcmp(const char* str1, const char* str2)
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;//相等的判断
//		str1++;
//		str2++;
//
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	int ret = my_strcmp(arr1, arr2);
//	if (ret > 0)
//	{
//		printf("arr1 > arr2");
//	}
//	else if (ret == 0)
//	{
//		printf("arr1 == arr2");
//	}
//	else
//		printf("arr1 < arr2");
//}

//strcpy、strcat、strcmp函数的是长度不受限制的字符串的函数
//int main()
//{
//	char arr[4] = { 0 };
//	strcpy(arr, "hello");
//	printf("%s\n", arr);
//	//error 可以实现，但是会越界访问；函数是不安全的，vs推荐是用strcpy_s独有函数
//	return 0;
//}

// 长度受限制的字符串函数
//strncpy、strncat、strncmp
//相对安全的函数

////strncpy函数--字符串拷贝
////char* strncpy(char* destination, const char* source, size_t num)
////                                                        拷贝字符数
//int main()
//{
//	char arr[20] = "abcdef";
//	char arr2[20] = "hello bit";
//	//strcpy(arr, arr2);
//	strncpy(arr, arr2, 5);//输入拷贝几个字符
//	//当拷贝的字符数大于源字符串的长度时，会在目标字符串后面补\0
//	printf("%s\n", arr);
//	return 0;
//}
////如果src的长度小于num，则拷贝src，并在src的后面相应个数的\0

//strncat函数--字符串拼接
//char* strncat(char* destination, const char* source, size_t num)
//int main()
//{
//	char arr1[20] = "hello\0xxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 6);//从\0开始拼接，末尾也会添加一个\0||两个条件来判断
//	printf("%s\n", arr1);
//	return 0;
//}

//如果src的长度小于num，则拷贝src，并在src的后面一个补\0

//vs调用的是静态库，而是不是原码级的文件

//strncmp函数--字符串比较
//int main()
//{
//	char arr1[20] = "zhangsan";
//	char arr2[] = "zhangsanfeng";
//	int ret = strncmp(arr1, arr2, 9);//比较前5个字符
//	//VS上strcmp的返回值是+1，-1，0	
//	if (ret > 0)
//	{
//		printf("arr1 > arr2");
//	}
//	else if (ret == 0)
//	{
//		printf("arr1 == arr2");
//	}
//	else
//		printf("arr1 < arr2");
//	return 0;
//}

//带n的函数会更加严谨一下，不会出现越界访问的情况；多了第三个参数
//vs中的strcmp_s等函数也是多一个参数
// errno_t--int
//传个负数，其实是穿了一个很大的整数

/////strstr函数--查找子串
//char* strstr(const char* str1, const char* str2)
//				长串			子串
//如果找到了字串，返回字串在长串中的首地址
//如果没有找到，返回NULL

//int main()
//{
//	char email[] = "zpw@pptoulook.com";
//	char substr[] = "pptoutlook";
//	char* ret = strstr(email, substr);
//	if (ret == NULL)
//		printf("找不到\n");
//	else
//		printf("%s", ret);
//
//	return 0;
//}

////KMP算法也可以实现；这个算法也是用来实现strstr 功能的，效率高，但是实现难度大
////模拟实现strstr
////情况：单词匹配就能找到
//	//abcdef 
//	//bcd 
////情况2：多次匹配就能找到
//	//abbbcdef
//	//bbc
//char* my_strstr(const char* str1, const char* str2)
//{
//	//这个竟然还只是暴力实现的？！
//	assert(str1 && str2);
//	const char* p = str1, * p1 = str1, * p2 = str2;
//	while (*p)
//	{
//		p1 = p;
//		p2 = str2;
//		while (*p1 != 0 && *p2 != 0 && *p1 == *p2)
//		{
//			p1++; p2++;
//		}
//		if (*p2 == '\0')
//			return (char*)p;
//		p++;
//	}
//	return NULL;
//}
//int main()
//{
//	char email[] = "abbbdsassda";
//	char substr[] = "bds";
//	char* ret = my_strstr(email, substr);
//	if (ret == NULL)
//		printf("找不到\n");
//	else
//		printf("%s", ret);
//	return 0;
//}
//B站比特大博哥；KMP算法的实现


//strtok函数--字符串分割_分割字符串
//char* strtok(char* str, const char* delim)
//str是要分割的字符串，包含了0个和多个由delim中的字符分割的标记
//delim是分割符--.@
//例如：zhangpengwei@bitejiuyeke.com
//使用这个函数进行切割
//strtok找到第一个分割符，将其替换为\0，返回分割符前的字符串的首地址
//strtok会改变原字符串；如果不想改变原字符串，可以将原字符串拷贝一份
//
//当第一个参数不为NULL时，strtok会从str开始找分割符，保存分割符的位置，下次调用时，会从上一次分割的位置开始找分割符
//当第一个参数为NULL时，strtok会从上一次分割的位置开始找分割符
//如果找不到分割符，返回NULL


//int main()
//{
//	const char* str = "@.";//分割符的集合
//	char email[] = "zhangpenngwei@bitejiuyeke.com.cn";
//	//两个分割符连在一起的时候，会被当做一个分割符
//	char ret[50] = { 0 };
//	strcpy(ret, email);
//	/*char* m = strtok(ret, str);
//	printf("%s\n", m);
//	while (m = strtok(NULL, str))
//	{
//			printf("%s\n", m);
//	}*/
//	char* m = NULL;
//	for (m = strtok(ret, str); m != NULL; m = strtok(NULL, str))
//		//有一次的初值运行
//	{
//		printf("%s\n", m);
//	}
//	//可能跟静态变量有关
//	return 0;
//}

//内存泄漏：内存泄漏是指程序在动态分配内存后，由于某种原因导致程序不能释放已经动态分配的内存，从而造成系统内存的浪费，导致程序运行速度减慢甚至系统崩溃等严重后果
//
//////strerror函数--返回错误对应的错误信息的首地址
////char* strerror(int errnum)
////C语言的库函数在执行失败时，会设置errno变量，errno是一个整型变量，用来存储错误码
//#include<errno.h>
//int main()
//{
//	/*printf("%s\n", strerror(0));
//	printf("%s\n", strerror(1));
//	printf("%s\n", strerror(2));
//	printf("%s\n", strerror(3));
//	printf("%s\n", strerror(4));
//	printf("%s\n", strerror(5));
//	printf("%s\n", strerror(6));*/
//	FILE* fp = fopen("D:\\fl.txt", "r");//地址是在C语言的工程目录下寻找；这是相对路径
//	//errno-C语言设置的一个全局变量，用来存储错误码;始终记录最新的错误码
//	if (fp == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	return 0;
//}

//字符分类函数
//iscntrl函数--判断字符是否是控制字符
//int iscntrl(int c)
//isspace函数--判断字符是否是空白字符
//int isspace(int c)
//isdigit函数--判断字符是否是数字字符
//int isdigit(int c)//0-9
//isalpha函数--判断字符是否是字母
//int isalpha(int c)//a-z A-Z
//isalnum函数--判断字符是否是字母或数字
//int isalnum(int c)
//isxdigit函数--判断字符是否是十六进制数字
//int isxdigit(int c)//0-9 a-f A-F
//islower函数--判断字符是否是小写字母
//int islower(int c)//a-z	
//isupper函数--判断字符是否是大写字母
//int isupper(int c)//A-Z
//ispunct函数--判断字符是否是标点符号
//int ispunct(int c)//标点符号
//isprint函数--判断字符是否是可打印字符
//int isprint(int c)//可打印字符
//isgraph函数--判断字符是否是图形字符
//int isgraph(int c)//图形字符

//#include<ctype.h>
//int main()
//{
//	//int a = isspace(' ');//判断空白字符很方便
//	////空白字符：空格，\t，\n，\v，\f，\r
//	//printf("%d\n", a);
//	int a = isdigit('0');//判断数字字符
//	//数字字符：0-9;是数字字符返回非0，不是返回0
//	printf("%d\n", a);
//	return 0;
//}

//字符转换函数
//tolower函数--将大写字母转换为小写字母
//int tolower(int c)
//toupper函数--将小写字母转换为大写字母
//int toupper(int c)
//int main()
//{
//	printf("%c\n", tolower('A'));//如果不是大写字母，返回原字符
//	return 0;
//}
//库函数实现了代码的统一化

//strcpy strncpy实现字符串的拷贝；memcpy实现内存的拷贝

////memcpy函数--内存拷贝
//memory-记忆-内存 copy
//void* memcpy(void* destination, const void* source, size_t num)
// 
// 泛型指针--void*--任意类型的指针；可以指向任意类型的数据
//destination--目标区域的首地址
//source--源区域的首地址
//num--拷贝的字节数
//返回值--目标区域的首地址
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 20);//拷贝的字节数-20=5*4
//	//拷贝的字节数不能超过目标区域的大小
//	float arr3[] = { 1.0,2.0,3.0,4.0,5.0 };
//	float arr4[10] = { 0 };
//	memcpy(arr4, arr3, 20);//拷贝的字节数-20=5*4
//	return 0;
//}

//模拟实现memcpy函数
//void* my_memcpy(void* dest, const void* src, size_t num)
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	int i = 0;
//	void* ret = dest;
//	//char* p1 = (char*)dest;
//	//char* p2 = (char*)src;
//	//for (i = 0; i < num; i++)
//	//{
//	//	*p1++ = *p2++;
//	//}
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 ,6,7,8,9,10 };
//	//				1 2 1 2 3 4 5 8 9 10
//	//int arr2[10] = { 0 };
//	//
//	//my_memcpy(arr2, arr1, 20);
//	//难以实现内部拷贝;
//	return 0;
//}

//memcpy负责拷贝两块独立的内存区域，不会出现内存重叠的问题


//重叠内存的拷贝，是memmove函数的功能
void* my_memcpy(void* dest, void* src, int n)
{
	assert(dest && src);
	const char* ret = (char*)dest;
	const char* p1 = (char*)dest;
	const char* p2 = (char*)src;
	const char* p = (char*)dest;
	while ()

}
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	my_memcpy(arr2, arr1, 20);//先输入目标地址，再输入源地址
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}
