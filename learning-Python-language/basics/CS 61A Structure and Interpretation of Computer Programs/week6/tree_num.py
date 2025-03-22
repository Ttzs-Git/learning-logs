"""制作函数:将数字分解"""
from tree import *
def div_num(n,m):
    if n==0:
        return tree(True)
    elif n<0 or m==0:
        return tree(False)
    else:
        return tree(n,[div_num(n,m-1),div_num(n-m,m)])
    
def show_div(tree,par=[]):
    if 