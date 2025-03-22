import numpy as np 
def cross_entropy_error(y,t):
    """
    保证实现既能有一个元素或者多个元素的loss的计算
    """
    if y.ndim==1:
        y=y.reshape(1,y.size)
        t=t.reshape(1,t.size)
        # 升维成多维数组
    theta=1e-7
    batch=y.shape[0]
    return -np.sum(np.log(y[np.arange(batch),t]+theta))/batch

def maen_squared_error(y,t):
    return 0.5*np.sum((y-t)**2)
