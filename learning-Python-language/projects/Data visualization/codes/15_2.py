# 绘制折线图

##导入库
import matplotlib.pyplot as plt
## pyplot包含很多用于生成图像和绘图的函数

list1 = [i**2 for i in range(1,6)]

fig,ax = plt.subplots();
## subplots():在一个图形中绘制一个或多个绘图
## fig变量:由生成的一系列绘图构成的整个图形;ax变量:图像中的绘图(大多数使用这个变量来定义和定制)

ax.plot(list1)
## plot()方法: 绘图

plt.show()
## show()方法: 打开查看器并显示绘图
