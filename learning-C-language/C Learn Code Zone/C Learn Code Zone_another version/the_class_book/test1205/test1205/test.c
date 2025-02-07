#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char a[] = { 'a','b','c','d','e' };
//	printf("%s", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a[] = { "abcedf" };
//	printf("%s", a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char* pa = "abcdef";
//	printf("%s", pa);
//	return 0;
//}
//
//#include<stdio.h>
//void count(char* p, int* num, int* zimu, int* ote)
//{
//	while ((*p) != '\0')
//	{
//		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
//		{
//			(*zimu)++;
//		}
//		else if (*p >= '0' && *p <= '9')
//		{
//			(*num)++;
//		}
//		else
//		{
//			(*ote)++;
//		}
//		p++;
//	}
//}
//int main()
//{
//	char* p = "input string";
//	printf("%s\n", p);
//	char arr[30] = { '\0' };
//	scanf("%s", arr);
//	p = arr;
//	int num = 0, zimu = 0, ote = 0;
//	count(p, &num, &zimu, &ote);
//	printf("%d\n%d\n%d\n", zimu, num, ote);
//	return 0;
//}
//
////算算是第几天
//#include<stdio.h>
//int IRY(int a)
//{
//	if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
//		return 29;
//	return 28;
//}
//int count(int a, int b, int c)
//{
//	int x = c;
//
//	switch (b - 1)
//	{
//	case 12: c += 31;
//	case 11: c += 30;
//	case 10: c += 31;
//	case 9: c += 30;
//	case 8: c += 31;
//	case 7: c += 31;
//	case 6: c += 30;
//	case 5: c += 31;
//	case 4: c += 30;
//	case 3: c += 31;
//	case 2: c += IRY(a);
//	case 1: c += 31;
//	}
//	return c;
//}
//int main()
//{
//	int year = 0, month = 0, day = 0;
//	scanf("%d-%d-%d", &year, &month, &day);
//	int d = count(year, month, day);
//	printf("%d", d);
//	return 0;
//}

////生成指定数列
//#include<stdio.h>
//int fun(int a, int b, int r[])
//{
//	int i = a, j = 0;
//	for (; i <= b; i++)
//	{
//		if ((i % 7 == 0 || i % 11 == 0) && i % 77 != 0)
//		{
//			r[j] = i;
//			j++;
//		}
//	}
//	return j + 1;
//}
//void print(int* r)
//{
//	while (*r != 0)
//	{
//		printf("%d", *r);
//		if (*(r + 1) == 0)
//		{
//			printf("\n");
//			return;
//		}
//		printf(" ");
//		r++;
//	}
//}
//int main()
//{
//	int arr[1000] = { 0 };
//	int a = 0, b = 0;
//	do {
//		scanf("%d %d", &a, &b);
//	} while (a > b);
//	fun(a, b, arr);
//	print(arr);
//	return 0;
//}
//
////求数组的出去最值后的平均值
//#include<stdio.h>
//void get(int arr[], int i)
//{
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//}
//void maxmin(int arr[], int i, int* max, int* min)
//{
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		if (arr[j] > *max)
//			*max = arr[j];
//		if (arr[j] < *min)
//			*min = arr[j];
//	}
//
//}
//
//double ALU(int arr[], int a, int b)
//{
//	int i = 0, sum = 0, x = 0, y = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//		if (arr[i] == a)
//			x++;
//		if (arr[i] == b)
//			y++;
//
//	}
//	sum -= x * a + y * b;
//	return sum / (10.0 - x - y);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	get(arr, 10);
//	int max = arr[0], min = arr[0];
//	maxmin(arr, 10, &max, &min);
//	double mm = ALU(arr, max, min);
//	printf("%lf\n", mm);
//	return 0;
//}

