# Numpy
```python
import numpy as np
```

### 生成NumPy数组

```python
np.array(<list>,[dtype=np.<type>])
```

> `返回值的type`:numpy.ndarray
>
> `dtype`:指定元素的类型

```python
np.arrange(start,end,step)
```

```python
np.sin(x)
```

> `目的`:根据x得到sinx的值

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

## 多维数组的操作

### 获得形状数据

```python
<np>.shape
```

> `目的`：输出<np>的行列数据组成的元组

### 返回秩

```python
np.ndim(<np>)
```

```python
<np>.ndim
```

> `目的`：返回<np>的秩(多维数组的维度)

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
