import numpy as np
from mnist import load_mnist
from PIL import Image
import numpy as np
import matplotlib.pyplot as plt
def img_show(img):
     pil_img=Image.fromarray(np.uint8(img))
     pil_img.show()

def get_data():
    (x_train,t_train),(x_test,t_test)= load_mnist(normalize=True,one_hot_label=True)
    return x_train,t_train

def numerical_gradient(f,x):
    """计算数值微分"""
    h=1e-4
    grad=np.zeros_like(x)
    it=np.nditer(x,flags=['multi_index'],op_flags=['readwrite'])
    while not it.finished:
       index=it.multi_index
       tep=x[index]
       x[index]=float(tep)+h
       fh1=f(x)
       x[index]=tep-h
       fh2=f(x)
       grad[index]=(fh1-fh2)/(2*h)
       x[index]=tep
       it.iternext()
    return grad

def forward(x,y,b,f):
    return f(np.dot(x,y)+b)

def softmax(x):
    x=x-np.max(x)
    return np.exp(x)/np.sum(np.exp(x))

def sigmoid(x):
    return 1/(1+np.exp(-x))

def cross_entropy_error(x,t):
    if x.ndim==1:
        x=x.reshape(1,x.shape)
        t=t.reshape(1,t.shape)
    batch=x.shape[0]
    h=1e-10
    return -np.sum(t*np.log(x+h))/batch

class TwoLayerNet:
    """两层网络的类"""
    def __init__(self,input_size,hidden_size,output_size,weight_init_rate=0.01):  
        self.params={}
        self.params['w1']=weight_init_rate*np.random.randn(input_size,hidden_size)
        self.params['b1']=np.zeros(hidden_size)
        self.params['w2']=weight_init_rate*np.random.randn(hidden_size,output_size)
        self.params['b2']=np.zeros(output_size)

    def predict(self,x):
        """进行识别,推理"""
        x1=forward(x,self.params['w1'],self.params['b1'],sigmoid)
        x2=forward(x1,self.params['w2'],self.params['b2'],softmax)
        return x2
    
    def loss(self,x,t):
        """计算损失函数"""
        y=self.predict(x)
        return cross_entropy_error(y,t)
    
    def accuracy(self,x,t):
        """计算正确率"""
        y=self.predict(x)
        y=np.argmax(y,axis=1)
        t=np.argmax(t,axis=1)
        acc=np.sum(y==t)/float(x.shape[0])
        return acc
    
    def numerical_gradient(self,x,t):
        y=self.predict(x)
        loss_w=lambda w:self.loss(x,t)
        grads={}
        grads['w1']=numerical_gradient(loss_w,self.params['w1'])
        grads['w2']=numerical_gradient(loss_w,self.params['w2'])
        grads['b1']=numerical_gradient(loss_w,self.params['b1'])
        grads['b2']=numerical_gradient(loss_w,self.params['b2'])
        return grads
    
x,t=get_data() #获取测试及资料
closs=[]

## 设置超参数
total=100
batch_size=100
train_size=x.shape[0]
learning_rate=0.1


net=TwoLayerNet(784,50,10)

for i in range(total):
    batch_mask=np.random.choice(train_size,batch_size)
    x_batch=x[batch_mask]
    t_batch=t[batch_mask]
    # 计算梯度,返回字典
    grad=net.numerical_gradient(x_batch,t_batch)
    # 更新参数
    for j in ['w1','b1','w2','b2']:
        net.params[j]-=learning_rate*grad[j]
    ## 记录学习历程
    train_loss=net.loss(x_batch,t_batch)
    closs.append(train_loss)
    print(train_loss)

x=np.arange(total)
plt.plot(x,closs)
plt.show()