def search(f):
    """
    寻找某个最小整数x,使得f(x)成立
    """
    x=0
    while not f(x):
        x+=1
    return x


def post(x):
    return max(0,x*x-100)

def inverse(g):
    """求解逆函数y=g-1(x),g(y)=x"""
    return lambda y:search(lambda x:g(x)==y)