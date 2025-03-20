# Pickyle

- **目的**: 用于序列化和反序列化Python对象结构的二进制协议

- **序列化**指的是将对象转换成一种可以被存储或传输的形式（比如文件或字节流）的过程。
- **反序列化**则是序列化的逆过程，即从存储形式中重建对象。

### 读取文件

```python
with open(<address>,'<method>') as <name>:
    <statement>
```

> `目的`:使用with语句用于包装执行一个代码块，且不需要显示地使用.close()关闭文件

### 加载对象

```python
pickle.load(<name>)
```

> `目的`:将<pickle_name>加载为原视对象格式