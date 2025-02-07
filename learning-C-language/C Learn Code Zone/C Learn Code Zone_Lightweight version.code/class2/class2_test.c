#define _CRT_SECURE_NO_WARNINGS
//分支循环语句——控制语句
//语句？
//表达式语句、函数调用语句、控制语句、复合语句、空语句

//控制语句
//C语言是结构化的程序设计语言
//顺序结构、选择结果、循环结构
//结构化的语言：能够实现基本结构
//1. 条件判断语句也叫分支语句：if语句、switch语句；
//2. 循环执行语句：do while语句、while语句、for语句；
//3. 转向语句：break语句、goto语句、continue语句、return语句。


//分支语句（选择结构）
#include<stdio.h>
//int main()
//{
//	//if (3 == 3)//真就执行
//	//	printf("hehe");
//	//int age = 10;
//	//if (age < 18)//不能加分号
//	//{
//	//	printf("未成年");//完整的语句
//	//	printf("不能饮酒\n");
//	//}//多语句带上大括号形成一条语句
//	//else
//	//{
//	//	printf("成年");
//	//}
//
//	int age = 10;
//	scanf("%d",&age);
//	//多分支,只执行其中一个，范围要考虑完整，避免中文字符
//	//0表示假，非0为真
//	//{多语句}形成代码块（语法上的一条语句 ）
//	
//	if (age < 18)
//	{
//		printf("青少年");
//	}
//	else if (18 <= age && age < 28)
//		//表达式的计算，该表达式18 <= age  < 28从左向右进行计算
//		//18<=age   ---0
//		//0<28为真
//		printf("青年");
//	else if (age >= 28 && age < 40)
//		printf("中年\n");
//	else if (age >= 40 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age <= 100)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}
//悬空else:
//else 和其最近的|不在括号里的if形成if-else的一条语句，跟缩进、对齐没关系---代码的整齐、优美性

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	
//	return 0;
//}
////变量的优美性
////1、变量的命名（有意义、规范）
////2、空格，空行，换行
////《高质量C、C++编程》林锐博士！！！
//int main()
//{
//	char firstname[10] = { 0 };
//	char first_name[10] = { 0 };
//	char FirstName[10] = { 0 };
//
//	//命名的优美性,对比
//	int a = 10;
//	int a=10;//丑一点
//	int b = 10;
//
//	return 0;
//}
////养成好的习惯，避免坏的习惯

//test()
//{
//	int a = 1;
//	if (a==1)
//	{
//		return 1;//return 后面的不执行
//	}
//	else//代码书写上的好处——易于理解
//		return 0;
//}
//int main()
//{
//	int r = test();
//	printf("%d",r);
//	return 0;
//}
//int main()
//{
//	int num = 3;
//	if (num == 5)//if (5==num)这种更好，不易减少=
//		//num =5 没有理由报错，但是与原意相差很多
// //避免表达式的赋值
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//奇数判断
//int main()
//{
//	int a = 10;
//	scanf("%d",&a);
//	//判断
//	if (a % 2 != 0)//注意字符的大小写，组合型的符号的间隔
//		printf("该数为奇数\n");
//	else
//		printf("该数不为奇数\n");
//		return 0;
//}

//输出1—100间的奇数——产生1-100的数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//			printf("%d   ", i);//printf("%d\n", i);
//		
//		i++;
//	}
//	return 0;
//}

//switch-常常多分支情况
//int main()
//{
//	int day = 4;
//	scanf("%d", &day);//注意取地址符
//	//if (1 == day)
//	//	printf("星期一");
//	//else if (1 == day)
//	//	printf("星期一");
//	//else if (1 == day)
//	//	printf("星期一");
//	switch (day)//必须是整型的表达式，实现离散变量的分支语句
//	{
//	//case 'a'://整型常量表达式，字符是可以的（ASCII）
//	//	printf("星期一");
//	//	break;//跳转语句，跳出条件语句
//	//case 2:printf("星期二"); break;
//	//case 3:printf("星期三"); break;
//	//case 4:printf("星期四"); break;
//	//case 5:printf("星期五"); break;
//	//case 6:printf("星期六"); break;
//	//case 7:printf("星期七"); break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		//1、case后面可以不加break
//		//2、没有break会持续往下走，多个caes匹配同一个语句的效果
//		break;//建议最后一个加break（根据需要）
//	default:
//		printf("选择错误\n");
//		break;
//	}
//	
//	return 0;
//}
//switch允许嵌套使用
//break跳出所在的swtich语句，不能通过标识跳出指定的swtich语句

