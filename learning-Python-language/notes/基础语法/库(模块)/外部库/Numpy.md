# Numpy
```python
import numpy as np
```

---------

## 简介

Numpy是一个用python实现的科学计算的扩展程序库，包括：
* 1、一个强大的N维数组对象Array；
* 2、比较成熟的（广播）函数库；
* 3、用于整合C/C++和Fortran代码的工具包；
* 4、实用的线性代数、傅里叶变换和随机数生成函数。numpy和稀疏矩阵运算包scipy配合使用更加方便。

NumPy（Numeric Python）提供了许多高级的数值编程工具，如：矩阵数据类型、矢量处理，以及精密的运算库。专为进行严格的数字处理而产生。多为很多大型金融公司使用，以及核心的科学计算组织如：Lawrence Livermore，NASA用其处理一些本来使用C++，Fortran或Matlab等所做的任务。

--------
## 基本属性
### 生成NumPy数组

```python
np.array(<list>,[dtype=np.<type>])
```

> `返回值的type`:numpy.ndarray
>
> `dtype`:指定元素的类型，例如: np.int32
>
> **目的**： 实现列表转化为numpy数组

```python
np.arrange(start,end,step)
```

```python
np.sin(x)
```

> `目的`:根据x得到sinx的值

### 返回维度(秩)

```python
np.ndim(<np>)
```

```python
<np>.ndim
```

> `目的`：返回<np>的秩(多维数组的维度).
>
> 第一个是ndim函数，第二个是<\np>的属性

### 返回行数和列数

```python
<np>.shape
```

> `目的`：输出<np>的行列数据组成的元组

### 返回元素个数

```python
<np>.size
```

> **目的**： 返回元素的个数

### 返回元素类型

```python
<np>.dtype
```

---------

## 数组快速生成

### 创建全零数组

```python
np.zeros((<a,b,..>))
```

> **目的**： 创建参数为<\a,b,c>的数组

### 创建全1数组

```python
np.ones(<a,b,..>[,dtype=<np.type>])
```

> **目的**： 创建参数为<\a,b,c...>的数组
>
> **第二个参数**： 指定参数的类型



## 运算

### 算术运算

```python
<x>+<y>
```

```python
<x>-<y>
```

```python
<x>*<y>
```

```python
<x>/<y>
```

> 1. 对于**元素个数相同**的数组，才能进行算术运算
> 2. 乘除是对应元素的运算
> 3. 对于数组和标量进行计算，需要**广播机制**(张量自动扩充的机制)

### 逻辑运算

```python
<np> > <num>
```

> `目的`：进行逻辑运算，产生布尔型的数组

## 操作

### 获得基本信息

```python
<var>.shape
```
> `目的`:返回张量的行列等

```python
<var>.dtype
```

> `目的`:返回张量的元素的类型

### 访问元素

```python
<mp_arr>[][]
```

```python
for item in X:
    <statement>
```

```python
<mp_one_arr>[<array>]
```

> `标记法`：可以获取满足一定条件的元素

### 转化为一维张量

```python
<var_arr>=<var_arr>.flatten()
```

### 调整元素类型

```python
<np>.astype(np.<type>)
```

> `目的`：将<\np>中的元素转化为<\type>类型
>
> `类型`：np.int32  np.int64

### 最值输出

```python
np.maximum(<n>,<n>)
```

> `目的`:逐元素比较两个相同形状的数组，并返回一个新数组

```python
np.max(<np>,[axis=<n>])
```

> `目的`:用于查找数组或数组指定轴向上最大值的函数

### 求和

```python
np.sum(<np>,[axis=<n>])
```

> `目的`:可以沿着指定的轴(维度)进行求和
>
> `axis`:0-按列求和 1-按行求和

### 更改形状

```python
<np>.reshape(<m>,<n>)
```

> `目的`:更改形状为<>

### 返回数组最大值的索引

```python
np.argmax(<np>,[axis=<n>])
```

> `目的`:返回数组<np>中的最大值所在的索引位置或者某个维度的最大值

### 数学函数

```python
np.log()
```

### 随机抽取

```python
np.random.choice(<range>,<n>)
```

> `目的`:从0~range中随机选择n个数字组成数组

### [x,y]数组

```python
np.arrage(<n>,<t>)
```

> `目的`:生成一个数组，实现从<n>---><t>的映射的复合数组

### 生成0数组

```python
np.zeros_like(x)
```

> `目的`:生成一个跟x形状相同的数组

### 生成标准正态分布随机数

```python
np.random.randn([<row>,<col>])
```

> `目的`:生成符合均值为 0，方差为 1 的正态分布的浮点数或者浮点数数组

## 多维数组的操作


### 计算点积

```python
np.dot(<np>,<np>)
```
```python
np.matmul(<np>,<np>)
```
```python
<npA>@<npB>
```

> `点积`：返回两个张量的点积

## 迭代器

```pytho
np.nditer(<np>,op_flags=['<str>'],flags=['<str>'],order)
```

> `op_flags`:操作标志，控制如何访问数组元素。常见的值有 `'readwrite'` 和 `'readonly'`
>
> `flags`:迭代器标志，控制迭代行为。常用的包括：
> 1. `'c_index'`：提供C顺序索引。
> 2. `'f_index'`：提供Fortran顺序索引。
> 3. `'multi_index'`：提供多维索引。
> 4.  `'refs_ok'`：允许对数组元素的引用进行操作
>
> `order`:指定迭代顺序，可以是 `'C'`（按行）或 `'F'`（按列）

### 读写模式

```python
with mp.nditer(<np>,op_flags=['readwrite']) as it:
    <statement>
```

### 多维索引

```python
it=np.nditer(<np>,flags=['multi_index'])
```

### 迭代多个数组

```python
for x,y in np.nditer([a,b]):
    <statement>
