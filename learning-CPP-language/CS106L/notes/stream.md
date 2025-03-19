# Stream

## g++命令

- **`g++`** ：GNU C++ 编译器，用于编译 C++ 程序。
- **`-std=c++17`** ：指定编译标准为 C++17。这表示编译器将按照 C++17 标准解析和编译代码，支持该标准下的所有特性。
- **`-Wall`** ：启用所有警告选项。编译器会输出尽可能多的潜在问题警告，帮助开发者发现代码中的隐患。
- **`-o xx`** ：指定输出的可执行文件名为 `xx`。如果不指定 `-o` 参数，默认输出文件名为 `a.out`。

## 本节课的关键两个关键问题

### 如何将数据传输到控制台？

Data object--->string representaiton --->console

### 如何从文件中读取数据？

file-->string repreentation --->data object

Summary: `external source`----`string representation`------`type`

> 主要需要解决的问题: `read/write` `type conversion`
>
> **Streams** provide a unified interface for interacting with external input.
>
> **Type conversion ** can be achieved automatically.

## sstream库(stringstream)

> stringstream is not connected to any external source.

### streampos

> 无符号整数类型  stream postion的缩写——流中的绝对位置

### streamoff

> 用于表示字节偏移量，有符号整数的位置——流中的相对位置

### ostringstream
```python
 ostringstream 变量名("内容",参数) 
```

> `目的`:创建输出字符串流类型的变量
>
> `modes`：
>
> 1. `ostringstream::ate`-->(start at end)从上一次的结束位置开始——流保持追加的状态
>
> 

```python
<var><<"content"
```
> `目的`:向流中输入内容
>
> `内容`:可以是字符串,浮点数等,会转化为另一种变量(非字符串)


```python
<var>.str()
```

> `目的`:将流的内容转化为字符串

```cpp
<var>.tellp()
```

> `目的`:输出流中当前写指针的位置

```cpp
<var>.seekp(pos)
```

> `目的`:将写指针移动到索引[pos]的位置——seekput

```cpp
<var>.seekkp(offset,direction)
```

> `目的`:根据偏移量offset和方向direction移动写指针
>
> `方向参数`:
>
> 1. `ios::beg`:从流的开头开始计算
> 2. `ios::cur`:从当前指针位置开始计算
> 3. `ios::end`:从流的末尾开始计算

### istringstream

```python
istringstream 变量名(字符串,参数)
```

> `目的`:转化为输出流
>
> `模式`:
>
> 1. `stringstream::bin`——(read as binary)作为二进制进行读取
> 2. 

```python
<i_var> >> <var>
```

> `目的`:从流中读取内容并储存在另一个合适的变量;不同的Token以`空白符`或者`无效的类型`分割

```cpp
<i_var>.tellg()
```

> `目的`:返回输入流中当前的读指针的位置

```cpp
<var>.seekg(pos)
```

> `目的`:将读指针移动到指定位置[pos]

```cpp
<var>.seekg(offset,direction)
```

> `目的`:根据偏移量 `offset` 和方向 `direction` 移动读指针

### 流的四个参数

- Good bit: ready for read/write.——Nothing unusual, on when other bits are off.
- Fail bit: previous operation failed, all future operations frozen. —— Type mismatch, file can’t be opened, seekg failed.
- EOF bit: previous operation reached the end of buffer content. ——Reached the end of the buffer. 
- Bad bit: external error, likely irrecoverable.——Could not move characters to buffer from external source. (e.g. the file you are reading from suddenly is deleted)

> 1. G and B are not opposites! (e.g. type mismatch) 
> 2. G and F are not opposites! (e.g. end of file)
> 3. F and E are normally the ones you will be checking

## 
