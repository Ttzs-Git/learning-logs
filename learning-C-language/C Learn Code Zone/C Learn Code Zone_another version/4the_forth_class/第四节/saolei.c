#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("**********    1.play    **********\n");
	printf("**********    0.exit    **********\n");
	printf("**********   ttzs出品   **********\n");
	printf("**********************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			game();
			printf("开始游戏\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
//基础功能
//1.标记的状态；
//2.展开一片
// 3.计时的功能
// 4.倒计时关机功能
// 5.账户功能
//> 排查（x,y）坐标的时候——>'  '(递归)
//1.该坐标不是0
//2.改坐标周围不是雷
//3.改坐标不是雷且没有被排查过；