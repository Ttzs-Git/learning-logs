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
	int ret = rand()%100+1;
	int cc = 0;
	do
	{
		printf("请输入一个二位整数：>\n");
		scanf("%d",&cc);
		if (cc > ret)
		{
			printf("猜大了\n");
		}
		else if (cc < ret)
		{
			printf("猜小了\n");

		}
	} while (cc!=ret);
	printf("恭喜你，在规定时间内完成了\n");
	system("shutdown -a");
	printf("猜对了\n");
	printf("\n");

}


void Choice()
{
	int input = 0;
	int  i = 0 ;
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