////数组移位
//#include<stdio.h>
//void chn(int arr, int m)
//{
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//
//	}
//
//
//}
//void print(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 1; i++)
//	{
//		if (arr[i])
//			printf("%3d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	char arr[20] = { '1','2','3','4','5','6','7','8','9','10','\0' };
//	int m = 0;
//	scanf("%d", &m);
//	chn(arr, m);//后移m个位置；
//	print(arr);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float arr[5];
//	float* p;
//	for (p = &arr[0]; p < &arr[5];)
//	{
//		*p++ = 0;
//	}
//	return 0;
//}
//#include<stdio.h>
//void print(int arr[], int n)
//{
//	int j = 0;
//	for (j = 0; j < n; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//}
//int main()
//{
//	float arr[5];
//	int p = 4;
//	for (; p >= 0; arr[p--] = 0)
//	{
//		;
//	}
//	print(arr);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		arr[i]++;
//	}
//	print(arr);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	for (; p >= &arr[0];)
//	{
//		++*p--;
//	}
//	print(arr, 10);
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { {1,1,1},{2,2,2},{3,3,3} };
//	int* p0 = &arr[0][0];
//	int (*p1)[3] = arr;
//	int (*p2)[3][3] = &arr;
//	int (*p3)[3] = &arr[0];
//	int* p4 = arr[0];
//	printf("%p  \n", p0);
//	printf("%p  \n", p0 + 1);
//	printf("%p  \n", p1);
//	printf("%p  \n", p1 + 1);
//	printf("%p  \n", p2);
//	printf("%p  \n", p2 + 1);
//	printf("%p  \n", p3);
//	printf("%p  \n", p3 + 1);
//	printf("%p  \n", p4);
//	printf("%p  \n", p4 + 1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d ", &arr[10] - &arr[0]);
//	return 0;
//}
//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}

//int my_strlen(char* p)
//{
//	char* start = p;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return (p - start);
//}
//int main()
//{
//	int length = my_strlen("abcdef");
//	printf("%d ", length);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	int** p2 = &p1;
//	printf("%d\n", a);
//	printf("%d\n", *p1);
//	printf("%d\n", **p2);
//
//	return 0;
//}

//int main()
//{
//	int arr[3] = { 1,1,1 };
//	int brr[3] = { 2,2,2 };
//	int crr[3] = { 3,3,3 };
//	int* p[3] = { arr,brr,crr };
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int SumDiff(int a, int b, int* dif)
//{
//	*dif = a - b;
//	return a + b;
//}
//int main()
//{
//	int a, b, sum, dif;
//	scanf("%d%d", &a, &b);
//	sum = SumDiff(a, b, &dif);
//	printf("sum=%d, difference=%d\n", sum, dif);
//	return 0;
//}
//void move(int arr[], int m, int brr[])
//{
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		brr[i] = arr[10 - m + i];
//	}
//	for (i = 0; i < 10 - m; i++)
//	{
//		brr[m + i] = arr[i];
//	}
//}
//void print(int brr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%3d", brr[i]);
//		if (i == 9)
//		{
//			printf("\n");
//		}
//		else
//		{
//			printf(" ");
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int brr[10] = { 0 };
//	int m = 0;
//	scanf("%d", &m);
//	move(arr, m, brr);
//	print(brr);
//	return 0;
//}

//int  fun(int x, int y)
//{
//	return(x + y);
//}
//
//int main()
//{
//	int a = 1, b = 2, c = 3, sum;
//	sum = fun((a++, b++, a + b), c++);
//	printf("%d\n", sum);
//	return 0;
//}
//void input(int arr[], int m)
//{
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void sort(int arr[], int m)
//{
//	int i = 0, j = 0;
//	for (j = 0; j < m - 1; j++)
//	{
//		int min = j;
//		for (i = j; i < m ; i++)
//		{
//			if (arr[i] < arr[min])
//			{
//				min = i;
//			}
//		}
//		if (min != j)
//		{
//			int temp = arr[j];
//			arr[j] = arr[min];
//			arr[min] = temp;
//		}
//
//
//	}
//}
//
//void output(int arr[], int m)
//{
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int arr[10] = { 0 };
//	input(arr, m);
//	sort(arr, m);
//	output(arr, m);
//	return 0;
//}
//char s[] = "0123456789ABCDEF";
//void change(long a, char* m)
//{
//	static i = 0;
//	if (a > 16)
//	{
//		change(a / 16, m);
//	}
//	m[i++] = s[a % 16];
//}
//int main()
//{
//	char m[10] = "0";
//	long a = 0;
//	scanf("%ld", &a);
//	change(a, m);
//	printf("%s", m);
//	return 0;
//}
//void print(char p[])
//{
//	char* t = p;
//	while (*t != '\0')
//	{
//		if (*t >= '0' && *t <= '9')
//			printf("%c", *t);
//		t++;
//	}
//}
//int main()
//{
//	char p[10] = "\0";
//	scanf("%s", p);
//	print(p);
//	return 0;
//}

