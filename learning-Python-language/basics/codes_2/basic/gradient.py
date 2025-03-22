import numpy as np

# def numerical_gradient(f,x):
#     """
#     使用数值方法计算函数的梯度
#     """
#     h=1e-4
#     gradient=np.zeros_like(x)
#     for i in range(x.size):
#         a=x[i]
#         f1=f(a+h)
#         f2=f(a-h)
#         gradient[i]=(f1-f2)/(2*h)
#     return gradient

def numerical_gradient(f, x):    
    h = 1e-4 # 0.0001    
    grad = np.zeros_like(x) # 生成和x形状相同的数组    
    for idx in range(x.size):        
        tmp_val = x[idx]        
        # f(x+h)的计算        
        x[idx] = tmp_val + h        
        fxh1 = f(x)        
        # 将x传入意味着可以
        # f(x-h)的计算        
        x[idx] = tmp_val - h        
        fxh2 = f(x)        
        grad[idx] = (fxh1 - fxh2) / (2*h)        
        x[idx] = tmp_val 
    return grad

def gradient_descent(f,init_x,lr=0.01,step_num=100):
    """
    梯度下降法
    """
    x=init_x
    for i in range(step_num):
        grad=numerical_gradient(f,x)
        x-=grad*lr

    return x
