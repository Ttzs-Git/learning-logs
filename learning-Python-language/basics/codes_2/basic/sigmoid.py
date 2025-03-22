import numpy as np 
import matplotlib.pyplot as plt



def step_function(x):
    return np.array(x>0 , dtype=np.int32)

def sigmoid(x):
    return 1/(1+np.exp(-x))

def ReLU(x):
    return np.maximum(0,x)

## 制作定义域和值域
x=np.arange(-5.0,5.0,0.1)
y1=ReLU(x)
y2=step_function(x)

# 绘图
# def pi(x,y):
#     # 展示画面
#     plt.plot(x,y)
#     plt.ylim(-0.1,1.1)
#     plt.show()

# pi(x,y)

plt.plot(x,y1,linestyle='--',label='sigmoid')
# plt.plot(x,y2)
plt.ylim(-1,5)
plt.show()
