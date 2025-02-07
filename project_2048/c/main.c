#include"project.h"
extern Game game;

//编写主程序的代码
int main()
{
    system("clear");//清除终端内容
    init();//初始化(先全部初始化为0,再随机生成2个随机数(随机数为2或者4))
    do
    {
        show();
        move_control();
    }while(!failure());
    printw("游戏结束！最终得分：%d\n", game.score);
    refresh();
    sleep(2);
    endwin();
    return 0;
}