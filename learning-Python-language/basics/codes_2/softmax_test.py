import numpy as np

def softmax(x):
    x=x-np.max(x)
    return np.exp(x)/(np.sum(np.exp(x)))

x=np.array([0.3, 2.9, 4.0])
print(softmax(x))