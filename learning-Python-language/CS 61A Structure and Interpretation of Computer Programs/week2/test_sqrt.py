"定义迭代函数"
import improve
"""
imporve(upgate,close,guess=1)
eq(guess,ture_num,tol=1e-15)
"""

"""迭代求解算术平方根"""

 
"""
其实最大的问题是a难以被传入
我们选择嵌套定义
让a在外面,进行分装
"""
def sqrt(a):
    """求解a的算术平方根"""
    def sqrt_upgrate(x):
        """A是要求解的被开方数,X是猜测值"""
        return (x+a/x)/2

    def sqrt_close(x):
        return improve.eq(x**2,a)
    return improve.improve(sqrt_upgrate,sqrt_close)

