# CMake跨平台编译

[TOC]

-----------

## 介绍

`CMake`是一个跨平台的自动化构建系统，它使用`CMakeLists.txt`文件来描述构建过程

`CMake`是一个非常强大的构建系统，支持多种编程语言、复杂的目标关系、库依赖、条件编译等高级功能

总是建议使用一个单独的构建目录（如上面的`build`目录），这样就不会污染你的源代码目录

## 代码

### 构建单个可执行文件

```bash
mkdir build
cd build
cmake
```

```cmake
cmake_minimun_required(VERSION <n>) # 设置CMake最小版本要求
project(<name_project> VERSION <N>) #设置项目名称和版本
add_executable(<target_name> <rec_name>.cpp) # 添加可执行文件
```

```bash
make
```

