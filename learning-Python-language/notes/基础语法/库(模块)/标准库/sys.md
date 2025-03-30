## sys

`解释`:sys提供了与Python解释器及其环境相关的功能

```python
import sys
```

---------

```python
sys.path
```

> **目的**： 输出导入模块时的搜索路径的列表


```python
sys.path.append(<add>)
```

> `目的`:增加<add>为搜索路径

```python
sys.path.insert(<n>,<path>)
```

> **目的**： 将<\path>插入到搜索列表的位置<\n>

----
```python
sys.argv
```

> **目的**： 命令行参数列表

-----

```python
sys.stdout.write('<str>')
```

> **目的**: 向标准输出写入<\str>

```python
sys.stdout.flush()
```

> **目的**： 强制立即刷新输出缓冲区
