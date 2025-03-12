# Stream

`external source`----`string representation`------`type`

> 两个主要问题: `read/write` `type conversion`
>
> **Streams** provide a unified interface for interacting with external input.

## g++命令

- **`g++`** ：GNU C++ 编译器，用于编译 C++ 程序。
- **`-std=c++17`** ：指定编译标准为 C++17。这表示编译器将按照 C++17 标准解析和编译代码，支持该标准下的所有特性。
- **`-Wall`** ：启用所有警告选项。编译器会输出尽可能多的潜在问题警告，帮助开发者发现代码中的隐患。
- **`-o xx`** ：指定输出的可执行文件名为 `xx`。如果不指定 `-o` 参数，默认输出文件名为 `a.out`。g

## sstream库

> stringstream is not connected with any external source.

### ostringstream
```python
 ostringstream 变量名("内容",参数) 
```

> `目的`:创建变量
>
> `参数`：
>
> - `ostringstream::ate`-->流保持追加的状态

```python
变量<<"内容"
```
> `目的`:向流中输入内容
>
> `内容`:可以是字符串,浮点数等,会转化为另一种变量(非字符串)


```python
变量.str()
```

> `目的`:将流的内容转化为字符串

### istringstream

```python
istringstream 变量名(字符串,参数)
```

> `目的`:转化为输出流

```python
流变量>>变量
```

> `目的`:从流中读取内容并储存在另一个合适的变量;不同的Token以`空白符`或者`类型`分割

### 流的四个参数

- Good bit: ready for read/write.——Nothing unusual, on when other bits are off.
- Fail bit: previous operation failed, all future operations frozen. —— Type mismatch, file can’t be opened, seekg failed.
- EOF bit: previous operation reached the end of buffer content. ——Reached the end of the buffer. 
- Bad bit: external error, likely irrecoverable.——Could not move characters to buffer from external source. (e.g. the file you are reading from suddenly is deleted)

> 1. G and B are not opposites! (e.g. type mismatch) 
> 2. G and F are not opposites! (e.g. end of file)
> 3. F and E are normally the ones you will be checking
