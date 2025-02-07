#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
#include<stdlib.h>


#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define N 10

void InitBoard(char arr[ROWS][COLS], int rows, int cols);
void print(char arr[ROWS][COLS], int row, int col);
void SetMine(char arr[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int Count(char mine[ROWS][COLS], int  x, int y);