//#define DAYS_FEB(year) 
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	printf("days of the FEB.: %d\n", DAYS_FEB(year));
//	return 0;
//}
//
//typedef struct stu
//{
//	int a;
//	char arr[10];
//	int brr[3];
//}stu;
//void input(stu* p, int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d %s %d %d %d", &(p->a), p->arr, &(p->brr[0]), &(p->brr[1]), &(p->brr[2]));
//		p++;
//	}
//}
//int* average(stu* p, int a,int* b)
//{
//	int i = 0;
//
//	for (i = 0; i < a; i++)
//	{
//		b[i] = (p[i].brr[0] + p[i].brr[1] + p[i].brr[2]) / 3;
//	}
//	return b;
//}
//void output(int* crr, int a)
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		printf("The average score of the %dth student is %d.\n", i + 1, crr[i]);
//	}
//}
//int main()
//{
//	int a = 0;
//	do {
//		scanf("%d", &a);
//	} while (a < 0 || a>10);
//	stu arr[10];
//	//输入
//	input(arr, a);
//	//计算平均分
//	int b[10] = { 0 };//将数组放在外面可以避免函数销毁时，数组的丢失
//	 average(arr, a,b);
//	//输出
//	output(b, a);
//	return 0;
//}

//链表回忆练习

//先来一个静态的创建和输出
//需求：创建能够储存5个整形数据的链表
//typedef struct node
//{
//	int a;
//	struct node* next;
//}node;
//node* create()
//{
//	node st1, st2, st3, st4, st5;
//	st1.a = 10;
//	st1.next = &st2;
//	(&st2)->a = 12;
//	st2.next = &st3;
//	st3.a = 10;
//	st3.next = &st4;
//
//	st4.a = 10;
//	st4.next = &st5;
//
//	st5.a = 10;
//	st5.next = NULL;
//	return &st1;
//}
//void output(node* p)
//{
//	while (p != NULL)
//	{
//		printf("%d ", p->a);
//		p = p->next;
//	}
//}
//int main()
//{
//	//创建函数
//	node* p = create();
//	//输出函数
//	output(p);
//	return 0;
//}

