#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//结构体
//结构的基础知识
//结构是一些值的集合；成员变量；结构的每个成员可以是不同类型的变量
//数组是一组相同类型元素的集合
//内置类型——>表示的对象比较单一简单
//复杂对象——>难易用单一内置类型的进行描述因而创造了结构体
//struct tag
//{
//	member - list;
//}variable-list;——>变量列表可有可无
//声明结构的结构体类型



//描述人
struct person//结构题关键字+标签（标识符）——>结构体类型||图纸——>不占用物理空间|类型——类
{
	char name[20];//名字
	char tele[12];//电话最后存一个\0
	char sex[5];//性别：男 女 保密|一个汉字占2个字节+++一个\0
	int high;//数字
	//成员变量
};//p1,p2;//——>使用struct person创建的两个变量||p1\p2是两个全局的结构体变量
struct person p3;
  //结构体变量的创建和初始化
//全局变量

//结构体内部可以出现其他结构体
struct st
{
	struct person p;
	int num;
	float f;
};//存在依赖关系——>必须先有前面的结构体的声明

void print(struct person* sp)
{
	printf("%s %s %s %d\n",sp->name,sp->tele,sp->sex,sp->high);
	//结构体指针->成员变量
}
void print2(struct person p2)
{
	printf("%s %s %s %d\n", p2.name, p2.tele, p2.sex, p2.high);
	//结构体变量.成员变量
}

int main()
{
	//内部声明结构体只能内部使用
	struct person p1 = { "张三","15596566783","男",181};//结构体变量的创建|变量——对象
	struct st p8 = { {"李四","15233333333","女",166}, 100,3.14f};//浮点数在内存中不能精确保存
	//不完全初始化——
	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
	printf("%s %s %s %d %d %f\n", p8.p.name, p8.p.tele, p8.p.sex, p8.p.high, p8.num, p8.f);
	//.操作符进行访问
	print(&p1);//节省空间和时间；
	print2(p1);
	//函数传参是需要压栈的；如果结构体过大，压栈的系统开销会比较大，导致性能下降
	return 0;
}

//结构体传参


