#include <iostream>
using namespace std;

// HDU 2005

int cpr(int year, int month, int day)
{
    int count = day;
    while(month){
    month--;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        count += 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        count += 30;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            count += 29;
        }
        count += 28;
    }
    
}
    return count;
}

int main()
{
    int year = 0, month = 0, day = 0;
    int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};
    while (scanf("%4d/%2d/%2d", &year, &month, &day) == 3) // 输入
    {
    
        //cout << cpr(year, month, day) << endl;
        int sum=0;
        for(int i=month;i!=0;--i)
        {
            mon[1]=(year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)?29:28;
            sum+=i==month?day:mon[i-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}