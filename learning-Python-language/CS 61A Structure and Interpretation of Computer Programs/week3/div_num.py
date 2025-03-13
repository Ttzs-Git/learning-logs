def div_num(n,m):
    """
    N:带分割的数
    M:最大部分
    问题分解:div_num(n,m-1)+div_num(n-m,m)
    基准线:
    1.n=0 零只有一种分割方式
    2.负数无法分割
    3.正数使用0或更小的分割为0
    """
    if n<0:
        return 0
    elif n==0:
        return 1
    elif m<=0 and n>0:
        return 0
    else:
        return div_num(n,m-1)+div_num(n-m,m)