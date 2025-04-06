# OS

`解释`:os库提供了一种使用操作系统相关功能的方法

```python
os.pardir
```

> **目的**： 代表父目录的常量字符串，通常是“..”

```python
os.system(<command>)
```

> **目的**： 执行命令，返回退出码

------------

```python
os.popen(<command>，<mode>,<buffering>)
```

> **目的**： 执行命令并返回一个文件对象，用于读取输出或写入输入
>
> **参数**: 
>
> - `command`：要执行的系统命令（字符串类型，如 `"ls -l"`）。
> - `mode`：操作模式：
>   - `'r'`（默认）：读取命令的输出。
>   - `'w'`：向命令的输入流写入数据。
> - `buffering`：缓冲区策略（通常无需修改）

```python
os.popen(<commend>).read()
```

> **目的**： 读取数据

```python
os.popen(..).write()
```

> 不推荐使用！！！！

-----------

```python
os.mkdir("<str>")
```

> **目的**： 创建一个名字为<\str>的文件夹

```python
os.removedirs("<str>")
```

> **目的**: 删除一个名字为<\str>的文件夹

