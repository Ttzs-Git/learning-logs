# CSS
> CSS(Cascading Style Sheets): 层叠样式表
> CSS:定义网页的样式
> CSS:a list of descriptions

## 重要概念
1. Tags such as <h1> have some default styling while <div> and <span> do not.
2. Any custom applied CSS rules will overwrite it!

## 基本结构
```css
selector {
    property: value;
}
```
## 选择器
> 选择器用于选择要设置样式的元素
> 选择器可以是元素的标签名、类名、id名、属性名等
> 选择器可以组合使用
> 选择器的优先级:!importanr(慎用)> 内联样式 > ID选择器 > 类/伪类/属性选择器 > 元素/伪元素选择器
> 内联样式: style 属性中编写 CSS 的方式，用于为单个元素定义样式。它的优先级高于外部 CSS 和内部样式表（除非使用 !important），但通常不推荐大规模使用

### 元素选择器(Tag Selector)
```css
tag {
    property: value;
}
```
> 选择所有的tag元素,并设置样式

### 类选择器(Class Selector)
```css
.class {
    property: value;
}
```
> class的元素,并设置样式
> 只应用一个CSS属性的类:Utility Class
> 格式化工具类叫做"u-xx"

### ID选择器(Id Selector)
```css
#id {
    property: value;
}
```
> 唯一元素的id属性,并设置样式

### 通配符选择器(Universal Selector)
```css
* {
    property: value;
}
```
> 所有元素,并设置样式

### 后代选择器(Descendant Selector)
```css
div p {
    property: value;
}
```
> div元素下的p元素,并设置样式

### 子选择器(Child Selector)
```css 
div > p {
    property: value;
}
```
> 选择直接子元素（仅一层嵌套）

### 伪类选择器(Pseudo-class Selector)
```css
a:hover {
    property: value;
}
```
> 根据元素的状态或位置选择，如 :hover、:nth-child()
> 鼠标悬停在a元素上时,并设置样式

### 伪元素选择器
```css
p::first-line {
    property: value;
}
```
> p元素的第一行,并设置样式

### 属性选择器(Attribute Selector)
```css
a[target="_blank"] {
    property: value;
}
```
> a元素的target属性为_blank,并设置样式

### 层次选择器(Combinator Selector)
```css
div p {
    property: value;
}
```
> div元素下的p元素,并设置样式

### :root 选择器
```css
:root {
    /* 此处定义的变量全局有效 */
}
```
> 选择文档的根元素<\html>
> 变量的定义语法: --variable-name: value;(大小写敏感)
> 使用变量: var(--variable-name)




## 盒模型
> 组成: margin(外边距), border(边框), padding(内边距), content(内容)
### flexbox(弹性盒模型)
> 核心组成:flex容器和主轴(Main Axis)、交叉轴(Cross Axis)
```css  
.container {
    display: flex;
    /* 子元素自动成为flex项目 */
    justify-content: center;
    align-items: center;
}
```
| 容器属性名|作用|常用值实例|
|:---:|:---:|:---:|
|flex-direction|定义主轴的方向|row(默认)、column、row-reverse|
|justify-content|定义主轴上的对齐方式|center、flex-start、flex-end、space-between、space-around|
|align-items|定义交叉轴上的对齐方式|center、flex-start、flex-end、stretch(默认)|
|flex-wrap|定义是否换行|nowrap(默认)、wrap、wrap-reverse|
|gap|定义项目之间的间隔|10px、1rem|

| 项目属性名|作用|常用值实例|
|:---:|:---:|:---:|
|order|定义项目的排列顺序|1、2、3|
|flex-grow|定义项目的放大比例|0(默认)、1|
|flex-shrink|定义项目的缩小比例|1(默认)、0|
|align-self|定义单个项目在交叉轴上的对齐方式|center、flex-start、flex-end、stretch、auto|
|align-content|定义多根轴线的对齐方式|center、flex-start、flex-end、space-between、space-around、stretch|
|flex-basis|定义项目在主轴上的大小|auto(默认)、100px|
|flex|flex-grow、flex-shrink、flex-basis的简写|1 1 100px|

## 布局方法
### 流式布局
> 根据浏览器的大小自动调整布局
### 浮动布局
> 通过float属性,使元素浮动
### 弹性布局(Flexbox)
> 通过flex属性,使元素自动调整布局
> 单行单列布局(适合居中和等分)
```css
.container {
    display: flex;
    justify-content: center;
    align-items: center;
}
```

### 网格布局(Grid)
> 通过grid属性,使元素自动调整布局
> 多行多列布局(适合复杂布局)
```css
.container {
    display: grid;
    grid-template-columns: 100px 100px 100px;
    grid-template-rows: 100px 100px 100px;
    gap: 10px;
}
```
### 定位布局
> 通过position属性,使元素定位


## 动画
> 通过@keyframes属性,使元素动画
> 关键帧动画
```css
@keyframes example {
    0% {background-color: red;}
    25% {background-color: yellow;}
    50% {background-color: blue;}
    100% {background-color: green;}
}
```

## 响应式布局
> 通过@media属性,使元素根据不同设备自动调整布局
```css
@media screen and (max-width: 600px) {
    body {
        background-color: lightblue;
    }
}
```

## 混合HTML和CSS
> 通过style属性,使元素设置样式
```html
<link rel="stylesheet"  href="style.css" />
```
> 一般放置在head标签中,确保样式在页面加载时就可见