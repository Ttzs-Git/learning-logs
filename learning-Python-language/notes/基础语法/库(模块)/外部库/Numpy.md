# Numpy

[TOC]

-------

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
np.array(<list>,[dtype=np.<type>]/type)
```

> `返回值的type`:numpy.ndarray
>
> `dtype`:指定元素的类型，例如: np.int32
>
> **目的**： 实现列表转化为numpy数组


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

### 增加数组维度

```python
np.newaxis
```

### 数组元素类型

```python
np.dtype.name
```





---------

## 特殊数组生成

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
> **第二个参数**： 指定1的数据类型

### 创建全空数组

```python
np.empty((<a>,<b>..))
```

> **目的**： 创建全空数组，每个值都是接近于0的数

### 创建连续数组

```python
np.arrange(start,end,step)
```

### 创建连续型数据

```python
np.linspace(start,end,<n>)
```

> **目的**： 开始端start ，结束端end，创建20个数据，均匀分布

### 数学函数

```python
np.sin(<np>)  # sinx函数
np.log(<np>) # logx函数
np.sqrt(<np>) # sqrt函数
np.abs(<np>) #|x|函数
np.square(<np>) # x**2函数
np.add(<np1>,<np2>) # 加法函数
np.multiply(<np1>,<np2>) #乘法函数
np.maximum(<np1>,<np2>) #返回两个数组元素的最大值
np.greater(<np1>,<np2>) # 返回两个数组<np1> > <np2>的布尔值
```



### 取整函数

```python
np.floor(<np>) # 向左取整
np.ceil(<np>)  # 向右取整
```



### 随机数数组

```python
np.random.seed(0) # 生成随机数种子
```

```python
np.random.rand(<a>,<b>)
```

> **目的**： 随机生成一个指定大小的数组，数值位于0-1

 ```python
 np.random.random([size=None])
 ```

> **目的**： 生成指定维数的随机数数组，且元素位于0-1之间

```python
np.random.randn([<row>,<col>])
```

> `目的`:生成符合均值为 0，方差为 1 的正态分布的浮点数或者浮点数数组

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

### 数组增加

```python
np.title(<np1>,(<a>,<b>,..))
```

> **目的**： 讲数组赋值成()的形状




-------------------

## 元素运算

### 算术运算

```python
<x>+<y>
<x>-<y>
<x>*<y>
<x>/<y>
<x>**<n>
```

> 1. 对于**元素个数相同**的数组，才能进行算术运算
> 2. 乘除是对应元素的运算
> 3. 对于数组和标量进行计算，需要**广播机制**(张量自动扩充的机制)

### 逻辑运算

```python
<np> > <num>
<np1> == <np2>
```

> `目的`：进行逻辑运算，产生布尔型的数组

### 求和运算

```python
np.sum(<np>,[axis=<n>])
```

> `目的`:可以沿着指定的轴(维度)进行求和
>
> `axis`:0-按列求和 1-按行求和

### 最值运算
```python
np.max(<np>,[axis=<n>])

np.min(<np>,[axis=<n>])  
```

> `目的`:用于查找数组或数组指定轴向上最大/小值的函数

### 返回索引运算
```python
np.argmax(<np>,[axis=<n>])
np.argmin(<np>,[axis=<n>])
```

> `目的`:返回**最值索引**返回数组<np>中的最大值所在的索引位置或者某个维度的最大/小值

```python
np.nonzero(<np1>)
```

> **目的**： 返回所有非零数组的下标的索引元组


### 数字特征值

```python
## 计算均值
np.mean(<np>)
np.average(<np>)
<np>.mean()

## 计算中位数
np.median(<np>)

## 求最小值
<np>.min()

## 求最大值
<np>.max()

## 累计和
<np>.cumsum()

## 累计积
<np>.sumprod()
```



### 矩阵转置

```python
# 默认转置
np.transpose(<np1>)
<np1>.T

