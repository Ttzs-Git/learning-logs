import numpy as np

def softmax(x):
    """计算softmax函数"""
    m=np.max(x)
    return np.exp(x-m)/(np.sum(np.exp(x-m)))

def cross_entropy_error(x,t):
    """计算交叉熵误差"""
    if x.ndim==1:
        x=x.reshape(1,x.size)
        t=t.reshape(1,t.size)
    th=1e-10
    batch=x.shape[0]
    return -np.sum(np.log(x[np.arange(batch),t]+th))/batch

def numerical_gradient(x,f):
    """使用数值法计算梯度"""
    grad=np.zeros_like(x)
    h=1e-4
    for i in range(x.size):
        tep=x[i]
        x[i]+=h
        fh1=f(x)
        x[i]-=2*h
        fh2=f(x)
        grad[i]=(fh1-fh2)/(2*h)
        x[i]=tep
    return grad

class simpleNet:
    def __init__(self):
        self.W=np.random.randn(2,3)

    def predict(self,x):
        return np.dot(x,self.W)
    
    def loss(self,x,t):
        z=self.predict(x)
        y=softmax(z)
        loss=cross_entropy_error(y,t)
        return loss