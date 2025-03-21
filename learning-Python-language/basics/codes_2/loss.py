import numpy as np 
def cross_entropy_error(y,t):
    theta=1e-7
    return -np.sum(t*(np.log(y+theta)))

def maen_squared_error(y,t):
    return 0.5*np.sum((y-t)**2)