# 多维数组转置
np.transpose(<a>,<b>,<c>..) # 按照多维数组的轴的索引进行变换
np.swapaxes(<a>,<b>) # 对轴进行两两置换
```

### 排序运算

```python
np.sort(<p>)
<p>.sort(<n>) # 沿n方向排序
```

### clip运算

```python
np.clip(<np1>,arr_min,arr_max)
```

> **目的**： 将数组元素的范围控制在min~max

### 累加运算

```python
np.cumsum(<np1>)
```

> **目的**： 进行累加运算(累计求和)，结果是一位数组

### 累差运算

```python
np.diff(<np1>)
```

> **目的**： 进行累差运算(后一个减前一个)，结果维数会改变

### 查找

```python
np.where(<condition>,<np>,<n>)
```

> **目的**： 不满足条件的元素使用<n>进行替代

### 求取精度

```python
np.around(<np1>,decimals=<n>)
```

> **参数** ：
>
> decimals 指定参数的小数部分的位数；正数的时候，>=5就会进位;负数的时候，>5才会进位且看成进10**abs(decimals)
>
> 负数进位取绝对值大的




----------------

## 矩阵运算

### 点积运算

```python
<np1>.dot(<np2>)

np.dot(<np1>,<np2>)

np.matmul(<np1>,<np2>)

<npA>@<npB>
```

> `点积`：返回两个张量的点积

### 数组合并

```python
np.vstack((<np1>,<np2>..))
```

> **目的**： 返回一个上下合并的数组，形成多维数组

```python
np.hstack((<a>,<b>...))
```

> **目的**： 实现左右合并，维数不改变

### 数组增维

```python
<np1>[<a>,<b>,..]
```

> **参数说明**：
>
> - 当出现np.newaxis时，该维度增加
> - 当出现:时，该维度是原来的内容

### 矩阵合并

```python
np.concatenate((<np1>,<np2>..),axis=<n>)
```

> **目的**： 在指定维度下，进行合并
>
> 纵向合并: 保持列不变，行增加
>
> 横向合并: 保持行不变，列增加

### 分割数组

```python
np.split(<np1>,<n>,[axis=<n>])
```

> **目的**： 按某一个方向进行**等量分割**出<n>个数组

```python
np.array_split(<np1>,<n>,[axis=<n>])
```

> **目的**：进行不等量分割

```python
np.vsplit(<np1>,<n>)
```

> **目的**： 等价于np.split(<np1>,<n>,axis=0)

```python
np.hsplit(<np1>,<n>)
```

> **目的**： 等价于np.split(<np1>,<n>,axis=1)

### 赋值运算

```python
<np1>=<np2>
```

> **注意**： 该赋值方式会带有关联性——即其他变量的修改与该变量同步，浅赋值

```python
<np1>.copy()
```

> **注意**： 深复制，无关联

---------

## 索引与切片

### 索引与访问

```python
<np_arr>[<a>][<b>]
<np_arr>[a,b,..]

for item in X:
    <statement>

<np_one_arr>[<array>]
```

> `标记法`：可以获取满足一定条件的元素

```python
<np>[[<a>,<b>],[<c>,<d>]]
```

> **目的**：输出索引(a,c)和(c,d)等元素
>
> 如果某项不写就是**:**
>
> 方框中也可以是**布尔型数组**

### 切片运算

```python
<np1>[<a>,<b>,..]
```

> **参数**： 
>
> 当参数为**数字**时，为该数字
>
> 当参数为**[a:b :c]**,为从a到b-1且步长为c的数字

---------

## 常用函数



### 更改形状

```python
<np>.reshape((<m>,<n>))
```

> `目的`:更改形状为<>

### 转化为一维张量

```python
<var_arr>=<var_arr>.flatten()
```

> **返回值**： 返回一个一维可迭代对象，object属性

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

### 数据统计函数

```python
np.bincount(<np>,weights=<np2>,minlength=<n>)
```

> **目的**： 参考weights(默认值是全1数组)中值，对<np>进行数据统计，最小长度为minlength

### 检查函数

```python
np.any(<cond>) #检查是否有满足条件的元素，返回布尔值
np.all(<cond>) #检查是否全部满足
```

### 集合函数

```python
np.unique(<np>) # 唯一化且从小到大排序
np.in1d(<np1>,<np2>) # 元素不唯一返回True
```



-------

## 广播机制

1. **如果两个数组的维度数不同，较小的数组会在左侧添加 `1` 维度，直到它们的维度数相同。**
2. **如果两个数组在某个维度上的大小不相同，但其中一个维度的大小为 `1`，那么 NumPy 会在该维度上扩展大小为 `1` 的数组。**
3. **如果两个数组在某个维度上的大小不相同，且两个数组的该维度都不为 `1`，则会报错。**

> 我的理解，广播只能在单方向上发生





--------

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
