#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
//������
//��ģ��
//test.c--->������Ϸ���߼�
//game.c--->��Ϸ�����ʵ��
//game.h����>��Ϸ��������������������������ŵĶ��壩

void menu()
{
	printf("*********************\n");
	printf("****   1��play   ****\n");
	printf("****   0��exit   ****\n");
	printf("*********************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ�����̣�û�Ŷ���ʱ����ӡ�ո�
	InitBoard(board, ROW, COL);
	//��ӡģ�飻

	char ret = '0';
	//����ģ�飻
	while(1){
	DisplayBoard(board, ROW, COL);
	PlayerMove(board, ROW, COL);
	//�ж�ģ�飻
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
	//�ж�ģ�飻 
	}
	if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else 
		printf("ƽ��\n");
	DisplayBoard(board, ROW, COL);


}


int main()
{
	srand((unsigned int)time(NULL));//��������� �������
	int a = 0;
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d", &a);
		printf("\n");
		switch (a)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while(a);
	return 0;
}