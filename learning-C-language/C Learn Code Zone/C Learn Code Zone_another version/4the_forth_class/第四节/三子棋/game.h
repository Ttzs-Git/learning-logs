#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>


#define ROW 3 
#define COL 3

//�γɲ˵�
void menu();
//��ʼ������
void InitBoard(char board[ROW][COL],int,int);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int, int);
//�������
void PlayerMove(char board[ROW][COL], int ,int );
//��������
void ComputerMove(char board[ROW][COL], int, int);
//�ж���Ӯ��ģ��
char IsWin(char board[ROW][COL], int, int);
//�ж������Ƿ�����
int IsFull(char board[ROW][COL], int, int);
//��Ϸ����ģ��
void game();
