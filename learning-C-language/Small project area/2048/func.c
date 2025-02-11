#include "project.h"

//实现2048小游戏
Game game;

//初始化数据+初始化模式
void init()
{

    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE); // 必须启用键盘扩展
    curs_set(0); // 隐藏光标
    srand((unsigned)time(NULL));//生成随机种子
    for(int i = 0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            game.grid[i][j] = 0;
        }
    }
    game.score = 0;
    printw("游戏初始化完成!\n");
    refresh();
    sleep(1);
    produce(2);
}

//展示数组
void show()
{
    clear();
    printw("----------------------\n");
    printw("------分数是%4d------\n",game.score);
    for(int i = 0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
        printw("%4d",game.grid[i][j]);
        }
        printw("\n");   
    }
    refresh();
}

//随机生成给定数值的函数
void produce(int n)
{
    if(!check()){
  int flag = 0;
  while(flag<n)
  {
   int i = rand()%4;
   int j= rand()%4;//随机位置 
   if(game.grid[i][j])
   {
    continue;
   }
   else
   {
    // game.grid[i][j] = (rand()%2+1)*2;//随机生成2，4
    //90%的2,10%的4
    int t=rand()%11;//生成1~10的数
    if(t<=9)
    {
        game.grid[i][j]=2;
    }
    else
    {
        game.grid[i][j]=4;
    }
    flag++;
   }
  } 
    }
    else{
        return;
    }

}

//移动=边靠拢边相加(分数)
void left_move()
{
    //一行行地处理
    for(int i=0;i<N;i++)
    {
     //假设这是第一行-选择排序法
     int index = 0;//固定坐标--可放置的位置
     for(int j=0;j<N;j++)
     {
        if(game.grid[i][j]){
        if(j!=index)
        {
            game.grid[i][index]=game.grid[i][j];
            game.grid[i][j]=0;
        }
        if(index>=1 && game.grid[i][index]==game.grid[i][index+1])
        {
            game.score+=(game.grid[i][index+1]+=game.grid[i][index]);
            game.grid[i][index]=0;
            index--;//为了下面的那个中和--俗称保持不动
        }
        index++;
        }
     }   
    }
    produce(1);
}

void right_move()
{
    //一行行地处理
    for(int i=0;i<N;i++)
    {
     //假设这是第一行-选择排序法
     int index = N-1;//列标
     for(int j=index;j>=0;j--)
     {
        if(game.grid[i][j])
        {
            if(j!=index){
            game.grid[i][index]=game.grid[i][j];
            game.grid[i][j]=0;
            }

            if(index<N-1&&game.grid[i][index]==game.grid[i][index+1])
            {
                game.score+=(game.grid[i][index-1]+=game.grid[i][index]);
                game.grid[i][index]=0;
                index++;
            }
            index--;
        }
        }
    }   
    produce(1);
}

void above_move()
{
    //一列处理
    for(int j=0;j<N;j++)
    {
     //假设这是第一列-选择排序法
     int index = 0;//行标
     for(int i=index;i<N;i++)
     {
        if(game.grid[i][j])
        {
            game.grid[index][j]=game.grid[i][j];
            game.grid[i][j]=0;
            
            
                if(index>0&&game.grid[index][j]==game.grid[index-1][j])
                {
                    game.score+=(game.grid[index-1][j]+=game.grid[index][j]);
                    game.grid[index][i]=0;
                    index--;
                }
                index++;
            
        }
     }   
    }
    produce(1);
}

void under_move()
{
    //列地处理
    for(int j=0;j<N;j++)
    {
     //假设这是第一列-选择排序法
     int index = N-1;//列标
     for(int i=index;i>=0;i--)
     {
        if(game.grid[i][j])
        {
            if(j!=index){
            game.grid[index][j] = game.grid[i][j];
            game.grid[i][j]=0;
            }
                if(index<N-1&&game.grid[index][j]==game.grid[index+1][j])
                {
                    game.score+=(game.grid[index+1][j]+=game.grid[index][i]);
                    game.grid[index][i]=0;
                    index++;
                }
            
        index++;
        }
     }   
    }
    produce(1);
}

//移动控制器
void move_control()
{
   void move_control()
{
    keypad(stdscr, TRUE); // 启用方向键检测
    int ch = getch();
    switch(ch) {
        case KEY_DOWN:  // 实际对应j键
            under_move();
            break;
        case KEY_UP:    // 实际对应k键
            above_move();
            break;
        case KEY_LEFT:  // 实际对应h键
            left_move();
            break;
        case KEY_RIGHT: // 实际对应l键
            right_move();
            break;
        default:
            beep(); // 无效输入提示
        }
    }
}



//检测是不是全有内容-检测是否有空位置
int check()
{
    for(int i=0;i<N;i++)
    {
        for(int j = 0;j<N;j++)
        {
            if(game.grid[i][j]==0)
            {
                return 0;
            }
        }
    }
    return 1;    
}

//行等检查
int check_row()
{
    int x1 = 0,x2 =x1+1;
    for(int col =0;col<N;col++)
    {
        for(x1=0;x2<N;x1++,x2++)
        {
            if(game.grid[x1][col]==game.grid[x2][col])
            return 0;
        }
    }
    return  1;
}

//列等检查
int check_col()
{
    int x1 = 0,x2 =x1+1;
    for(int row =0;row<N;row++)
    {
        for(x1=0;x2<N;x1++,x2++)
        {
            if(game.grid[row][x1]==game.grid[row][x2])
            return 0;
        }
    }
    return 1;
}

//失败检测器
int failure()
{
    return  check()&&(check_row() && check_col());
}