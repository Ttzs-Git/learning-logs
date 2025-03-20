# Matplotlib

> `前提`：通过numpy制作出x，y等张量

## 绘制曲线

```python
import numpy as np
import matplotlib.pyplot as plt
```

```python
plt.plot(x,y,[linestyle=" ",label=""])
```

```python
plt.xlabel(" <str>")
plt.ylabel("<str>")
```

> `目的`：增加x轴,y轴的标签

```python
ply.xlim(<start>,<end>)
```

```python
plt.ylim(<start>,<end>)
```

> `目的`：指定x轴或y轴的范围

```python
plot.title("<str>")
```

> `目的`：增加标题

```python
plt.legend()
```

> `目的`：添加图例

```python
plt.show()
```

> `目的`：显示图像或曲线

## 显示图像

```python
from matplotlib.image import imread
```

```py
<img>=imread('<address>')
```

> `目的`：从路径中读取图像

```pytho
plt.imshow(<img>)
```

