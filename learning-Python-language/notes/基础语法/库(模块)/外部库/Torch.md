# Torch

-------------

[TOC]

---------

## 总述

![image-20250329201653747](D:\github\learning-logs\learning-Python-language\notes\基础语法\库(模块)\外部库\Torch.assets\image-20250329201653747.png)

--------------

```python
import torch
```

-------------

## 入门

### 创建张量

```py
torch.arange(<n>[,dtype=torch.<dtype>]) # 生成0~n-1的张量
torch.randon(<>) # 生成<>的张量且元素都来自N(0,1)的标准正态分布
torch.tensor([<list>]) # 将列表转换为张量

torch.zeros(<>) #生成<>的张量且元素值都是0
torch.ones(<>) #生成<>的张量且元素值都是1

torch.zeros_like(<tensor-a>) # 生成跟张量a一样形状的张量且元素值都是0
torch.ones_like(<tensor-b>) # 生成跟张量a一样形状的张量且元素值都是1
```

### 对象转换

```python
<tensor>.numpy() # 将张量转换为numpy
torch.tensor(<np-a>) # 将numpy的a转换为张量

# 前提条件: 只有一个元素
<tensor>.item() 
int(<tensor>)
float(<tensor>)
```

### 张量的成员

```python
<tensor>.shape  ## 返回张量的形状
<tensor>.size() ## 检查大小
<tensor>.numel() ## 获得张量的元素个数
<tensor>.sum() #计算张量的和,返回一个张量
```

### 改变形状

```python
<tensor>.reshape(<>) # 将张量改变为<>的张量，形状改变，大小不变；当<>中某个参数为-1且只有一个"-1"时，自动计算
```

### 元素运算

#### 算术元素运算符

```python
# a-->tensor b--->tensor
# 前提: 形状一样或者可以进行广播
a+b
a-b
a*b
a/b
a**b
```

### 逻辑元素运算符

```python
# a-tensor b-tensor
a==b
a>b
a<b
```


#### 数学函数

```python
torch.exp(<tensor>)
```

### 连结

```python
torch.cat((<tensor-a>,<tensor-b>),dim=<n>) # 将张量a和张量b沿着某一个方向进行拼接 0-行，1-列
```

### 索引和切片

```python
# 第一个元素的索引是0，最后一个是-1
a[<>]=<n>,a[:]=<n> 
# 如果索引的内容(比如某一列)和赋值的内容(数字)不匹配，可能出现广播
```



----

## 广播机制

### 方式

1. 通过适当复制元素来扩展一个或两个数组，以便在转换之后，两个张量具有相同的形状；
2. 对生成的数组执行按元素操作

----

## 节省内存

```python
# 原地操作
Y[:]=<expression>
Y<operator>=<expression>
```

