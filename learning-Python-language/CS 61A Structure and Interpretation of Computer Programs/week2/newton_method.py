"""使用牛顿法计算函数的零点"""
import improve
def newton_imporve(f,df):
    def newton_upgrate(guess):
        return guess-f(guess)/df(guess)
    def newton_equal(guess):
        return improve.eq(f(guess),0)
    return improve.improve(newton_upgrate,newton_equal)



def newton_method(a,n):
    """使用牛顿法计算算术平方根"""
    def f(x):
        """函数"""
        return x**n-a

    def df(x):
        """求导数"""
        return n*x**(n-1)
    return newton_imporve(f,df)
"""测试"""
def newton_method_test():
    k=newton_method(16,4)
    assert k==2,"精度错误"