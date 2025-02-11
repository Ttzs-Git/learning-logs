#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>//应用于unix-like系统
#include<ncurses.h>
#define N 4

#ifndef PROJECT_H
#define PROJECT_H

//设置数据结构
typedef struct Game
{
    //网格
    int grid[N][N];
    //分数
    int score;
}Game;

extern Game game; // 声明外部变量

#endif // PROJECT_H

void init();//初始化函数
void show();//展示函数-UI
void produce(int n);//产生随机数

int check();//检验是否满屏
int check_row();
int check_col();
int failure();//失败检测

void left_move();
void right_move();
void above_move();
void under_move();
void move_control();//移动终端