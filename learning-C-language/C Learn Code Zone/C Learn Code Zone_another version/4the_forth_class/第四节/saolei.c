#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**********************************\n");
	printf("**********    1.play    **********\n");
	printf("**********    0.exit    **********\n");
	printf("**********   ttzs��Ʒ   **********\n");
	printf("**********************************\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case 1:
			game();
			printf("��ʼ��Ϸ\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
//��������
//1.��ǵ�״̬��
//2.չ��һƬ
// 3.��ʱ�Ĺ���
// 4.����ʱ�ػ�����
// 5.�˻�����
//> �Ų飨x,y�������ʱ�򡪡�>'  '(�ݹ�)
//1.�����겻��0
//2.��������Χ������
//3.�����겻������û�б��Ų����