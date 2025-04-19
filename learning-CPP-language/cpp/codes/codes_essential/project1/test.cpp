#include"main.hpp"

void greet(string &user_name)
{
    //咨询名字并返回，同时开始记录
    cout<<"Weclome to our world!!!"<<endl;
    cout<<"Please give us your ideal id name and it has at least two characters!!"<<endl;
    do{
        cin>>user_name;
    }while(user_name.size()<2);
    cout<<"Hello,"<<user_name;
}


void oftxt(const string& sth)
{
    //保存内容到文件中
    ofstream outfile("test.txt");
    if(!outfile)
    {
        cerr<<"Unable to open it!!!"<<endl;
        return ;
    }
    else{
        outfile<<sth<<endl;
    }
}
void oftxt(int sth)
{
    //保存内容到文件中
    ofstream outfile("test.txt");
    if(!outfile)
    {
        cerr<<"Unable to open it!!!"<<endl;
        return ;
    }
    else{
        outfile<<sth<<endl;
    }
}
void iftxt(string& sth)
{
    //从文件中读取内容
    ifstream infile("test.txt");
    if(!infile)
    {
        cerr<<"Unable to open it !!!";
        return ;
    }
    else{
        infile>>sth;
        cout<<sth;
    }
}



//猜数字游戏:根据两个数字猜测下一个数字
void prompt(const int &n)
{
    if(n>0)
    {
        cout<<"A big number is not what you need"<<endl;

    }
    else
    {
        cout<<"A bige number is what you need!!!"<<endl;
    }
}


// void console(int &failures)
// {
//     //安慰部分
//     switch (failures)
//     {
//         case 1:
//         cout<<"Do not be discouraged!!!"<<endl<<"Try again!!!"<<endl;
//         break;
//         case 2:
//         cout<<"Hope is at your hand!Do not lose confidence!!"<<endl
//         <<"Try it agian!!"<<endl;
//         break;
//         case 3:
//         cout<<"Again Again!!!"<<endl
//         <<"Try it again"<<endl;
//         break;
//         default:
//         cout<<"Try it again!!!"<<endl;
//         break;
//     }
// }

void console(const int &failures)
{
    vector<string> fa;
    fa.push_back("None");
    fa.push_back("Do not be discouraged!!!\n Try it again");
    fa.push_back("Hope is at your hand!Do not lose confidence!!\nTry it again");
    fa.push_back("Again Again!!!\nTry it again!");
    fa.push_back("Try it again!!");
    cout<<fa[failures%4+1]<<endl;//
    
}
void guess(const int& anw)
{
    int in(0);
    int failures(0);//失败次数
    while(1)
    {  
    cin>>in;//输入猜测
        if(anw!=in){
            failures++;
            console(failures);//安慰部分
            prompt(in-anw);//提示词部分
        }
        else{
            return;
        }  
    }
}

    

void game(vector<int> &vint,int &grade)
{
    //随机在数组中选取三个数字，输出其中的两个，让别人猜测下一个是什么
    int a=vint.size();//记录大小
    int b=rand()%(a-2);//0~a-3
    cout<<"Game begin!!!"<<endl;
    cout<<"Please guess the next number according to the two numbers"<<endl;
    cout<<(vint[b])<<" "<<(vint[b+1])<<endl;
    cout<<"give me your answer"<<endl;
    //猜测部分
    guess(vint[b+2]);
    cout<<"Congratuations!!!You are right"<<endl;
    grade++;
}

