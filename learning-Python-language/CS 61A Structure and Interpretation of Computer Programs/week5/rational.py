from math import gcd
"""定义抽象的数据类型——有理数"""
def rational(x,y=1):
    """构造器,通过列表抽象成一个整体"""
    if y==0:
        return 'error'
    n=gcd(x,y)
    return [x//n,y//n]


def numer(x):
    """选择器:选择分子"""
    return x[0]

def denom(x):
    """选择器:选择分母"""
    return x[1]

"""通过构造器和选择器:实现数据抽象和闭合—从此刻起，不在拥有任何的列表，只有有理数
通过选择器选择有理数的部分内容"""

def show(x):
    """展示整体"""
    print(f'{numer(x)}/{denom(x)}')


def add(x,y):
    nx,dx=numer(x),denom(x)
    ny,dy=numer(y),denom(y)
    return rational(dx*ny+dy*nx,dx*dy)

def sub(x,y):
    nx,dx=numer(x),denom(x)
    ny,dy=numer(y),denom(y)
    return rational(dx*ny-dy*nx,dx*dy)

def mul(x,y):
    nx,dx=numer(x),denom(x)
    ny,dy=numer(y),denom(y)
    return rational(nx*ny,dx*dy)

def div(x,y):
    nx,dx=numer(x),denom(x)
    ny,dy=numer(y),denom(y)
    if y==0:
        return 'error!!!'
    else:
        return rational(nx*dy,dx*ny)
   
def equal(x,y):
    nx,dx=numer(x),denom(x)
    ny,dy=numer(y),denom(y)
    return nx*dy==dx*ny