////但是我们发现create()函数中的重复部分很多，而且如果只是静态的相同类型的数据，为什么不用数组呢？
//////链表显然不是这样静态使用的，显然要动态使用。
//#include<stdlib.h>
//typedef struct node
//{
//	int a;
//	struct node* next;
//}node;
//
//node* c1()
//{
//	//要求：c1函数使用——>尾插法
//	printf("请输入一些非零数据，数据结尾处用“0”作为结束标志\n");
//	int m = 0;
//	scanf("%d", &m);//当您使用"%d "（注意末尾的空格）时，scanf会尝试读取并忽略任何数量的空白字符（包括空格、制表符和换行符），这可能会导致意外的行为。应该改为"%d"
//	node* p = NULL, * head = NULL, * tail = NULL;
//	while (m != 0)
//	{
//		p = (node*)malloc(sizeof(node));
//		//最好检查一下
//		p->a = m;
//		p->next = NULL;
//		if (head == NULL)
//		{
//			head = p;
//		}
//		else {
//			tail->next = p;
//		}
//		tail = p;
//		scanf("%d", &m);
//	}
//	return head;
//}
//node* c2()
//{
//	//要求：c2函数使用——>头插法
//	int m = 0;
//	printf("请输入一些非零数据，数据结尾处用“0”作为结束标志\n");
//	scanf("%d", &m);
//	node* p = NULL, * tail = NULL, * head = NULL;
//	while (m != 0)
//	{
//		p = (node*)malloc(sizeof(node));
//		p->a = m;
//		p->next = NULL;
//		if (tail == NULL)
//		{
//			tail = p;
//		}
//		else
//		{
//			p->next = head;
//		}
//		head = p;
//		scanf("%d", &m);
//	}
//	return head;
//}
////交换函数
//void ex(node* p1, node* p2)
//{
//	//p1->next！=NULL
//	if (p1)
//}
//node* s1(node* p1)
//{
//	//冒泡排序
//	node* p = p1;//p1是头指针
//	node* p2 = p;//p是工作指针，p2是备份指针
//	while (p->next == NULL)
//	{
//		p = p->next;
//		if ((p->a) > (p2->a))//俗称后面的比前面的大
//		{
//			//交换链的函数
//		}
//		p2 = p;
//	}
//	return p1;//bug：如果可能会少链
//
//}
//void fn(node* p)
//{
//	node* p2 = p;
//	while (p != NULL)
//	{
//		p2 = p;
//		p = p->next;
//		free(p2);
//
//	}
//}
//int main()
//{
//	//输入的c函数
//	//输入几个数据，形成链表
//	//要求：c1函数使用——>尾插法
//	node* p1 = c1();
//	//要求：c2函数使用——>头插法
//	node* p2 = c2();
//	//排序s函数
//	//要求：s1函数——冒泡排序
//	p1 = s1(p1);
//	//要求：s2函数——选择排序
//	//插入b函数
//	//要求：b1-尾插
//	//		b2-头插
//	//		b3-按循序插
//	//输出o函数
//	//释放f函数
//	//fn(p1);
//	fn(p2);
//
//	return 0;
//}
//
//#define DAYS_FEB(year)  28 
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	int d = DAYS_FEB(y);
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		++d;
//	printf("days of the FEB.: %d\n", d);
//	return 0;
//}



//
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void swap2(int* a, int b)
//{
//	int temp = *a;
//	*a = b;
//	b = temp;
//
//}
//void swap3(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void swap4(int* a, int* b)
//{
//	int* temp = a;
//	a = b;
//	b = temp;
//}
//
//
//int main()
//{
//	int x = 1, y = 2;
//	swap4(&x, &y);  /*此处依次换成另外3种调用进行观察，其余代码不变*/
//	printf("x=%d,y=%d\n", x, y);
//	return 0;
//}
//
//void change(int a[], int sz)
//{
//	int* p = a;//工作指针1,指向头
//	int* q = a + sz - 1;//工作指针2，指向尾
//	while (p <= q)
//	{
//		int t = *p;
//		*p = *q;
//		*q = t;
//		++p;
//		--q;
//	}
//}
//
//int main()
//{
//	int a[6] = { 1,3,4,5,6,7 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	//逆置函数
//	change(a, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//
//
//void move(char* a, int i)
//{
//	int j = 0;
//	static m = 0;
//	for (j = i; j < 19 - m; j++)
//	{
//		a[j] = a[j + 1];
//	}
//	m++;
//
//
//}
//void di(char p[])
//{
//	int i = 0;
//	while (p[i] != '\0')
//	{
//		if (p[i] == ' ')
//		{
//			//将后面的几项前移，末尾提添“\0”
//			move(p, i);
//			continue;
//		}
//		i++;
//	}
//}
//
//int main()
//{
//	char p[20] = { 0 };
//	gets(p);
//	//函数去除空格
//	di(p);
//	puts(p);
//	return 0;
//}
//



