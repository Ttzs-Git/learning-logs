#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double m = 0, s = 0, sign = 1;
//	int i = 1;
//	scanf("%lf", &m);
//	double item = m;
//	while (fabs(item) >= 1e-4)
//	{
//		item = sign * m / i;
//		s += item;
//		m *= m;
//		i = i * (i + 1);
//		sign = -sign;;
//	}
//	printf("%.2f\n", s);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 9 - 2 * i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//#define pi 3.14
//double v(double r, double h)
//{
//	return pi * r * r * h / 3;
//}
//double s(double r, double h)
//{
//	return  pi * r * r + pi * r * sqrt(r * r + h * h);
//}
//int main()
//{
//	double r = 0, h = 0;
//	scanf("%lf%lf", &r, &h);
//	printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n", r, h, s(r, h), v(r, h));
//	return 0;
//}
//
//#include<stdio.h>
//#include<math.h>
//int isPrime(int n)
//{
//	int i = 0;
//	int k = (int)sqrt(n);
//	if (n == 2)
//	{
//		return 1;
//	}
//	if (n % 2 == 0 || n == 1)
//		return 0;
//	for (i = 3; i <= k; i += 2)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 4, j = 0, x = 0;
//	for (i = 4; i <= 2000; i += 2)
//	{
//		//生成一个质数和（一个穷举一个检验）
//		for (j = 2; j < i; j++)
//		{
//			if (isPrime(i - j) && isPrime(j)) {
//				printf("%4d=%4d+%4d", i, j, i - j);
//				x++;
//				if (x % 4 == 0)
//				{
//					printf("\n");
//					break;
//				}
//				printf(" ");
//				break;
//
//			}
//
//		}
//
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%p", &a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int* pi = &a;
//	char b = '0';
//	char* pc = &b;
//	long c = 0;
//	long* pl = &c;
//	double d = 0;
//	double* pd = &d;
//	int* pmx = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 260;
//	char* pa = &a;
//	printf("%d", *pa);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 6;
//	float b = 6.0f;
//	int* pa = &a;
//	int* pb = &b;
//	printf("%d\n%d\n\n", *pa, *pb);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 6;
//	float* b = &a;
//	printf("%d\n", a);
//	printf("%d\n", *b);
//	printf("%f\n", *b);
//	*b = 6.0f;
//	printf("%d\n", a);
//	printf("%d\n", *b);
//	printf("%f\n", *b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* pa;
//	*pa = 6;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*p = i;
//		p++;
//		printf("%d  ", *p);
//	}
//	return 0;
//}

//#include<stdio.h>
//int* t()
//{
//	int a = 6;
//	return &a;
//}
//int main()
//{
//	int* p = t();
//	int b = 1 + 2;
//	printf("%d\n", b);
//	printf("%d", *p);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* p = NULL;
//	*p = 6;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* p = NULL;
//	if (p != NULL)
//	{
//		*p = 6;
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//int main()
//{
//
//	int* p = NULL;
//	assert(p != NULL);
//	*p = 6;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float arr[5] = { 0 };
//	float* p = arr;
//	for (; p < &arr[4] + 1; )
//	{
//		*p++ = 0;
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr[2] = { 1,2 };
	int* p = arr;
	printf("%d\n", *p++);
	*p = arr;
	printf("%d\n", (*p)++);

	return 0;
}