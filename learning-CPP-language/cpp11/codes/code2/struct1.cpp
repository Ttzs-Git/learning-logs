#ifndef STRUCT_HPP
#define STRUCT_HPP
#include"struct.hpp"
#endif
//书店管理

void initial(Sales_data *book)//抽象的书
{
    std::cin>>book->book>>book->isbn>>book->num>>book->ave;
    book->price = book->ave * book->num;
}

//处理两个对象
void process(Sales_data *book1,Sales_data *book2)
{
    if(book1->isbn == book2->isbn)
    {
        //累加
        book1->price = (book1->price +book2->price)/(book1->num+book2->num);
        //清零
        book2->book=" ";
        book2->isbn=" ";
        book2->num = 0;
        book2->ave = 0;
        book2->price = 0;
    }
}

//打印函数
void output(Sales_data *book)
{
    if(book->book!=" ")
    {
     std::cout<<book->book<<" "
              <<book->isbn<<" "
              <<book->num<<" "
              <<book->ave<<" "
              <<book->price<<std::endl;   
    }
}

int main()
{
    Sales_data book1,book2;
    initial(&book1);//输入函数
    initial(&book2);
    process(&book1,&book2);//处理函数
    output(&book1);//输出函数
    output(&book2);
    return 0;
}
