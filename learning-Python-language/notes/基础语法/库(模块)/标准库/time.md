# time模块

```python
immport time
```

## 常用方法

```python
strptime(time_string, format) -> struct_time
```

> **目的**:  字符串解析为时间元组
>
> **注意点**： 两者的要对应

```python
strftime(format,struct_time)->string
```

![image-20250330155008023](D:\github\learning-logs\learning-Python-language\notes\基础语法\库(模块)\标准库\time.assets\image-20250330155008023.png)



```python
time.sleep(<n>)
```

> **目的**： 让程序停止执行<\n>秒