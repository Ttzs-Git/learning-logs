# Matlab实验周备忘录 (R2024b版)

[TOC]

---

## 导言

### 推荐使用

```matlab
clc;
clear;
close all;
```

### 程序设计语言

#### 循环语句

- `for ... end`
- `while ... end`

#### 分支语句

- `if ... else ... end`
- `if ... end`
- `if ... elseif ... else ... end`
- `switch ... case ... end`

#### 函数

- 字符串方法: `f = ' '`
- 符号变量: `f = sym(' ')`
- 内联函数 (**不推荐**): `inline(' ')`
- 匿名函数: `@(x,y) ...`
- `function` 文件 (数值运算)

### 两种运算

#### 数值运算

- 矩阵运算
- 数组运算 (对应元素运算)

#### 符号运算

- 符号运算是Matlab一大特色

### 一般操作对象

- 一维数组 / 多维数组的列

---

## 常用常量

- 如: `pi`, `inf`, `NaN`
- 分段函数中如果未设置值可返回 `NaN`

## 输出格式

```matlab
format long
format short
format bank
format rat
```

> - Matlab默认为双精度运算
> - `format` 必须写在运算前

## 数组

### 数组定义

- 一维数组: `[a, b, c]`
- 等差列: `start:step:end`
- 线性分割: `linspace(start,end,n)`

### 高维数组

- 键盘输入
- 标准生成方法

### 数组访问

- `x(n)`
- `x(start:end)`
- `x(find(condition))`
- `x([index array])`

高维数组访问

- `A(i,j)`, `A(i,:)`, `A(:,j)`, `A([i,j],:)`

### 数组运算

- 矩阵运算 (`*`, `\`, `/`)
- 数组元素运算 (`.*`, `./`, `.^`)
- 逻辑运算
- 预定义函数运算

### 常用数组函数

- `length(A)`
- `[m,n] = size(A)`
- `find(A)`

## 数值运算

### 常用矩阵运算

- `inv(A)` 求逆
- `det(A)` 行列式
- `[V,D]=eig(A)` 特征值和特征向量
- `diag(A)`, `diag(x)`
- `A'` 转置
- `sqrt(A)`, `null(A)`, `rref(A)`, `orth(A)`
- `f(A)` 元素级函数操作

### 应用场景

- 第一种类型: 线性方程组 AX=b 求解
- 多项式运算
- 数据分析 (统计值)
- 数据的保存与读取

## 符号运算

### 符号对象

```matlab
syms x y
f = sym('sin(x)+cos(y)');
```

### 符号运算

- `subs(f,old,new)` 代换
- `factor(expr)`, `expand(expr)`, `collect(expr)`, `simplify(expr)`
- `finverse(f)`, `compose(f,g)`
- `[n,d]=numden(expr)`

#### 实分极限

```matlab
limit(f,x,a)
limit(f,x,a,'left')
limit(f,x,a,'right')
```

#### 实分微分/等分

```matlab
diff(f)
diff(f,x,n)
taylor(f,x,z,'order',n)
```

#### 等分积分

```matlab
int(f)
int(f,x)
int(f,a,b)
```

#### 高精度分析

- `integral(f,a,b)` 代替传统 `quadl`

#### 等式求解

```matlab
solve(f==0,x)
vpasolve(f==0,x,[a,b])
```

#### 常微分方程 (ODE)

```matlab
syms y(x)
ode = diff(y,x,2) + y == 0;
sol = dsolve(ode)
```

## 绘图

### 二维绘图

```matlab
plot(x,y)
plot(x1,y1,'r-',x2,y2,'b--')
hold on
hold off
subplot(m,n,p)
```

#### 标注

```matlab
title('Title')
xlabel('x-axis')
ylabel('y-axis')
legend('data1','data2')
```

### 符合函数绘图

```matlab
fplot(@(x) sin(x), [-pi, pi])
```

### 三维绘图

```matlab
plot3(x,y,z)
mesh(x,y,z)
surf(x,y,z)
[X,Y]=meshgrid(x,y);
```

### 特殊绘图

- `pie3(vector)` 三维饼图
- `cylinder(r,n)` 气管
- `sphere(n)` 球面
- `bar(x,y)` 直方图
- `polarplot(theta,rho)` 极坐标绘图
- `histogram(data)` 统计直方图
- `stairs(x,y)`, `stem(y)` 特殊分类

---

请注：本备忘录根据Matlab R2024b新版标准经过检查，可直接用于作为实验或学习过程的实用笔记！
