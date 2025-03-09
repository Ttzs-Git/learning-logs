"迭代精确phi"
import math,operator
def imporve(upgrate,equal,guess=1):
    """迭代更新的通用母版
    检验是否足够接近
    否,更新
    是,返回
    """
    while not equal(guess):
        guess = upgrate(guess)
    return guess

def golden_upgrate(guess):
    """根据特性x=1/x+1"""
    return 1/guess+1

def eq(guess,true_num,tol=1e-10):
    return operator.abs(guess-true_num)<1e-10

def golden_equal(guess):
    return eq(guess**2,guess+1)

"""测试函数"""

phi = 1/2+math.sqrt(5)/2
def improve_test():
    num=imporve(golden_upgrate,golden_equal)
    assert num==phi,"精度不够"
improve_test()