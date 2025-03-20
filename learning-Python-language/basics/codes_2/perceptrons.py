import numpy as np
def AND(x1,x2):
    """设置与门"""
    w=np.array([1,1])
    x=np.array([x1,x2])
    theta=-1.1
    total=np.dot(w,x)+theta
    
    if total>=0:
        return 1
    else:
        return 0
    
def NAND(x1,x2):
     """设置与非门"""
     w=np.array([-1,-1])
     x=np.array([x1,x2])
     theta=1.1
     total=np.dot(w,x)+theta
     
     if total>=0:
         return 1
     else:
         return 0

def OR(x1,x2):
     """设置或门"""
     w=np.array([1,1])
     x=np.array([x1,x2])
     theta=-1
     total=np.dot(w,x)+theta
     
     if total>=0:
         return 1
     else:
         return 0
     
def XOR(x1,x2):
    return AND(OR(x1,x2),NAND(x1,x2))