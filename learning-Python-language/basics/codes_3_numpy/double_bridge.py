import math
import numpy as np
pi=math.pi
r=float(input("请输入R(oum): "))
r_x=0.01
d=float(input("请输入d(mm): "))
l=float(input("请输入l(mm): "))
r_1=1*10**4
r_x=r*r_x/r_1
p=pi*d*d*r_x/4/l*(10**(-3))
print(p)

# 计算不确定度
e=0.05*10**(-2)
dd=np.array([2.710,2.743,2.715,2.709,2.7194])*10**(-3)
u2=(1.24*(sum(np.square((dd-np.mean(dd)))/4)**0.5+(0.4*10**(-3))**2))**0.5
ul=0.4*10**(-3)/l
up=p*(e**2+4*u2**2+ul**2)**0.5
print(up)