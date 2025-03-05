# 常用数据结构
## 列表
#### 蒙特卡洛模拟——色子的六面的概率
# import random
# from unittest import case
#
# a1,a2,a3,a4,a5,a6=0,0,0,0,0,0
# N=6000
# for i in range(N+1):
#     x = random.randrange(1, 7)
#     # if(x==1):
#     #     a1+=1
#     # elif(x==2):
#     #     a2+=1
#     # elif(x==3):
#     #     a3+=1
#     # elif(x==4):
#     #     a4+=1
#     # elif(x==5):
#     #     a5+=1
#     # else:
#     #     a6+=1
#     match x:
#         case 1:a1+=1
#         case 2:a2+=1
#         case 3:a3+=1
#         case 4:a4+=1
#         case 5:a5+=1
#         case 6:a6+=1
# print(f'1号面出现的概率{a1/N:.4f}')
# print(f'2号面出现的概率{a2/N:.4f}')
# print(f'3号面出现的概率{a3/N:.4f}')
# print(f'4号面出现的概率{a4/N:.4f}')
# print(f'5号面出现的概率{a5/N:.4f}')
# print(f'6号面出现的概率{a6/N:.4f}')

# ## 列表
# item1=['zrx','zrx','python']
# print(item1)
# print(type(item1))## 列表类型
# ## python 还是太全面了，C语言中没有一个LOOP怎么可能打印出来

# ## list 函数——列表对象的构造器
# items4=list(range(10))
# items5=list('hello')
# print(items4)
# print(items5)
# print(items4+items5)## 加法
# ### python 还是太全面了，列表不仅能随便创建，而且列表还能容纳不同类型的元素以及列表之间的运算
# print(items4*3)## 乘法
# print(60 in items4)##在不在
# print(8 not in items5)
# print(list[items4[0],items5[-1]])## 索引运算
# print(items4[0:10:2]) ##切片运算——一次性访问列表中的多个元素——有点类似于子列表:注意用:::
# print(items4[-3:-7:-2])### 有点类似于一维的向量 向左为正，向右为负
# ## 切片运算的省略制度：若start=0 end=N stride=1则可以省略，省略时: 不省略
# ## 切片于元素是相同的，可以对列表进行修改
# ## 列表的比较
#
# ### 遍历列表
# for i in range(len(items4)):
#     print(items4[i])
#
# for i in (items4):
#     print(i)

# #### 重构？
# import random
# x,n=0,6000
# items =[0,0,0,0,0,0]
# for i in range(n+1):
#     x=random.randrange(1,7,1)
#     items[x-1]+=1
# for i in range(len(items)):
#     items[i]/=n
#     print(f'{items[i]:.3f}')

# items=list(range(10))
# print(items)
# c=items.append(11)## 追加
# print(c)
# print(items)
# b=items.insert(-2,99)## 指定位置添加
# print(b)
# print(items)
# x=items.remove(0)## 删除指定
#
# print(items)
# d=items.pop()
# print(d)
# print(items)
# a=items.pop(3)
# print(a)
# print(items)
# items.clear()
# print(items)
# items=['Python']
# items=items*3
# # print(items)
# # items=items.remove('python')
# # print(items)
# # print(x)
# print(items.index('Python',1))
# print(items.count('Python'))
# items.append('java')
# items.sort()
# print(items)
# items.reverse()
# print(items)

### 多维数组的输入
# items=[]
# for i in range(3):
#     temp = []
#     for j in range(3):
#         a= int(input('输入： '))
#         temp.append(a)
#     items.append(temp)
# print(items)
# import random
# items=[[ random.randrange(1,100) for _ in range(3) ]for _ in range(5)]
# print(items)

## 双色球_6个不重复的红色球和1个蓝色球
# import random
# red_ball=list(range(1,34))
# blue_ball=list(range(1,17))
# selected_ball=[]
# for _ in range(6):
#     index=random.randrange(len(red_ball))
#     selected_ball.append(red_ball.pop(index))
# selected_ball.sort()
# # index = random.randrange(len(blue_ball))
# # selected_ball.append(blue_ball[index])
# # print(selected_ball)
# # 输出选中的红色球
# for ball in selected_ball:
#     print(f'\033[031m{ball:0>2d}\033[0m', end=' ')
# # 随机选择1个蓝色球
# blue_ball = random.randrange(1, 17)
# # 输出选中的蓝色球
# print(f'\033[034m{blue_ball:0>2d}\033[0m')

# import random
# n=int(input('生成几注号码: '))
# for i in range(n):
#     red_ball=list(range(1,34))
#     blue_ball=list(range(1,17))
#     selected_ball=random.sample(red_ball,6)
#     selected_ball_blue=random.choice(blue_ball)
#     selected_ball.sort()
#     for ball in selected_ball:
#         print(f'\033[033m{ball:0>2d}\033[0m',end=" ")
#     print(f'\033[034m{selected_ball_blue:0>2d}\033[0m')

