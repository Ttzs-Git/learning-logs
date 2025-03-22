"学习使用作为参数的函数:求数列的和"
def cube(n):
    """进行立方"""
    return pow(n,3)

def natural(n):
    """返回自然数"""
    return n


def total(n,term):
    """输入求和的项数和通项,返回答案
    >>> total(3,cube)
    36
    """
    total,k=0,1
    while k<=n:
        total,k=total+term(k),k+1
    return total

def natual_sum(n):
    return total(n,natural)

def cube_total(n):
    return total(n,cube)

# def natural_sum(n):
#     """输入项的数量,返回答案
#     >>> natural_sum(5)
#     15
#     """
#     total,k=0,1
#     while k<=n:
#         total,k=total+k,k+1
#     return total

# def cube_sum(n):
#     """输入项的数量,进行平方项的求和
#     >>> cube_sum(3)
#     36
#     """
#     total,k=0,1
#     while k<=n:
#         total,k=total+pow(k,3),k+1
#     return total