#include<iostream>
#include<stack>
using namespace std;

int recur(int n)
{
    if(n==1) return 1;
    else return n+recur(n-1);//普通递归
}

int tailRecur(int n,int res)
{
    if (n==0) return res;
    else return tailRecur(n-1,res+n);//尾递归
}

int fib(int n)
{
    if(n==1||n==2) return 1;
    else return (fib(n-1)+fib(n-2));
}

int forLoopRecur(int n)
{
    //通过for Loop实现迭代
    stack<int> stack;
    for(int i=1;i!=n+1;i++)
    {
        stack.push(i);
    }
    int res=0;
    if(!stack.empty()){
    for(int i=0;i!=n;++i)
    {
        res+=stack.top();//栈顶部的数据
        stack.pop();//弹出数据
    }
    }
    return res;
}

int main()
{
    int n=0;
    cin>>n;
    cout<<recur(n)<<endl;
    cout<<tailRecur(n,0)<<endl;
    cout<<forLoopRecur(n)<<endl;
    cout<<fib(n)<<endl;
    return 0;
}