// 
//char* user(char* p, char* pc)
//{
//	int f = 0;
//	while (*p != '\0')
//	{
//		if (!((*p) >= '0' && (*p) <= '9'))
//		{
//			f++;
//
//			if (f % 2 == 1)
//			{
//				*pc = *p;
//				pc++;
//			}
//		}
//		p++;
//	}
//	*pc = '\0';
//	return pc;
//}
//
//
//char* password(char* p, char* pd)
//{
//	int f = 0;
//	while (*p != '\0')
//	{
//		if ((*p) >= '0' && (*p) <= '9')
//		{
//			f++;
//
//			if (f % 2 == 0)
//			{
//				*pd = *p;
//				pd++;
//			}
//		}
//		p++;
//	}
//	*pd = '\0';
//	return pd;
//}
//int main()
//{
//	char p1[20] = { 0 };
//	char p2[20] = { 0 };
//	gets(p1);
//	gets(p2);
//
//	char c[20] = { 0 };
//	char d[20] = { 0 };
//
//	//user函数提取
//	user(p1, c);
//
//	puts(c);
//	//password函数提取
//	password(p2, d);
//	puts(d);
//	return 0;
//}

//封装函数createfile
//void createfile(char* NAME)
//{
//	FILE* pf = fopen(NAME, 'w');
//	if (pf == NULL)
//	{
//		printf("can not create one file\n");
//		exit(1);
//	}
//}
//void readfile(char* fName)
//{
//	int a = '\0';
//	while ((a = fgetc(fName)) != EOF)
//	{
//		putchar(a);
//	}
//	putchar('\n');
//}
//int main()
//{
//	//FILE* pf = fopen("D:\\gitee_github\\learning-c-language\\C Learn Code Zone\\C Learn Code Zone_another version\\the_class_book\\10.txt", "w");
//	///*printf("%p\n", pf);
//	//fclose(pf);*/
//	////FILE* pm = fopen("D:\\gitee_github\\learning-c-language\\C Learn Code Zone\\C Learn Code Zone_another version\\the_class_book\\10.txt", "a");
//	////printf("%p", pm);
//	////fclose(pm);
//	///*if (pf == NULL)
//	//{
//	//	printf("can not find file\n");
//	//	exit(1);
//	//}*/
//	//printf("请输入个人收货地址,#作为结束标识符\n");
//	////int a = '\0';
//	////while (a != '#')//这是第0个
//	////{
//	////	a = getchar();//这是第一个
//	////	fputc(a, pf);
//	////}
//
//	//int a = '\0';
//	//a = getchar();
//	//while (a != '#')
//	//{
//	//	fputc(a, pf);
//	//	a = getchar();
//	//}
//	//printf("%p\n", pf);
//	//fclose(pf);
//	//FILE* pm = fopen("D:\\gitee_github\\learning-c-language\\C Learn Code Zone\\C Learn Code Zone_another version\\the_class_book\\10.txt", "a");
//	//printf("%p", pm);
//	//fclose(pm);
//
//	FILE* p = fopen("D:\\gitee_github\\learning-c-language\\C Learn Code Zone\\C Learn Code Zone_another version\\the_class_book\\10.txt", "w");
//	//int a = '\0';
//	///*a = getchar();
//	//while (a != '#')
//	//{
//	//	fputc(a, p);
//	//	a = getchar();
//	//}*/
//	///*int b = '\0';
//	//while ((b = fgetc(p)) != EOF)
//	//{
//	//	putchar(b);
//	//}
//	//putchar('\n');*/
//	//int c = 0;
//	//c = fgetc(p);
//
//	//while (!feof(p))
//	//{
//	//	putchar(c);
//	//	c = fgetc(p);
//	//}
//	//fclose(p);
//	fputs("absahdaohdla", p);
//	return 0;
//}

