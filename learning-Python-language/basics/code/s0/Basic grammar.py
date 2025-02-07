"""
#p1
print("Hello World")

#p2
## 整型变量
print(100)#十进制
print(0b100)#二进制数
print(0o100)#八进制，这一点跟c不同
print(0x100)#十六进制
## 浮点型
print(1.2345)
print(1.23e-10)
## 字符串类型
print("hehe")
print('hehehe')#没啥区别
## 布尔型
print(True)
print(False)
#常用数据类型可以被print直接输出
## 变量的命名 ——跟C差不多：有的不能出现，没有的尽量是字母数字下划线
### 惯例：变量名通常是小写，多个单词用下划线连接
##      受保护的单个_开头
##      私有的__开头
##      见名知义
##### 小程序
a=45
b=12
print(a,b)
print(a+b)
print(a-b)
print(a*b)
print(a/b)
print(a//b)#整除
print(a%b)#取模
### type函数对变量的类型进行检查
print(type(a))
print(type(a/b))
### int()-将一个数值或者字符串转化成整数，可以指定进制---强制类型转换
##`bool`类型转`int`类型时，`True`会变成`1`，`False`会变成`0`。
c='100'
print(int(c,base=16)) #print函数按照base的方式解读字符串，并将它按照int 的方式输出
### float(Q) 可以将一个字符串可能转化成浮点数
### str() 将一个对象准化成字符串，可以指定编码模式
#### `str`类型转成`bool`类型时，只要字符串有内容，不是`''`或`""`，对应的布尔值都是`True`
### ord() 将一个字符的字符串转化成对应的整数（字符编码),注意要是字符串，即注意要是引号

#p3
### 大部分运算符跟C类似
### 但是也有不同的
###幂运算符
print(2**6)
### 逻辑运算符 and or not
### 比C语言更加直接
### 逻辑短路依然存在
print(True and False)
### 练习1:华氏温度-摄氏温度
f=float(input('请输入一个'))
c=(f-32)/1.8
print('%.1f华氏温度=%.1f摄氏温度'%(f,c))

 input函数——用于接收输入的字符串
 float函数——将其他类型的值转化成浮点数
 print函数——输出
 格式化处理:
 第一种:
 %占位符  进行替换
 %f——>%(float,float)
 %d——>%(int,int)
 %s——>%(str,str)
 .1f——浮点数小数点后保留1位有效数字
 
 第二种:
 第一个f表示该字符串需要格式化处理
 后面的看作{f}{c}
 其中输出的格式.1f

print(f'{f:.1f}华氏度={c:.1f}摄氏度')

## 练习二
a=float(input('输入一个数'))
c=2*3.1415926*a
s=3.1415926*a**2
print(f'圆的面积是{s:.1f},圆的周长是{c:.1f}')
print(f'{s=:.1f}')
#同时输出变量名和变量内容的方式加上“=”
"""
## 判断是不是闰年
# a=int(input('请输入一个年份'))
# if(a%400==0 or (a%4==0 and a%100!=0)):
#     print(True)
# else:
#     print(False)
# ### 优化
# is_year=a%400==0 or (a%4==0 and a%100!=0)
# print(f'{is_year=}')
# ## 也可以将变量进行输出
# mm=100
# print(f'{mm=:d}')
# print(f'{mm=}')
#

# p5 分支语句
#
# h = float(input('height(m): '))
# w = float(input('weight(kg): '))
# BMI=w/h/h
# if BMI<18.5:
#     print(f'您的{BMI=:.2f}属于体重过轻')
# elif 18.5 <= BMI < 25:
#     print(f'您的{BMI=:.2f}属于正常范围')
# elif  24<=BMI<27:
#     print(f'您的{BMI=:.2f}属于体重过重')
# else:
#     print(f'您的{BMI=:.2f}属于肥胖范围')

## py版的switch——MATCH——会自动跳出，而且还能匹配其他类型
# code=int(input('响应状态码： '))
# match code:
#     case 400: de='bad request'
#     case 401: de='unauthorized'
#     case 402: de='forbidden'
#     case _: de='server error'
# print(f'状态码描述: {de:s}')
### _在case 通配符作用，类似于defluat

#code = int (input('响应状态码: '))
# match code:
#     case 401|402: de='bad request'
#     case 403|404|405: de='unauthorized'
# print(f'状态码描述是{de:s}')

### 分段函数小练习1
# x = int(input('x: '))
# if x>1:
#     y=3*x-5
# elif -1<=x<=1:
#     y=x+2
# else:
#     y=5*x+3
# print(f'{y=}')

#### 分段函数小练习2
# x = int(input("成绩： "))
# if x>=90:
#     y='A'
# elif 80<=x<90:
#     y='B'
# elif 70<=x<80:
#     y='C'
# elif 60<=x<70:
#     y='D'
# else:
#     y='E'
# print(f'{y:s}')

