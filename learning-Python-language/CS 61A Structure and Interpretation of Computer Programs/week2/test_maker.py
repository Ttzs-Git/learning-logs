"""
学习返回值的函数
"""
def add_(n):
    """
    返回加n的函数
    """
    def maker(k):
        return n+k
    return maker