//循环语句
//while
//int main()
//{
//	while (1)//判断条件永远为真，陷入死循环
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			//break;//跳出、终止循环，作用于循环，而非if语句
//			continue;//产生死循环，直接跳过本次循环的剩余语句 
//		printf("%d  ", i);//执行中的终止
//		i++;
//	}
//	return 0;
//}
//while语句中break适用于永久的终止循环
//continue跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断
//int main()
//{
//	//
//	////int ch = getchar();//获取
//	//char ch = getchar();//get a character form  stdin(标准库），放不下EOF这个负数
//	//EOF;//
//	//printf("%c\n",ch);
//	//printf("%d\n", ch);//输出对应的ASCII
//	//putchar(ch);//输出
//	//MSDN
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);*///清理缓冲区
//	//Alt+Z  获得一个EOF的返回值
//	//回车=/n
//	//getchar()与键盘之间输入缓冲区
//	// 按回车，a进入缓冲器，相对于一次输入两个字符
//	//a/n     
//
//	//假如密码是一串字符
//	//char password[20] = { 0 };
//	//printf("请输入密码:>");//输入提示区
//	//scanf("%s", password);//数组名本来就是地址，不需要取
//	////" %s"跳过空白字符？？？
//	////scanf  \getchar都是在输入缓冲区读取
//	////sacnf,不读取/n,
//	////abcdef  deah    scanf读字符串的特点读到空格就不读了，getchar 只读了一个空格
//	////gets读一行包括空格
//	////getchar();//读取\n 
//	//int ch = 0;
//	//while ((ch = getchar()) != '\n')
//	//{
//	//	;
//	//}
//	//printf("请确认密码（Y/N):>");
//	//int ret = getchar();
//	//if ('Y' == ret)
//	//{
//	//	printf("Yes");
//	//}
//	//else
//	//{
//	//	printf("No");
//	//}
//	//return 0;
//	//只打印数字字符
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//}
 
//进行写入：已经打开了一个可执行程序，关掉

//没有单独的字符串型的，只有字符+数组
//VS中三次Crtl+Z停止程序，其他编译器可能只要一次
//int main()
//{
//    
//    //char ch[] = "73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33";
//    //for(int i = 0;i<=11;i++)
//    //{ 
//    //printf("%c", ch[i]);
//    //}
//    /*printf("%c\n",'a');
//    printf("%c\n", 97);*/
//  
//    return 0;
//}
//int main()
//{
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 3);
//    return 0;
//}
//int main()
//{
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };//int 有点可以存的下  if是ASCII的话，char存的下
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof(arr)-计算的是数组的总大小，单位是字节
//	//sizeof(arr[0])是计算数组元素的大小
//	//strlen  要求 字符数组   末尾要有\0才行
//	while (i < sz)
//	{
//		printf("%c",arr[i]);
//		i++;
//	}
//}

#include <stdio.h>

//int main() {
//    int a[8] = { 0 };
//    scanf("%d", a);
//    int year[4] = { 0 }, month[2] = { 0 }, data[2] = { 0 };
//    int i = 0;
//    for (; i <= 7; i++) {
//        if (i <= 3)
//            year = { a[i] };
//        else if (i <= 5)
//            month = { a[i] };
//        else if (i <= 7)
//            data = { a[i] };
//    }
//    printf("year=");
//    for (i = 0; i <= 3; i++) {
//        printf("%d", year[i]);
//    }
//    printf("\n");
//    printf("month=");
//    for (i = 0; i <= 1; i++) {
//        printf("%d", month[i]);
//    }
//    printf("\n");
//    printf("data=");
//    for (i = 0; i <= 3; i++) {
//        printf("%d", data[i]);
//    }
//    printf("\n");
//    return 0;
//}

#include <stdio.h>

//int main()
//{
//    //输入数据
//    long a = 0;
//    double c = 0, m = 0, y = 0;
//    //float a=0.0;默认为double类型，要变成float a=0.0f;
//    //double 存储数据的精度不同，double,float,都试一试
//    //高精度用double ，低精度用float
//    scanf("%d;%lf,%lf,%lf", &a, &c, &m, &y);
//    //输出
//    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.", a, c, m, y);
//    return 0;
//}
// 
//// #include<stdio.h>
//int main()
//{
//    int a = printf("Hello world!");返回打印的数据的个数
//    printf("\n%d", a);
//    return 0;
//}

//int main()
//{
//	printf("%u", sizeof(char*));
//	return 0;
//}
 

