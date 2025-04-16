#include<iostream>
using namespace std;

int check(int i)
{
    return i==10;
}

int main()
{
    int i=0;
    int m =0;
    do{
        i++;
        cout<<"OK"<<endl;
        
    }while(m=check(i));
    return 0;
}