//int main()
//{
//	//输入一些字符串
//	char arr[100];
//	FILE* pf = fopen("D:\\gitee_github\\learning-c-language\\C Learn Code Zone\\C Learn Code Zone_another version\\the_class_book\\10.txt", "a+");
//	if (pf == NULL)
//	{
//		printf("can not find file");
//		exit(1);
//	}
//	gets(arr);
//	while (strcmp(arr, "#") != 0)
//	{
//		fputs(arr, pf);
//		fputs("\n", pf);//在该串字符串的末尾加上一个换行符---->效果：1. 实现换行；2. 成功输出——————反映了一个C语言的严格要求：字符和字符串不能混用
//		gets(arr);
//	}
//	rewind(pf);
//	int lines = 0;
//	while (fgets(arr, 100, pf) != NULL)
//	{
//		//printf("%s", arr);
//		puts(arr);
//		lines++;
//	}
//	printf("%d\n", lines);
//	fclose(pf);
//	return 0;
//}
//
//#include<stdio.h>
//int fun(int s[], int t[])
//{
//	int i, j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i % 2)
//		{
//			t[j] = s[i];
//			j++;
//		}
//	}
//	return j;
//
//}
//int main()
//{
//	int X[10] = { 1 ,2,3,4,5,6,7,8,9,10 };
//	int Y[10];
//	int m, i;
//	m = fun(X, Y);
//	for (i = 0; i < m; i++)
//	{
//		printf("%d", Y[i]);
//
//	}
//	printf("\n");
//	return 0;
//}

//void fun(int x, int* y)
//{
//	x += *y;
//	*y += x;
//}
//int main()
//{
//	int x = 5, y = 10;
//	fun(x, &y);
//	fun(y, &x);
//	printf("%d,%d", x, y);
//	return 0;
//}
//



//int main()
//{
//	char x[] = "12345";
//	char y[] = { '1','2','3','4','5','\0' };
//	printf("%d   %d", strlen(x), strlen(y));
//	return 0;
//}"ab\022\x12\\ab\a"
//"ab\045+045\'b
/*int main()
{
	char a[7] = "abcdef", b[4] = "ABC";
	strcpy(a, b);
	printf("%s", a);
	return 0;
}*/
//struct stud
//{
//	long  id[2];
//	double ave;
//} a, * p;
//int main()
//{
//	printf("%u", sizeof(long[2]));
//	printf("%u", sizeof(double));
//	printf("%u", sizeof(a));
//	return 0;
//}
//void fun(char a[10])
//{
//	printf("%d  %d\n", sizeof(a), strlen(a));
//}
//int main()
//{
//	char str[10] = "abcdef";
//	char* p = str;
//	fun(str);
//
//	return 0;
//}
//int main()
//{
//	int a[] = { 1,2,3,4,5,6 };
//	int* p = a;
//	*(a++);
//	*(p++);
//	p[p[1]];
//	*(a + *(a + 1));
//	//int i = 0;
////	printf("%d", i++);
//	return 0;
//}
//
////字符串中去掉空格的算法
//int main()
//{
//	char arr[20];
//	gets(arr);
//	int i = 0, j = 0;
//	for (; arr[i] != '\0'; i++)
//	{
//		if (arr[i] != ' ')
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	arr[j] = '\0';
//	puts(arr);
//	return 0;
//}

//#include<stdio.h>
//typedef struct Date
//{
//	int year;
//	int month;
//	int day;
//}Date;
//int runy(int y, int d)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//	{
//		if (d <= 29 && d >= 0)
//			return 1;
//	}
//	else
//	{
//		if (d <= 28 && d >= 0)
//			return 0;
//	}
//	return 0;
//}
//
//int checkDate(Date date)
//{
//	//正确返回1，错误返回0
//	if (date.month > 13 || date.month < 0)
//		return 0;
//	else
//	{
//		switch (date.month)
//		{
//		case 12:
//		case 10:
//		case 8:
//		case 7:
//		case 5:
//		case 3:
//		case 1:
//			if (date.day <= 31 && date.day >= 0)
//				return 1;
//			else
//				return 0;
//			break;
//		case 11:
//		case 9:
//		case 6:
//		case 4:
//			if (date.day <= 30 && date.day >= 0)
//				return 1;
//			else
//				return 0;
//			break;
//		case 2:
//			return runy(date.year, date.day);
//		default:
//			return 0;
//		}
//	}
//
//}
//int main()
//{
//	Date a;
//	int i = 0;
//	do {
//		if (i)
//		{
//			printf("日期错误，重新输入");
//		}
//		scanf("%4d%d%d", &a.year, &a.month, &a.day);
//		++i;
//	} while (!checkDate(a));
//	printf("日期正确\n");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	printf("请输入一段字符串，并以#作为结束标志\n");
//	char a = '\0';
//	FILE* fp = fopen("D:\\fl.txt", "w+");
//	if (fp == NULL)
//	{
//		printf("error\n");
//		exit(1);
//	}
//	a = getchar();
//	while ((a) != '#')
//	{
//		fputc(a, fp);
//		a = getchar();
//	}
//	rewind(fp);
//	a = fgetc(fp);
//	while (a != EOF)
//	{
//		putchar(a);
//		a = fgetc(fp);
//	}
//	fclose(fp);
//	return 0;
//}

