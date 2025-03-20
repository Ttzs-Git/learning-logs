# 函数应用:
## 例题1：随机数生成函数,验证码要是由数字和英文大小写字母组成的，长度可以通过参数设置
# from random import randrange as rand
# def func(a):
#     ## 数字0-9 和数字'A'~'Z' 和数字 'a'~'z'的随机数，总共a个
#     ## 返回值是字符串
#     x = rand(a)
#     y = rand(a-x)
#     z = a-x-y
#     for _ in range(x):
#         y=rand()
import functools
from datetime import time


# import random
# import string
# a = string.ascii_letters+string.digits
# def func(*,n=4):
#     return ''.join(random.choices(a,k=n))
#
# print(func(n=6))

## 判断给定大于1的正整数是不时质数的函数
# def func(n:int)->bool:
#     if n==1:
#         return False
#     k=int(n**0.5)
#     for i in range(2,k+1):
#         if n%i==0:
#             return False
#     return    True
#
# print(func(int(input( '输入一个数:  '))))

# ## 判断两个正整数的最大公约数和最小公倍数的函数
# def gcd(a,b):
#     if a%b==0:
#         return b
#     else:
#         return gcd(b,a%b)
#
# def lcm(a,b):
#     return a*b/gcd(a,b)
#
# m=int(input("请输入两个数其一: "))
# n=int(input("请输入两个数其二: "))
# print(f'最大公约数是: %d,最小公倍数: %d'%(gcd(m,n),lcm(m,n)))

## 设计一个函数计算很多值
#
# ## 极差
# def ptp (data):
#     return max(data) - min(data)
#
# ## 算术平均
# def mean (data):
#     return sum(data) / len(data)
#
# ## 中位数
# def median (data):
#     temp = sorted(data)
#     ## 排序 ！！！
#     ## 1 2 3 4 5 6 7 8 9 10 — —9个数
#     if len(temp) % 2 == 0:
#         return mean(temp[len(temp) // 2 -1:len(temp) // 2 + 1])
#     else:
#         return temp[len(temp) // 2]
#
# ## 方差
# def var(data,ddof=1):
#     x_bai=mean(data) - median(data)
#     list = [(x-x_bai)**2 for x in data]
#     return sum(list)/(len(data)-ddof)
#
# ## 标准差
# def std(data,ddof=1):
#     return var(data,ddof) **0.5
#
# ## 变异系数
# def cv(data,ddof=1):
#     return std(data)/mean(data)
#
# ###
# def des(data):
#     print(f'均值是{mean(data)}')
#     print(f'中位数是{median(data)}')
#     print(f'极差是{ptp(data)}')
#     print(f'方差是{var(data)}')
#     print(f'标准差是{std(data,ddof=1)}')
#     print(f'变异系数是{cv(data)}')

#案例5:双色球函数：不放回随机抽样和有序
# from random import randrange as rand
# def fu():
#    list=[]
#    for i in range(6):
#        list.append(rand(1,34))
#    for i in range(len(list)):
#        print(f'\033[033m{list[i] :0>2d}\033[0m', end=' ')
#    print(f'\033[034m{rand(1,17):0>2d}\033[0m', end='')
# def func(n:int):
#     for i in range(n):
#         fu()
# import random
# from random import choice
#
#
# def fu():
#     rball=[i for i in range(1,34)]
#     bball=[i for i in range(1,17)]
#     sred=random.sample(rball,6)
#     list=sred.sort()
#     for i in range(len(sred)):
#         print(f'\033[031m{sred[i] :0>2d}\033[0m', end=' ')
#     print(f'\033[034m{choice(bball):0>2d}\033[0m', end='\n')
#
# def func(n:int):
#     for i in range(n):
#         fu()
#
#
#
# func(10)

# ## 非确定数量的命令参数和位置参数的函数的范式
# def func(init ,fu,*a,**b):
#     listm=list(a)+list(b.values())
#
# old_nums = [35, 12, 8, 99, 60, 52]
# ## 新的列表 筛选偶数的平方
# new_nums = list(map(lambda x:x**2,filter(lambda x:x%2==0,old_nums)))
# print(new_nums)
#
# ## lambda函数实现阶乘
# import functools
# import operator
# fac=lambda n: functools.reduce(operator.mul,range(1,n+1),1)
# # print(fac(3))
# ###判断是不是素数
# mac=lambda n: all(map(lambda i:n%i,range(2,int(n**0.5)+1)))
# import random
# import time
#
#
# def download(filename):
#     """下载文件"""
#     print(f'开始下载{filename}.')
#     time.sleep(random.random() * 6)
#     print(f'{filename}下载完成.')
#
#
# def upload(filename):
#     """上传文件"""
#     print(f'开始上传{filename}.')
#     time.sleep(random.random() * 8)
#     print(f'{filename}上传完成.')
# start = time.time()
# download('MySQL从删库到跑路.avi')
# end = time.time()
# print(f'花费时间: {end - start:.2f}秒')
# start = time.time()
# upload('Python从入门到住院.pdf')
# end = time.time()
# print(f'花费时间: {end - start:.2f}秒')
#
#
# def record_time(func):
#     def wrapper(*args, **kwargs):
#         result = func(*args, **kwargs)
#
#         return result
#
#     return wrapper


# import time
#
#
# def record_time(func):
#     def wrapper(*args, **kwargs):
#         # 在执行被装饰的函数之前记录开始时间
#         start = time.time()
#         # 执行被装饰的函数并获取返回值
#         result = func(*args, **kwargs)
#         # 在执行被装饰的函数之后记录结束时间
#         end = time.time()
#         # 计算和显示被装饰函数的执行时间
#         print(f'{func.__name__}执行时间: {end - start:.2f}秒')
#         # 返回被装饰函数的返回值
#         return result
#
#     return wrapper

### 写一个函数——求N！并且修饰一下记录一下时间
import time
def recorded_time(func):
    def wrapper(*args, **kwargs):
        start = time.time()
        result = func(*args, **kwargs)
        end = time.time()
        print(f'{func.__name__} took {end - start} seconds')
        return result
    return wrapper

# @recorded_time
# def r_f(n:int):
#     if n==1:
#         return 1
#     else:
#         return n*r_f(n-1)
#
#
# @recorded_time
# def i_f(n:int):
#     s=1
#     for i in range(1,n+1):
#        s*=i
#     return s
#
# print(r_f(10))
# print(i_f(10))
# import functools
# @recorded_time
# @functools.lru_cache()
# def fib(n:int):
#     if n<=2:
#         return 1
#     else:
#         return fib(n-1) + fib(n-2)
#
#
# print(fib(10))