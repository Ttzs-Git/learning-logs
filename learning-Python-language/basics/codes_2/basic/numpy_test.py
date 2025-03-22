import numpy as np
x=np.array([[1.0,2.0],[3.0,4.0],[5.0,1.0]])
print(x)
x=x.flatten()
print(x[x>2])