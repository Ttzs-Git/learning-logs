import numpy as np
import matplotlib.pyplot as plt 

# 制作变量
x=np.arange(1,10,0.01)
y1=np.sin(x)
y2=np.cos(x)

# 绘制图线
plt.plot(x,y1,label='sin')
plt.plot(x,y2,linestyle="--",label="cos")
plt.xlabel("x")
plt.ylabel("y")
plt.title("sin and cos")
plt.legend()
plt.show()