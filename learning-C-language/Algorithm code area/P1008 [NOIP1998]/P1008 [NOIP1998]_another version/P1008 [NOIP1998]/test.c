#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<string.h>
////1,2,3,4,5----9����>3����λ��
//// ������λ������>�ѵ�
//int* xv(int arr[3]);
//int* WS(int arr[3]);
//void print(int arr[3]);
//
//void sc()
//{
//	int answer[3] = { 0 };
//	int i = 1,j=1,k=3;
//	//i<=3; j <= 5;k <= 9
//	for (i =123; i <=329; i++)
//	{
//		answer[0] = i;
//	
//	for (j = 246; j <= 658; j++)
//	{
//		answer[1] = j;
//		for (k = 369; k <= 987; k++)
//		{
//			answer[2] = k;
//			if (arr[0] != arr[1] && arr[1] != arr[2])
//			{
//				if (WS(xv(answer)))
//				{
//					print(answer);
//				}
//			}
//		}
//	}
//	}
//	
//}
////����
//int* xv(int arr[3])
//{
//	int t = 0;
//	if (arr[0] < arr[1])
//	{ 
//		t = arr[0];
//		arr[0] = arr[1];
//		arr[1] = t;
//	}
//	if (arr[0] < arr[2])
//	{
//		t = arr[0];
//		arr[0] = arr[2];
//		arr[2] = t;
//	}
//	if (arr[1] < arr[2])
//	{
//		t = arr[1];
//		arr[1] = arr[2];
//		arr[2] = t;
//	}
//	return arr;
//}
//
//
////����Ƿ����1:2:3
//int* WS(int arr[3])
//{
//	if (2 * arr[0] == arr[1] && 3 * arr[0] == arr[2])
//	{
//		return arr;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		arr[i] = -1;
//	}
//	return arr;
//}
////���������
//void print(int arr[3])
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (arr[i] != -1)
//		{
//			printf("%d ",arr[i]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	//�������е���λ����123456789��
//	sc();
//	//���������е���λ���Ƿ��������1;2;3
//	
//	//���������
//
//	
//	return 0;
//}

//�����㷨�����abc���a,b,c�Ƿ�������������ڷ��������кܶ��������
//���鰴�ձ����������ݣ��ټ���Ƿ��ʮλ�������

void sc();
int judge(int arr[]);
void print(int arr[3]);

//����������λ��
void sc()
{
	int an[3] = {0};
	int i = 0;
	for (i = 123; i <=329; i++)
	{
		an[0] = i;
		an[1] = 2 * i;
		an[2] = 3 * i;
		//����Ƿ�����λ���ϵĲ����
		if (judge(an))
		{
			print(an);
		}
	}
}
int judge(int arr[])
{
	//�ֽ���λ���ĺ���
	int ap[9] = {0};
	int i = 0, j = 0;
	for (i = 0; i <3 ; i++)
	{
		ap[3 * i + 1-1] = arr[i]%10;
		ap[3 * i + 2-1] = arr[i] / 10 % 10;
		ap[3 * i + 3-1] = arr[i] / 100;
	}
	//�ж��Ƿ�Ϊ0
	for (j = 0; j < 9; j++)
	{
		if (ap[j] == 0)
			return 0;
	}
	//��������������
	for (i = 0; i < 9; i++)
	{
		for (j = i+1; j < 9; j++)
		{
			int a = ap[i];
			if (a == ap[j])
			{
				return 0;
			}
		}
	}
	return 1;
}
void print(int arr[3])
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		if (arr[i] != -1)
		{
			printf("%d ",arr[i]);
		}
		
	}
	printf("\n");
}
int main()
{
	sc();
	return 0;
}