#include"test.hpp"

//实现斐波那契数列，返回特定项的数字

int input()
{
    //得到一个有效且安全的输入
    int tem;
    do{
        cout<<"Please input a number between 0 and 50"<<endl;
        cin>>tem;
    }while(tem<0||tem>max_num);
    return tem;
}



int fib_arr(int n)
{
    static vector<int> vint;
    if(vint.empty())
    {
        //初始化
        vint.push_back(0);
        vint.push_back(1);
    }
    if(n>vint.size())
    {
        //需要增加数据
        for(int i=vint.size();i<=n;++i)
        {
            //  i一定大于1，意味着容器中已经存在了1的数据,从位置2开始
            vint.push_back(vint[i-2]+vint[i-1]);

        }
    }
    for(int i=0;i!=vint.size();++i)
    {
        cout<<vint[i]<<" ";
    }
    cout<<endl;
    return vint[n];
}



int main()
{
    //输入一个数字范围是整数且在一定的范围内
    int a=input();
    //生成一个斐波那契数列
    cout<<fib_arr(a)<<endl;
    return 0;
}