#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>


#define ROW 3 
#define COL 3

//形成菜单
void menu();
//初始化棋盘
void InitBoard(char board[ROW][COL],int,int);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int, int);
//玩家下棋
void PlayerMove(char board[ROW][COL], int ,int );
//电脑下棋
void ComputerMove(char board[ROW][COL], int, int);
//判断输赢的模块
char IsWin(char board[ROW][COL], int, int);
//判断棋盘是否满了
int IsFull(char board[ROW][COL], int, int);
//游戏的主模块
void game();