//#include<stdio.h>
//struct Student
//{
//	char ID[20];
//	char name[30];
//	int age;
//	double score;
//};
//typedef struct Student STU;
//void Input(STU arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s%s%d%lf", arr[i].ID, arr[i].name, &arr[i].age, &arr[i].score);
//	}
//}
//void CreatFile(STU arr[], int n)
//{
//	FILE* fp = fopen("D:\\Info.dat", "wb");
//	if (fp == NULL)
//	{
//		printf("error");
//		exit(1);
//	}
//	fwrite(arr, sizeof(STU), n, fp);
//	fclose(fp);
//}
//void ReadOut(STU arr[], int n)
//{
//	FILE* fp = fopen("D:\\Info.dat", "rb");
//	STU brr[20];
//	int i = 0;
//	fread(&brr[i], sizeof(STU), 1, fp);
//	while (!feof(fp))
//	{
//		printf("%-8s  %-8s %d %lf\n", brr[i].ID, brr[i].name, brr[i].age, brr[i].score);
//		i++;
//		fread(&brr[i], sizeof(STU), 1, fp);
//	}
//
//	fclose(fp);
//
//}
//void Sort(STU arr[], int n)
//{
//	int i = 0, j = 0, index = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		index = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[j].score - arr[index].score > 1E-6)
//				index = j;
//		}
//		if (index != i)
//		{
//			STU t = arr[i];
//			arr[i] = arr[index];
//			arr[index] = t;
//		}
//	}
//}
//void Output(STU arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %s %2d %lf\n", arr[i].ID, arr[i].name, arr[i].age, arr[i].score);
//	}
//}
//int main()
//{
//	STU arr[40];
//	int n = 0;
//	printf("请输入将输入的学生的数量，注意请不要超过40\n");
//	do
//	{
//		scanf("%d", &n);
//	} while (n > 40 || n < 0);
//	Input(arr, n);
//	CreatFile(arr, n);
//	ReadOut(arr, n);
//	Sort(arr, n);
//	Output(arr, n);
//	return 0;
//}//AB\bCDEF\rGH\123