# #### 计算三角形的周长和面积
# a = int (input('三边之一: '))
# b = int (input('三边之一： '))
# c = int (input('三边之一： '))
# if b>a:
#     t=b
#     b=a
#     a=t
# if c>b:
#     t=c
#     c=b
#     b=t
# if c>a:
#     t=a
#     a=c
#     c=t
# if b+c>a:
#     p=(a+b+c)/2
#     s=(p*(p-a)*(p-b)*(p-c))**(1/2)
#     print(f'{s:.1f}')
# else:
#     print('不能组成三角形')

# # p6
# ### 循环结构
# import time
# for _ in range(3600):
#     print('hello world')
#     time.sleep(1)
# ## 实现休眠1s
# ### range构造出0 到3599========> i<3600;i++

## 实现1~100的整数求和
#sum = 0
# for i in range(2,101,2):
#     sum += i
# print(f'{sum=}')
# print('%d'%sum(range(2,101,2)))

# ## 条件循环
# i = 0
# sum = 0
# while i<=100:
#     sum+=i
#     i+=2
# print(sum)
# ## break 和continue依旧成立

# ## 嵌套循环结构
# ### 例题1 九九乘法表
# for i in range(1,10):
#     for j in range(1,i+1):
#         print(f'{i:2d}*{j:2d}={i*j:2d}',end='\t')
#
#     print()

## 素数判断函数
# a = int(input('请输入一个数(>1): '))
# k = (int)(a**(1/2))
# flag = 1
# for i in range(2,k+1):
#     if a % k == 0:
#         flag = 0
#         break
# if flag == 1:
#     print(f'{a}是一个素数')

## 最大公约数:阿基米德辗转相除法
# a = int(input('输入一个数： '))
# b = int(input('输入另一个数： '))
# if a>b:
#     m,n=a,b
# else:
#     m,n=b,a
# while m%n:
#     m,n=n,m%n
# print(f'{a}和{b}的最大公约数是{n}')

# a = int(input('输入一个数： '))
# b = int(input('输入另一个数： '))
# for i in range(a,0,-1):
#     if a%i==0 and b%i==0:
#         print(f'{a}和{b}的最大公约数是{i}')
#         break

# x = int(input('请输入一个数： '))
# y = int(input('请输入另一个数： '))
# y,x=x,y
# print(x,y)
### python可以在不借助第三个量的情况下实现两个量的交换

# ### 猜数字小游戏
# import random
# ## random.random生成 数的范围是[0,1)
# x=int(random.randrange(1,101))
# y = int(input('请输入一个数： '))
# while y!= x:
#     if(y>x):
#         print('猜大了')
#         y = int(input('请再输入一个较小的数： '))
#     else:
#         print('猜小了')
#         y =int(input('请再输入一个较大的数： '))
#
# print(f'恭喜你找到了这个数{x}')

### 一百以内的素数：
# for i in range(2,101):
#     k = int(i**0.5)
#     flag = 1
#     for j in range(2,k+1):
#         if(i % j == 0):
#             flag =0
#             break
#     if flag ==1:
#         print(i)

# #### 打印斐波那契数列
# a,b = 1,1
# print(a)
# for i in range(19):
#     print(b)
#     a,b=b,a+b

# #### 寻找水仙花数
# for i in range(100,999):
#     a = i%10
#     b = i//10%10
#     c = i//100
#     if a**3+b**3+c**3==i:
#         print(f'{i}是一个水仙花数')

#### 数字反转
# x= int(input('请输入一个数： '))
# re=0
# while x>0:
#     re =re*10+x%10
#     x//=10
# print(f'{re}')
### 很巧妙的设计，利用自身的动态调整

# #### 白钱百鸡问题
# for i in range(0,21,1):
#     for j in range(0,34,1):
#         if(15*i+9*j+(100-i-j)<=300):
#             print(f'公鸡是{i},母鸡是{j},小鸡是{100-i-j}')

# #### CRAPS赌博游戏
# import random
# sum =1000
# x= random.randrange(1,7)+random.randrange(1,7)
# y=x
# flag=1
# print(f'尊敬的玩家，您一共有1000元的RMB')
# a = int(input('玩家请输入您要下的金额'))
# print(f'你第一句的点数是{x}')
# while sum>0:
#     if(flag ==1 and (x==7 or x==11)):
#         sum +=a
#     elif (flag ==1 and (x==2 or x==3 or x==12)):
#         sum-=a
#     elif (flag ==1):
#         flag+=1
#         continue
#     elif (flag!=1 and (x==7)):
#         sum-=a
#     elif (flag!=1 and (x==y)):
#         sum+=a
#     else:
#         flag += 1
#     y = x
#     x =  random.randrange(1,7)+random.randrange(1,7)
#     print(f'您的总资产是{sum},您这一局的点数是{x}')
#
# print(f'游戏结束，玩家已经输光了所有金额')

