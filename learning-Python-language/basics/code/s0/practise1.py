## 格式化输出练习
## 用法讲解
### 1. "%格式化方法  "%()
        ### 跟C语言的格式化输出类似，但是使用%()进行呼应，略有不同
### 2. f'{变量名:.格式化方法}'
####  例题1:华氏温度转出成摄氏温度
# a = float(input("华氏温度： "))
# b =(a-32)/1.8
# print(f'{a:.1f}华氏温度是{b:.1f}摄氏温度\n')

# a = float(input('华氏温度是： '))
# b = (a-32)/1.8
# print('%.1f华氏温度是%.1f摄氏温度\n'%(a,b))

#### 例题2 ：计算圆的周长和面积
# import math
# r = float(input("圆的半径： "))
# c=2* math.pi *r
# s=math.pi*r*r
# print(f'圆的面积是{s:.1f},圆的周长是{c:.1f}')

### 3. (3.8的新特性)连带变量名式格式化输出
# print(f'{s=:.1f},{c=:.1f}')
##### 这种输出只能针对说：变量名和变量一起输出

#### 例题3：判断闰年
# year = int(input('year= '))
# # if (year % 4 ==0 and year % 100 != 0) or year % 400 == 0:
# is_prime=year%4==0 and year%100!=0 or year%400==0
#     # print(f'{year:d} is a leap year')
# print(f'{is_prime=}')
# print(f'{year=}')
# # else:
# #      print(f'{year:d} is not a leap year')


