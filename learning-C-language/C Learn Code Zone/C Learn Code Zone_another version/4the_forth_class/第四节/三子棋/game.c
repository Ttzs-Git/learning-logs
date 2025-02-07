#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void InitBoard(char board[ROW][COL], int row, int col)//��ά������β��Ƿ����ʡ��������������_����ʡ������������ʡ������
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//char�����е�ÿ��Ԫ�����ַ��������ַ�����''��
		}
	}
}



void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{//��ӡ����
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//�����й̶�ʱ�����Թ̶�һ��
			if (j < col-1)
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���Ϣ
		if (i < row - 1)
		{
			for(j=0;j<col;j++)
			{ 
				printf("---");
				if (j < col - 1)
				printf("|");
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("������壺>\n");
	printf("���������꣺>");
	while(1){
	scanf("%d %d",&x,&y);
	//����1~row������
	//����Ϸ��Ե��ж�
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("�����Ѿ���ռ�ã���ѡ������λ��");
		}
	}
	else
	{
		printf("����Ƿ�������������\n");
	}
	}
}


//������Ե��㷨
void ComputerMove(char board[ROW][COL], int row, int col)
{
	//�ҿհ�λ���������
	printf("�������壺>\n");
	int x = 0, y = 0;
	
	while(1)
	{
		x = rand() % row;//0~2
		y = rand() % col;//0~2
	if (board[x][y] == ' ')
	{
		board[x][y] = '#';
		break;
	}
	}
	

}

char IsWin(char board[ROW][COL], int row, int col)
//���Ӯ-'*'
//����Ӯ-'#'
//ƽ��-'Q'
//����-'C'
{
	int i = 0, j = 0, counter = 0;
	//�м��
	for (i = 0,counter = 0; i < row; i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
			return board[i][0];
		
	}
	//�м��
	for (j = 0, counter = 0; j <col; j++)
	{
		if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]&&board[0][j]!=' ')
			return board[0][j];

	}
	//��Խ��߼��
	if (board[0][0] == board[1][1] && board[1][1] == board[2][02] && board[1][1] != ' ')
		return board[0][0];

	
	//�ҶԽ��߼��
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[0][0];
	
	
	//��鵽�����˵������ƽ��
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	//��Ϸ����
	return 'C';
}

int IsFull(char board[ROW][COL], int row, int col)
{
	//���ˣ�����1������������0
	int i = 0, j = 0;
	for(i= 0;i<row;i++)
	{ 
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}