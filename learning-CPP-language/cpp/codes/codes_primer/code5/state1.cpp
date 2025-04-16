#include<iostream>
#include<vector>
using namespace std;

//成绩转化:量化--->质化
int main()
{
    vector<string> vn={"E","D","C","B","A","A++"};
    string grade;
    int a ;
    cout<<"请输入你的分数:> "<<endl;
    cin>>a;
    if(a<60)
    {
        grade = vn[0];
    }
    else
    {
        grade =vn[(a-60)/10+1];
        int m = a%10;
        if(m>7)
        {
            grade +="+";
        }
        else if(m<3&&a!=100)
        {
            grade +="-";
        }
    }
    cout<<"你的等第是: "<<grade<<endl;
    return 0;
}