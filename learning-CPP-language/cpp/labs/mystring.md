# C++ Lab: 实现移动语义的字符串类

**目标**：通过完善`MyString`类，理解拷贝控制成员（拷贝构造/赋值）与移动语义（移动构造/移动赋值）的区别及实现方法。

------

## **1. Lab背景**

你已获得一个基础的`MyString`类，它能管理动态分配的字符数组，并支持拷贝构造、赋值和比较操作。但该类**未实现移动语义**，在处理临时对象时可能存在性能问题。

**你的任务**：

1. 为`MyString`类添加移动构造函数和移动赋值运算符。
2. 通过测试案例验证移动语义的正确性。
3. 分析移动语义带来的性能优势。

------

## **2. 实验步骤**

### **阶段1：理解现有代码**

**代码分析**：

- `MyString`类使用`char* data`管理动态内存。
- 已实现：拷贝构造函数、拷贝赋值运算符、比较运算符、输出运算符。
- 缺失：移动构造函数、移动赋值运算符。

**测试现有代码**：

```cpp
int main() {
    MyString a("Hello");
    MyString b = a;       // 调用拷贝构造函数
    MyString c;
    c = a;                // 调用拷贝赋值运算符
    
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl;
    return 0;
}
```

**预期输出**：

```bash
a: Hello, b: Hello, c: Hello
```

------

### **阶段2：实现移动构造函数**

**任务**：

- 添加移动构造函数`MyString(MyString&& other) noexcept`
- 确保资源从`other`转移到新对象
- 将`other.data`置为`nullptr`

**代码框架**：

```cpp
class MyString {
    // ...
public:
    // 移动构造函数
    MyString(MyString&& other) noexcept : data(other.data) {
        other.data = nullptr; // 转移后置空
    }
};
```

**测试案例**：

```cpp
int main() {
    MyString temp("MoveTest");
    MyString target(std::move(temp)); // 强制使用移动构造
    
    std::cout << "target: " << target << std::endl; // 应输出"MoveTest"
    std::cout << "temp: " << temp << std::endl;     // 应输出空（未定义行为时为乱码）
    return 0;
}
```

**验证点**：

1. `target`正确持有原数据。
2. `temp.data`被置为`nullptr`（通过调试器观察）。

------

### **阶段3：实现移动赋值运算符**

**任务**：

- 添加移动赋值运算符`MyString& operator=(MyString&& other) noexcept`
- 释放当前对象的资源，并接管`other`的资源
- 处理自赋值情况

**代码框架**：



```cpp
class MyString {
    // ...
public:
    // 移动赋值运算符
    MyString& operator=(MyString&& other) noexcept {
        if (this != &other) {
            delete[] data;       // 释放原有资源
            data = other.data;   // 接管资源
            other.data = nullptr;
        }
        return *this;
    }
};
```

**测试案例**：



```cpp
int main() {
    MyString a("Apple");
    MyString b;
    b = std::move(a); // 移动赋值
    
    std::cout << "b: " << b << std::endl; // 输出"Apple"
    std::cout << "a: " << a << std::endl; // 输出空
    return 0;
}
```

**验证点**：

1. `b`正确获得数据。
2. `a`不再拥有数据。

------

### **阶段4：综合测试**

**测试案例1 - 临时对象优化**：



```cpp
MyString createString() {
    return MyString("Temporary"); // 可能触发移动构造
}

int main() {
    MyString s = createString();
    std::cout << s << std::endl; // 输出"Temporary"
}
```

**测试案例2 - 容器操作**：



```cpp
#include <vector>
int main() {
    std::vector<MyString> vec;
    vec.push_back(MyString("VectorElement")); // 应调用移动构造
}
```

------

### **阶段5：性能对比**

**测试代码**：



```cpp
#include <chrono>

void testCopy() {
    MyString s("A long string for testing...");
    for (int i = 0; i < 100000; ++i) {
        MyString copy = s; // 拷贝构造
    }
}

void testMove() {
    MyString s("A long string for testing...");
    for (int i = 0; i < 100000; ++i) {
        MyString moved = std::move(s); // 移动构造
    }
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    testCopy();
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Copy time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << "ms\n";

    start = std::chrono::high_resolution_clock::now();
    testMove();
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Move time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << "ms\n";
}
```

**预期结果**：

- 移动操作耗时显著低于拷贝操作。

------

## **3. 提交要求**

1. 完整代码文件`MyString.cpp`
2. 各阶段的测试代码及输出截图
3. 性能对比数据及分析报告（至少200字）

------

## **4. 评分标准**

| 项目                 | 分值 |
| :------------------- | :--- |
| 移动构造函数正确性   | 30   |
| 移动赋值运算符正确性 | 30   |
| 测试案例覆盖完整性   | 20   |
| 性能分析报告质量     | 20   |

------

**提示**：使用`valgrind`或调试器检查内存泄漏，确保所有操作安全！