import sys,os
sys.path.append(os.pardir)
from dataset.mnist import load_mnist
from PIL import Image
import numpy as np
import pickle
def img_show(img):
     pil_img=Image.fromarray(np.uint8(img))
     pil_img.show()

def get_data():
    (x_train,t_train),(x_test,t_test)= load_mnist(flatten=True,normalize=False)
    return x_test,t_test

def init_network():
     with open('sample_weight.pkl','rb') as f:
          network=pickle.load(f)
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

def softmax(z):
    return np.exp(z-np.max(z))/(np.sum(np.exp(z-np.max(z))))

def predict(network,x):
    x1=neuron(x,network['W1'],network['b1'],sigmoid)
    x2=neuron(x1,network['W2'],network['b2'],sigmoid)
    output=neuron(x2,network['W3'],network['b3'],softmax)
    return output

x,t=get_data()
network=init_network()
ac=0
batch_size=100
for i in range(0,len(x),batch_size):
    m=predict(network,x[i:i+batch_size])
    p=np.argmax(m,axis=1)
    ac+=np.sum(p==t[i:i+batch_size])
print(f'正确率是',ac/len(x))
     