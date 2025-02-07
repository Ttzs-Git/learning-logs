#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//三子棋
//分模块
//test.c--->测试游戏的逻辑
//game.c--->游戏代码的实现
//game.h——>游戏代码的声明（函数的声明、符号的定义）

void menu()
{
	printf("*********************\n");
	printf("****   1、play   ****\n");
	printf("****   0、exit   ****\n");
	printf("*********************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘：没放东西时，打印空格
	InitBoard(board, ROW, COL);
	//打印模块；

	char ret = '0';
	//下棋模块；
	while(1){
	DisplayBoard(board, ROW, COL);
	PlayerMove(board, ROW, COL);
	//判断模块；
	ret = IsWin(board, ROW, COL);
	if (ret != 'C')
	{
		break;
	}
	DisplayBoard(board, ROW, COL);
	ComputerMove(board, ROW, COL);

	ret = IsWin(board, ROW, COL);
	if (ret != 'C')
	{
		break;
	}
	//判断模块； 
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else 
		printf("平局\n");
	DisplayBoard(board, ROW, COL);


}


int main()
{
	srand((unsigned int)time(NULL));//设置随机数 生成起点
	int a = 0;
	do
	{
		menu();//打印菜单
		printf("请选择：>");
		scanf("%d", &a);
		printf("\n");
		switch (a)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("开始游戏\n");
			game();
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while(a);
	return 0;
}