//计算最值问题
//int main()
//{
//	int arr[4] = { 0 };
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (int i = 0; i < 4; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//
//	}
//	printf("%d",max);
//	return 0;
//
//}
// 
//int main()
//{
//	int n=0;
//	int max = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d",&n);
//		if (n > max)
//			max = n;
//	}
//	printf("%d",max);
//	return 0;
//
//}


//for循环
//
//int main()
//{
//	int i = 1;
//	//初始化
//	while (i <= 10)//循环条件——判断部分
//	{
//		printf("%d", i);
//		i++;//调整
//	}
//	return 0;
//}

//for (初始化部分；条件判断；调整部分)

//int main()
//{
//	int i=0;
//	for (i = 1; i <= 10; i++)//三位一体，易改动 
//		//初始化（只执行一次），判断，调整
//	{
//		if (i == 5)
//		{/*
//			break;*///跳出循环
//			continue;//跳出本次循环，跳过continue后面的代码，且不会跳过“调整部分”
//		}
//		printf("%d  ",i);//执行语句
//		
//	}
//	return 0;
//}
//break 终止循环，只能结束一个for循环（）
//continue 跳到调整部分

//尽量不要循环体内更改循环变量，防止违背原意，失去控制
//for 语句的循环控制变量建议选择“前闭后开区间”的写法
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//0-9
//	int i = 0;
//	for (; i < 10; i++)
//	//for (; i < =9; i++)
//		//结果等价，但可读性较弱
//			//通常从0开始的代码较好
//		//for （i=100；i<=200;i++）
//		printf("%d", arr[i]);
//	return 0;
//}

//for 循环的变种
//for 的判断部分的省略——判断恒成立
//int main()
//{
//	for (;;)
//		printf("hehe\n");//死循环
//	return 0;
//}
//建议 for的三件套不要省略—可读性下降，结构性下降，语义变化
//嵌套循环
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 2; i++)
//	{
//		for (; j <2; j++)//可能会在下次中不执行
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10; i++)//C99语法才支持了这种写法！！！；C++中支持这种语法，内存大小不改变
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//循环多变量控制
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)//&&逻辑且，全真为真，一假则假
//		//||逻辑或，一真则真，全假才假
//		printf("hehe\n");
//	return 0;
//}

//笔试题
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 0, y = 0; y = 0; x++, y++)//y=0为0，赋值,零为假，不进循环
//		y++;
//	return 0;
//}



//do....while ,先干在判断，至少执行一次，使用场景有限，不经常使用
//int main()
//{
//	//先执行循环体+++判断++
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			/*break;*/
//			continue;//死循环
//		printf("%d", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
//使用频次：for while do...while

//练习1. 计算 n的阶乘。
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int m = 1;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		m *= i;
//	}
//	printf("n!=%d", m);//可能出现数据溢出，内置的库无法满足，模拟实现大数运算
//	return 0;
//}
//写代码——先找办法（算法，编程思维），在写代码（按照语法形式去写）
//编程思维，如何像计算机一样计算



//练习2. 1!+ 2!+ 3!+ …… + 10!
//int main()
//{
//	int i = 0;
//
//	int m = 1;
//	int sum = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		m *= i;
//		sum += m;
//	}
//	printf("Σn!=%d", sum);
//	return 0;
//}

//练习3.在一个有序数组中查找具体的某个数字n。（讲解二分查找）
//半步——二分法
//int main()
//{
//	int arr[] = { 1,3,5,7,9};
//	int n = 0;
//	scanf("%d", &n);
//	int a = sizeof(arr)/sizeof(arr[0]);
//	int i = a;
//	int j = 0;
//	for (j=0;j<a;j++ )
//	{
//		if (arr[i / 2] == n)
//		{
//			printf("n在数组中排第%d位", i / 2 + 1);
//			break;
//		}
//		else if (arr[i / 2] < n)
//		{
//			i++;
//		}
//		else
//		{
//			i--;
//		}
//
//	}
//	
//  if(arr[i/2]!=n)
// {
//	  printf("找不到");
// }
//	return 0;
//}
//遍历法-速度慢
//int main()
//{
//	int arr[] = { 1,3,5,7,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 0;
//	scanf("%d" ,& n);
//	for (i=0;i<sz;i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("n在数组中排第%d位", i + 1);//打印位置
//			break;
//		}
//	}
//	
// if(i==sz)
// {
//	 printf("找不到");
// }
//	return 0;
//}
////查找算法——二分法-折半查找-效率高，时间短——前提条件；数组有序（时间复杂度，log2  n）
//int main()
//{
//	int arr[] = { 1,3,5,7,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz-1;
//	*** int	mid = (left + right) / 2;
//	int n = 0;
//	scanf("%d", &n);
//	//int j = 0;
//	// for (j = 0;j<sz;j++)
//	for(;right<=left;)//必须放，才能直中中间
//	{
//		mid = (left + right) / 2;//必须放；可能left、right溢出
//		mid = left+(right-left)/2;//有效防止数据溢出
//	mid=left/2+right/2;//会错误，会较小
//		if (arr[mid] == n)
//		{
//			printf("n在数组中排第%d位", mid + 1);//打印位置
//			break;
//
//		}
//		else if (arr[mid] < n)
//			left = mid + 1;
//		else if (arr[mid] > n)
//			right = mid - 1;
//	}
//	if(left>right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//