//int main()
//{
//	char prr[80] = "\0";
//	FILE* p1 = fopen("D:\\A.txt", "w+");
//	FILE* p2 = fopen("D:\\B.txt", "w+");
//	if (!p1 && !p2)
//	{
//		printf("error\n");
//		exit(1);
//	}
//	char ch;
//	ch = getchar();
//	while (ch != '\0')
//	{
//
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int m = 0;
//		switch (m)
//		{
//		case 0: printf("4\n");
//			break;
//		case 1: printf("5\n");
//			break;
//		case 3:printf("6\n");
//			break;
//		}
//		m++;
//	}
//	return 0;
////}
////#include<math.h>
//void menu()
//{
//	printf("***************************************\n");
//	printf("***************************************\n");
//	printf("*****  1.Single number detection  *****\n");
//	printf("*****      2.Range detection      *****\n");
//	printf("*****            Ttzs出品         *****\n");
//	printf("***************************************\n");
//	printf("***************************************\n");
//
//}
//int isPrime(int n)
//{
//	int k = (int)sqrt(n);
//	int i = 0;
//	if (n == 1)
//		return 0;
//	for (i = 2; i <= k; i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//菜单
//	menu();
//	printf("请输入你的选择:>   \n");
//	int x = 0;
//	scanf("%d", &x);
//	switch (x)
//	{
//	case 1:
//	{
//		printf("请输入要将检测的数：\n");
//		int n = 0;
//		scanf("%d", &n);
//		if (isPrime(n))
//		{
//			printf("这是一个质数\n");
//		}
//		else
//		{
//			printf("这不是一个质数\n");
//		}
//		break;
//	}
//	case 2:
//	{
//		int i = 0, m = 0, n = 0;
//		printf("请以  a,b  的方式输入范围：>\n");
//		scanf("%d,%d", &m, &n);
//		for (i = m; i <= n; i++)
//		{
//			int cou = 0;
//			if (isPrime(i))
//			{
//				printf("%d  ", i);
//				cou++;
//				if (cou % 5 == 0)
//				{
//					printf("\n");
//				}
//			}
//
//		}
//		break;
//	}
//	default:
//		printf("不知道你要干什么,程序我不干了！！！！");
//		break;
//	}
//	return 0;
//}
//#include<string.h>
//#include<stdlib.h>
//void mmm(char* p)
//{
//	char* m = p;
//	while (*p != '\0')
//	{
//		if (*p != ' ')
//		{
//			*m = *p;
//			m++;
//		}
//		p++;
//	}
//	*m = '\0'
//}
//int main()
//{
//	//去除空格
//	char str[100] = "\0";
//	gets(str);
//	//去除空格的函数mmm
//	mmm(str);
//	puts(str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//void extract_digits(char* src, char* dest)
//{
//	while (*src != '\0')
//	{
//		if (*src >= '0' && *src <= '9')
//		{
//			*dest = *src;
//			dest++;
//		}
//		src++;
//	}
//	*dest = '\0'; // 确保目标字符串以 '\0' 结尾
//}
//
//int main()
//{
//	// 输入字符串
//	char str[100] = { 0 };
//	printf("请输入字符串：\n");
//	if (fgets(str, sizeof(str), stdin) != NULL)
//	{
//		// 去除换行符
//		size_t len = strlen(str);
//		if (len > 0 && str[len - 1] == '\n')
//		{
//			str[len - 1] = '\0';
//		}
//
//		// 提取字符
//		char digits[100] = { 0 };
//		extract_digits(str, digits);
//		printf("提取的数字字符：%s\n", digits);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 1;
//	do
//	{
//		b -= a;
//		a++;
//
//
//	} while (b-- < 0);
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//声明
void menu();
void Game();
void Choice();

//菜单
void menu()
{
	printf("   欢迎来到“激情猜猜猜”  \n");
	printf("           Ttzs出品         \n");
	printf("*******     菜单   *******\n");
	printf("*******   0.exit   *******\n");
	printf("*******   1.play   *******\n");
	printf("请输入您的选择序号：>");

}

//开始游戏
void Game()
{
	system("cls");
	printf("开始玩游戏\n");
	printf("*******   1.play  *******\n");
	system("cls");
	Sleep(10);
	printf("Time = 60s\n");
	system("shutdown -s -t 60");
	int ret = rand() % 100 + 1;
	int cc = 0;
	do
	{
		printf("请输入一个二位整数：>\n");
		scanf("%d", &cc);
		if (cc > ret)
		{
			printf("猜大了\n");
		}
		else if (cc < ret)
		{
			printf("猜小了\n");

		}
	} while (cc != ret);
	printf("恭喜你，在规定时间内完成了\n");
	system("shutdown -a");
	printf("猜对了\n");
	printf("\n");

}


void Choice()
{
	int input = 0;
	int  i = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("欢迎下次光临\n");
			break;
		case 1:
		again:
			Game();
			printf("是否再次游戏(1/0):>");
			scanf("%d", &i);
			if (i)
			{
				system("cls");
				printf("重启ing");
				Sleep(1000);
				goto again;
			}
			else
			{
				input = 0;
				break;

			}
			break;
		default:
			printf("请重新输入\n");
			printf("\n");
			break;
		}
	} while (input);
}


int main()
{
	srand((unsigned int)time(NULL));
	Choice();
	return 0;
}

