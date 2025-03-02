# HTML
> HTML(HyperText Markup Language):超文本标记语言
> HTML:定义网页的结构和信息
> Main Idea:Nested Boxes

## 学习资源
[MDN](https://developer.mozilla.org/en-US/)

## 基本语法
### 基本结构
```html
<!DOCTYPE HTML>
<html>
    <head>
    </head>
    <body>
    </body>
</html>
```
> <!DOCTYPE HTML>:文档类型声明
> <html></html>:根标签;HTML的根
> <head></head>:头部标签;
> <body></body>:主体标签
> 标签:<>...</>


### 标题标签
```html
<h1></h1><!-- 一级标题 -->
<h2></h2><!-- 二级标题 -->
<h3></h3><!-- 三级标题 -->
<h4></h4><!-- 四级标题 -->
<h5></h5><!-- 五级标题 -->
<h6></h6><!-- 六级标题 -->
> 层级去区分标题标签,而非字号
<title></title><!-- 选项卡标题 -->
```

### 文本标签
```html
<p></p>:段落
> 不同p标签之间进行换行,表示不同段落
<br>:换行(只有起始标签)
<b></b>:加粗
<i></i>:斜体
<u></u>:下划线
```
### 属性
```html
<tagname 属性名="属性值">文本</tagname>
```
> 标签的附加信息
> 属性名="属性值"
> 属性名:不区分大小写
> 属性值:区分大小写
> 属性值:双引号包裹
 
#### class属性
```html
class = "类名"
```
> class:标签的类名


### 链接标签
```html
<a href="链接地址" title="链接标题" target="跳转方式">链接文本</a>
```
> href:链接地址|指向链接的路径
> title:链接标题|鼠标悬停时的标题
> target:跳转方式|_blank:新窗口打开|_self:当前窗口打开


### 图片标签
```html
<img src="图片路径" alt="图片描述" title="图片标题">
<!-- 简洁模式 -->
<img src="图片路径" alt="图片描述" title="图片标题"/>
<!-- (只有起始标签);自闭合标签 -->
<!-- 如果由</img>会被某些浏览器兼容 -->
```
> src:图片路径|指向图片的路径
> alt:图片描述|图片无法显示时的描述
> title:图片标题|鼠标悬停时的标题
> width:图片宽度
> height:图片高度


### 列表标签
```html
<ol></ol>
<!-- 有序列表 -->
<ul></ul>
<!-- 无序列表 -->
<li></li>
<!-- 列表项(有序列表中显示序号;无序列表中显示符号) -->
```

### 表格标签
```html
<table border="number"></table>表格
> border:表格边框宽度
<thead></thead>:表头
<tbody></tbody>:表体
<tr></tr>:行
<td></td>:单元数据
```


### 容器标签
```html
<div></div>
<!-- 块级容器 -->
<!-- 用于包裹其他标签 -->
<span></span>
<!-- 行内容器 -->
<!-- 用于包裹行内标签 -->
```
### 语义化标签
#### 区块标签
```html
<section>
    <h1>标题</h1>
    <p>内容</p>
</section>
<!-- 区块 -->
<!-- 用于包裹一组相关的内容 -->
``` 

#### 导航标签
```html
<nav>
    <a href="链接地址">链接文本</a>
</nav>
<!-- 导航 -->
<!-- 用于包裹导航链接 -->
```


### 分隔线
```html
<hr>
<!-- 水平线 -->
<!-- 分割线 -->
```


