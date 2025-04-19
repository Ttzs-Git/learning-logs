#include"main.hpp"

int main()
{
    srand(time(0));
    string user_name("None");//用户名
    int grade(0);//成绩
    greet(user_name);//询问名字
    oftxt(user_name);//记录名字到文件
    vector<int> vint{1,2,3,4,5,6};
    game(vint,grade);//开始游戏
    oftxt(grade);

    return 0;
}