# # 元组
# t1=(1,21,'asd')
# print(type(t1))
# print(t1[-1])
# print(t1[0:2:2])
# print(t1*3)
#
# print(type((1)))
# print(type((1,)))
# a=1,2,3,4,5
# print(a)
# i,j,*k=a
# print(i,j,k)

# a,b,*c=range(4)
# m,n,k=[1,10,100]
# x,*y="hello"
# print(a,b,m,n,x,y)
# print(c)
#
# import timeit
#
# print('%.3f'%timeit.timeit('[1,2,3,4,5,6,7,8,9]',number=10000000))
# print('%.3f'%timeit.timeit('(1,2,3,4,5,6,7,8,9)',number=10000000))

# s3=('hello '
#     'world'
#     'shaskd')
# print(s3)

# s0='\\hello world\\'
# print(s0)
# s5=r'\t\t\t\t'
# print(s5)
# s1 = '\it \is \time \to \read \now'
# s2 = r'\it \is \time \to \read \now'
# print(s1)
# # print(s2)
# s1 = '\141\142\143\x61\x62\x63'
# s2 = '\u9a86\u660a'
# print(s1)
# print(s2)

# s1='-hello world'
# # print(s1)
# # print(s1.capitalize())
# # print(s1.title())
# # print(s1.upper())
# # print(s1.lower())
# # print(s1.find('or',-4))
# # print(s1.startswith('he'))
# # print(s1.endswith('dd'))
# #
# # print(s1.isalpha())
# # print(s1.isalnum())
# # print(s1.zfill(13))
# # print(s1.lstrip('-'))
# # print(s1.replace('l','o',4))
# s=s1.split(' ')
# print('xxxx'.join(s))
# a={i for i in [1,2,3]}
# print(a)
# print(type(a))
# set1 = {'Python', 'C++', 'Java', 'Kotlin', 'Swift'}
# set2={'4.55','323','234','python'}
# print(set1|set2)
# print(set1.intersection(set2))
# print(set1.union(set2))
# print(set1.difference(set2))

# set1 = {1, 3, 5}
# set2 = {1, 2, 3, 4, 5}
# set3 = {5, 4, 3, 2, 1}
# ## 判断是不是超集
# print(set1>set2)
# print(set1.issuperset(set2))
# set1.add(100)
# print(set1)
# set1.discard(5)
# print(set1)
#
# fset1=frozenset([1,2,3,4,5])
#
# li={
#     '姓名':'Ttzs',
#     'age':'110',
#     'tel':'sa12d'
# }
# li=dict(name='Ttzs',age=110,tel='sad32')
# mm=zip('ABCDE', range(1, 10))
# nn={x:x**3 for x in range(1,6) }
# print(nn)
# person = {'name': '王大锤', 'age': 55, 'height': 168, 'weight': 60, 'addr': '成都市武侯区科华北路62号1栋101'}
# print(person['name'])
# print(person['addr'])
# person['age'] = 25
# person['height'] = 178
# person['tel'] = '13122334455'
# person['signature'] = '你的男朋友是一个盖世垃圾，他会踏着五彩祥云去迎娶你的闺蜜'
# print(person)

# person = {'name': '王大锤', 'age': 25, 'addr': '成都市武侯区科华北路62号1栋101', 'height': 178}
# a= person.popitem()
# print(a)

# ## 字典例题1：输入一段话 统计其中出现的字母次数
# s = input('请输入一段话:  ')
# counter={}
# for i in s:
#     if 'a'<=i<='z' and 'A'<=i<='Z':
#         counter[i]=counter[i]+1
# sorted_keys=sorted(counter,key=counter.get, reverse=True)
# for key in sorted_keys:
#     print(key,sorted_keys[key])

## 函数和模块
#
# m = int(input("m: "))
# n = int(input("n: "))
# m0=1
# n0=1
# m_n0=1
# for i in range(1,m+1):
#     m0*=i
# for i in range(1,n+1):
#     n0*=i
# for i in range(1,m-n+1):
#     m_n0*=i
# c=m0//n0//m_n0
# print(f'{c=}')

# def fun(n):
#     t=1
#     for i in range(1,n+1):
#         t*=i
#     return t
# m = int(input('请输入一个数： '))
# n = int(input('请输入一个数： '))
# z=fun(m)/fun(n)/fun(m-n)
# print(f'{z}')

# from math import factorial as f
# m = int(input())
# n = int(input())
# z=f(m)/f(n)/f(m-n)
# print(f'{z}')

#
# def f (*,a,b,c):
#     return a+b>c and a+c>b and b+c>a
#
# def f (a=0,b=0,c=0):
#     return a+b+c
# print(f())
# print(f(1+2+3,2,3))

# def f(*arg):
#     total=0
#     for i in arg:
#         if type(i) in (int,float):
#             total+=i
#     return total
#
#
# print(f(1,2,3))
# print(f('hello',1,2,3))
# def foo(*args, **kwargs):
#     print(args)
#     print(kwargs)
#
# foo(3, True, name='骆昊', age=43, gpa=4.95)
#
# def foo():
#     print('hello, world!')
#
#
# def foo():
#     print('goodbye, world!')
#
#
# foo()  # 大家猜猜调用foo函数会输出什么