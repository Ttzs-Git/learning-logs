"""实现reduce函数"""

def reduce(fn,s,inital=0):
    """
    聚合函数
    FN:聚合的方法
    S:可迭代对象
    INITAL:初始值
    """
    reduced=inital
    for i in s:
        reduced=fn(reduced,i)
    return reduced

list=['hellp' for _ in range(3) ]