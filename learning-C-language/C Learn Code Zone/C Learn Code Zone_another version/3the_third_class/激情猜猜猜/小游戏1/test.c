#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//����
void menu();
void Game();
void Choice();

//�˵�
void menu()
{
	printf("   ��ӭ����������²²¡�  \n");
	printf("           Ttzs��Ʒ         \n");
	printf("*******     �˵�   *******\n");
	printf("*******   0.exit   *******\n");
	printf("*******   1.play   *******\n");
	printf("����������ѡ����ţ�>");

}

//��ʼ��Ϸ
void Game()
{
	system("cls");
	printf("��ʼ����Ϸ\n");
	printf("*******   1.play  *******\n");
	system("cls");
	Sleep(10);
	printf("Time = 60s\n");
	system("shutdown -s -t 60");
	int ret = rand()%100+1;
	int cc = 0;
	do
	{
		printf("������һ����λ������>\n");
		scanf("%d",&cc);
		if (cc > ret)
		{
			printf("�´���\n");
		}
		else if (cc < ret)
		{
			printf("��С��\n");

		}
	} while (cc!=ret);
	printf("��ϲ�㣬�ڹ涨ʱ���������\n");
	system("shutdown -a");
	printf("�¶���\n");
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
			printf("��ӭ�´ι���\n");
			break;
		case 1:
		again:
			Game();
			printf("�Ƿ��ٴ���Ϸ(1/0):>");
			scanf("%d", &i);
			if (i)
			{
				system("cls");
				printf("����ing");
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
			printf("����������\n");
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

