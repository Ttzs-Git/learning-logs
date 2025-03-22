def div(x):
    """分解x,并返回x的约数"""
    return [1]+[i for i in range(2,x) if x%i==0]

def perfect_num(x,y):
    """返回处于一定范围内的完美数"""
    return [i for i in range(x,y+1) if sum(div(i))==i]

def width(area,height):
    assert area%height==0
    return area//height

def c(width,height):
    return 2*(width+height)

def min(area):
    """给定面积,输出最小的周长"""
    heights=div(area)
    # 高是面积的因子的序列
    
    x=[c(width(area,height),height) for height in heights]
    return min(c)