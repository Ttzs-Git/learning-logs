# 数据操作
import torch

# 生成一个张量(tensor):一个数值数组
x = torch.arange(12)
print(x)

# shape属性返回张量的形状-维度以及该维度下的长度
print(x.shape)

# 元素的总数-标量
print(x.numel())

# 改变张良的形状而不改变元素数量和元素值
# (行,列)
x = x.reshape(3,4)
print(x)

# 使用全0 全1 或者其他常量构造 或者随机数
print(torch.ones((2,3,4)))
print(torch.zeros((4,3,2)))

# 使用列表
x = torch.tensor(([1,2,3,4],[1,2,3,4]))
print(x)
print(x.shape)
print(x.numel())

## 元素的运算
x = torch.arange(1,11)
y = torch.tensor([i**0.5 for i in range(1,11)])
# print(x-y)
# print(x+y)
# print(x*y)
# print(x/y)
# print(x**y)
## 指数运算和开方运算
print(torch.exp(x))
print(torch.sqrt(y))

# # 将张量进行连接
x = torch.arange(12,dtype=torch.float32).reshape(3,4)
y = torch.tensor([[i for i in range(1,5)],[j for j in range(2,6)],[k for k in range(3,7)]])
# # 按行进行连接
z = torch.cat((x,y),dim=0)
# 按列进行连接
a = torch.cat((x,y),dim=1)
print(z)
print(a)

# 逻辑运算
print(x!=y)

# 求和
print(x.sum())

# 不同形状的张量的运算--元素的广播机制
# 从后向前广播
# 元素-扩充到一样
# 条件:维度兼容(维度相同,维度为1,维度不存在)
a = torch.arange(6).reshape(6)
b = torch.arange(4).reshape((4,1))
print(a)
print(b)
print(a+b)

#元素访问 -多元数组的访问(索引,切片--只有一元数组)
#元素的写入(索引)
x[1,2]=3
x[:2,0]=0
print(x)

# 一些操作会改变变量的id
# id类似指针,标识号
before = id(x)
x += y
# += 不改变id
print(before == id(x))

#原地操作-内容改写
z = torch.zeros_like(y)
print(id(z))
z[:]=x+y
print(id(z))

# NumPy张量-多元数组的运行框架
a = x.numpy()
b = torch.tensor(a)
print(type(a))
print(type(b))

# 大小为1 的张量可以转化为Python标量
a = torch.tensor([1.2])
print(a.item())
print(int(a))
print(float(a))