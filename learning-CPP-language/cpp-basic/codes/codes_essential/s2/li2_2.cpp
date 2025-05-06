#include<iostream>
#include<vector>
#include<string>
using namespace std;

const int num=50;
void display(vector<int>& vint,string str="int type");
int input()
{
    int tem=0;
    do{
        cout<<"Plese input a number between 0 and 50"<<endl;
        cin>>tem; 
    }while(tem<0||tem>num);
    return tem;
}

//func1:
void pent_arr(int n)
{
    //生成Pentagonal数列
    static vector<int> vint;
    if(n>vint.size())
    {
        for(int i=vint.size();i<=n;++i)
        {
            vint.push_back(i*(3*i-1)/2);
        }
    }
    int elem=vint[n];
    cout<<elem<<endl;
    display(vint);
}


void display(vector<int>& vint,string str)
{
    int n=vint.size();
    for(int i=1;i!=n;i++)
    {
        cout<<vint[i]<<" ";
    }
    cout<<endl;
    cout<<str<<endl;
}
int main()
{

    int n=input();
    pent_arr(n);
   
    return 0;
}