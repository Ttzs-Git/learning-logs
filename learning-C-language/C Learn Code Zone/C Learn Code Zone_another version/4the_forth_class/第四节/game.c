#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void game()
{
	char mine[ROWS][COLS] = {'0'};//布放布置好的雷的信息
	char show[ROWS][COLS] = {'*'};//存放查出的雷的信息
	//初始化，数组的内容为指定内容
	//mime数组在没有布置雷的时候
	InitBoard(mine,ROWS,COLS);
	InitBoard(show, ROWS, COLS);
	//print(mine, ROW, COL);
	//设置雷
	SetMine(mine,ROW, COL);
	print(mine, ROW, COL);
	 print(show, ROW, COL);
	//排查雷
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
	printf("---------扫雷 游戏---------\n");
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
	printf("---------ttzs 出品---------\n");
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
	int x = 0, y = 0, win = 0;//win排雷的个数
	while (win<ROW*COL-N)
	{
	printf("请输入要排查的坐标：>");
	scanf("%d%d", &x, &y);
	if (x >= 1 && x < row && y >= 1 && y <= col)
	{
		if (mine[x][y]=='1')//如果是雷
		{ 
			printf("很遗憾你被炸死了\n");
			print(mine,ROW,COL);
			break;
		}
		else //如果不是雷
		{
			if (show[x][y] == '*')
			{
				win++;
				//统计（x,y）坐标周围有多少雷
				show[x][y] = Count(mine, x, y) + '0';//转换为数字字符
				print(show, ROW, COL);
			}
			else
				printf("该点已经被探查过了\n");
		}
	}
	else
	{
		printf("请重新输入！！\n");
	}
	}
	if (win == ROW * COL - N)
	{ 
		printf("恭喜你排雷成功\n");
		print(mine,ROW,COL);
	}
}
int Count(char mine[ROWS][COLS], int  x, int y)//也可以暴力加法
{
	//int  i = 0, j = 0,sum = 0;
	//for (i = x - 1; i <= x + 1; x++)
	//{
	//	for (j = y - 1; j <= y + 1; j++)
	//	{
	//		 sum +=mine[i][j] - '0';//数组内是'0''1'不是0 1

	//	}
	//}
	//return sum;//计算太慢了
	return (mine[x - 1][y - 1]
		+ mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1])-8*'0';
}
