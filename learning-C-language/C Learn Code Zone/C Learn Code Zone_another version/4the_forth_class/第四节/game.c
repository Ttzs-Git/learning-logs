#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void game()
{
	char mine[ROWS][COLS] = {'0'};//���Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = {'*'};//��Ų�����׵���Ϣ
	//��ʼ�������������Ϊָ������
	//mime������û�в����׵�ʱ��
	InitBoard(mine,ROWS,COLS);
	InitBoard(show, ROWS, COLS);
	//print(mine, ROW, COL);
	//������
	SetMine(mine,ROW, COL);
	print(mine, ROW, COL);
	 print(show, ROW, COL);
	//�Ų���
	 FindMine(mine,show,ROW,COL);


}
void InitBoard(char arr[ROWS][COLS], int rows, int cols)
{
	int i = 0, j = 0;
	
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = arr[0][0];
		}
	}
}
void print(char arr[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	printf("---------ɨ�� ��Ϸ---------\n");
	printf("0");
	for (j = 1; j <= col; j++)
	{
		printf(" %d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d", i);
		for (j =1; j <= col; j++)
		{
			printf(" %c ",arr[i][j]);
		}
		printf("\n");
	}
	printf("---------ttzs ��Ʒ---------\n");
	printf("\n");
}

void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int count = N;
	while (count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0, win = 0;//win���׵ĸ���
	while (win<ROW*COL-N)
	{
	printf("������Ҫ�Ų�����꣺>");
	scanf("%d%d", &x, &y);
	if (x >= 1 && x < row && y >= 1 && y <= col)
	{
		if (mine[x][y]=='1')//�������
		{ 
			printf("���ź��㱻ը����\n");
			print(mine,ROW,COL);
			break;
		}
		else //���������
		{
			if (show[x][y] == '*')
			{
				win++;
				//ͳ�ƣ�x,y��������Χ�ж�����
				show[x][y] = Count(mine, x, y) + '0';//ת��Ϊ�����ַ�
				print(show, ROW, COL);
			}
			else
				printf("�õ��Ѿ���̽�����\n");
		}
	}
	else
	{
		printf("���������룡��\n");
	}
	}
	if (win == ROW * COL - N)
	{ 
		printf("��ϲ�����׳ɹ�\n");
		print(mine,ROW,COL);
	}
}
int Count(char mine[ROWS][COLS], int  x, int y)//Ҳ���Ա����ӷ�
{
	//int  i = 0, j = 0,sum = 0;
	//for (i = x - 1; i <= x + 1; x++)
	//{
	//	for (j = y - 1; j <= y + 1; j++)
	//	{
	//		 sum +=mine[i][j] - '0';//��������'0''1'����0 1

	//	}
	//}
	//return sum;//����̫����
	return (mine[x - 1][y - 1]
		+ mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1])-8*'0';
}
