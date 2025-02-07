#define _CRT_SECURE_NO_WARNINGS
#include"game.h"


void InitBoard(char board[ROW][COL], int row, int col)//二维数组的形参是否可以省略行列数？？？_可以省略行数，不能省略列数
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//char数组中的每个元素是字符，而非字符串（''）
		}
	}
}



void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{//打印数据
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//当行列固定时，可以固定一行
			if (j < col-1)
				printf("|");
		}
		printf("\n");
		//打印分割信息
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
	printf("玩家下棋：>\n");
	printf("请输入坐标：>");
	while(1){
	scanf("%d %d",&x,&y);
	//输入1~row的坐标
	//坐标合法性的判断
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '*';
			break;
		}
		else
		{
			printf("坐标已经被占用，请选择其他位置");
		}
	}
	else
	{
		printf("坐标非法，请重新输入\n");
	}
	}
}


//改造电脑的算法
void ComputerMove(char board[ROW][COL], int row, int col)
{
	//找空白位置随机下棋
	printf("电脑下棋：>\n");
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
//玩家赢-'*'
//电脑赢-'#'
//平局-'Q'
//继续-'C'
{
	int i = 0, j = 0, counter = 0;
	//行检查
	for (i = 0,counter = 0; i < row; i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
			return board[i][0];
		
	}
	//列检查
	for (j = 0, counter = 0; j <col; j++)
	{
		if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]&&board[0][j]!=' ')
			return board[0][j];

	}
	//左对角线检查
	if (board[0][0] == board[1][1] && board[1][1] == board[2][02] && board[1][1] != ' ')
		return board[0][0];

	
	//右对角线检查
	if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[0][0];
	
	
	//检查到这儿，说明可能平局
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	//游戏继续
	return 'C';
}

int IsFull(char board[ROW][COL], int row, int col)
{
	//满了，返回1；不满，返回0
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