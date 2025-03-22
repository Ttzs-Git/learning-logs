import numpy as np

def init_network():
    network={}
    ## 第一层的数据
    network['w1']=np.array([[0.1,0.3,0.5],[0.2,0.4,0.6]])
    network['b1']=np.array([0.1,0.2,0.3])
   
    ## 第二层的数据
    network['w2']=np.array([[0.1,0.4],[0.2,0.5],[0.3,0.6]])
    network['b2']=np.array([0.1,0.2])
    ## 第三层的数据
    network['w3']=np.array([[0.1,0.3],[0.2,0.4]])
    network['b3']=np.array([0.1,0.2])
    return network

def neuron(z,w,b,f):
    """
    目的:实现神经元的输入和输出
    X:输入的数据
    W:参数
    B:偏置
    F:激活函数
    """
    z=np.dot(z,w)+b
    return f(z)

def sigmoid(z):
    return 1/(1+np.exp(-z))

def identity(z):
    return z


def forword(network,x):
    x1=neuron(x,network['w1'],network['b1'],sigmoid)
    x2=neuron(x1,network['w2'],network['b2'],sigmoid)
    output=neuron(x2,network['w3'],network['b3'],identity)
    return output

## ----------正式部分--------
data=np.array([1.0,0.5])
network=init_network()
output=forword(network,data)
print(output)