//练习4. 编写代码，演示多个字符从两端移动，向中间汇聚。
// welcome to bit!!!
// #################
// w###############!
// we#############!!
// 
// ......
// welcome to bit!!!
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!";
//	char arr2[] = "#################";
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0, right = size-2;//\0和0位置
//	//int right = strlen(arr1)-1;//不统计\0；
//	int a = 0;
//	for (a = 0;left<=right ; a++)
//	{
//		printf("%s\n", arr2);
//		arr2[left++] = arr1[left];
//		arr2[right--] = arr1[right];
//		//win  ms--1s
//		//清空屏幕
//		Sleep(1000);
//		system("cls");//库函数——执行系统命令
//		//left++;
//		//right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
 

 
//练习5. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。
//#include<string.h>//跟字符串比较有关
//int main()
//{
//	int i = 0;
//	//假设密码是字符串
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s" , password);//数组名本来就是地址
//		if (strcmp(password, "abcdef") == 0)
//			//比较两个字符串是否相等，不应使用==
//			//而应该使用strcmp
//			//如果返回值是0，表示2个字符串为0
//		{ 
//			printf("密码正确");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (i == 3)
//	{
//		printf("三次密码都错误，退出程序");
//	}
//	return 0;
//}


//数组传参数——传数组首元素的【地址】；
// 相当于拿指针变量接受，x64——指针8个字节
//一个人  大二——拿下微软实习offer
// 
// 一个人  大三——字节实习 ；总包实习50+
// 行业看重能力；也有门槛
// shopee——虾皮
// 猜数字游戏
//电脑产生一个随机数（1,100）
//猜数字
//反馈——猜大了，猜小了
//知道猜对了，结束
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("********************************\n");
//	printf("***********  1.play  ***********\n");
//	printf("***********  0.exit  ***********\n");
//	printf("********************************\n");
//}
////#define RAND_MAX 100//32767//没有宏定义在这里意义
//void game()
//{
//	
//
//	//时间戳的概念
//	
//	//生成随机数—— > 猜数字
//	//0`99
//	int ret = rand()%100+1;//0~RAND_MAX
//	int guess = 0;
//	//printf("%d\n",ret);
//	printf("请猜数字：>");
//	do
//	{
//		scanf("%d", &guess);
//		if (guess == ret)
//		{
//			printf("恭喜你，猜对\n");
//		}
//		else if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else 
//		{
//			printf("猜小了\n");
//		}
//	} while (guess != ret);
//}
//int main()
//{
//	//设计一个菜单
//	int input = 0;
//	// int *p=NULL;相当于0
//	// int a=0;
//	srand((unsigned int)time(NULL));//只要设置一次，只要调一次
//	//随机数的起点
//	do
//	{
//		menu();
//		printf("请选择：>\n");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} while (input);//多多阶段性测试
//	return 0;
//}

//goto语句
//goto_跳转：终止深度嵌套的结构
//尽量少使用，容易一起bug
//不能跨函数使用goto语句
//void test()
//{
//}
//int main()
//{
//again:
//
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
// }


//关机程序
//1、电脑运行起来后，1分钟内关机
//2.如果输入：我是猪，就取消关机'
//bat脚本
//#include<Windows.h>
//#include<string.h>
//
//int main()
//{
//	char input[20] = { 0 };
// 
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在60s内关机,如果输入：张瑞轩是我爹爹，就取消关机\n");
//	scanf("%s",input);
//	if (strcmp(input, "张瑞轩是我爹爹") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//debug-调试版本-程序员调试的版本
//release-发布版本，是给用户使用的版本
//语言的技术栈
//好未来——裁员或者