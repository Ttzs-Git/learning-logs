## gradio库

> [官方文件](https://www.gradio.app/guides/flagging)

### 类

### Interface类
> 高级类
#### 构造函数

- 范式1:Interface(fn,inputs,outputs)
- 范式2:Interface(函数,组件)

>  `fn`：要围绕其包装用户界面 (UI) 的函数
>  `inputs`：用于输入的 Gradio 组件。组件的数量应与函数中参数的数量和顺序相匹配。
>  `outputs`：用于输出的 Gradio 组件。组件的数量应与函数返回值的数量相匹配。
>
>  组件的名称作为字符串（`"textbox"`）或类的实例（`gr.Textbox()`）传入
>
>  > **提供实例:**
>  >
>  > `examples=[]`:子列表中的每个元素代表每个输入组件的输入
>  >
>  > `examples='目录'`:使用目录的地址(.csv)
>  >
>  > 
>
>  > **描述性内容(指定内容的存放位置):**
>  >
>  > `title`：接受文本，并可以将其显示在界面的最顶部，同时也成为页面的标题。
>  >
>  > `description`：接受文本、markdown 或 HTML 并将其放置在标题下方。
>  >
>  > `article`：它还接受文本、markdown 或 HTML 并将其放置在界面下方
>
>  > **折叠输入:**
>  >
>  > `additional_inputs`:默认条件下不可见,输入后按照默认顺序传递到预测函数中
>  >
>  > 

> **组件:**
>
> `Image(type)`:用于处理输入或输出图像
>
> `Label`:显示分类标签和概率
>
> `LinePlot`:显示线图
>
> **组件的属性:**
>
> `label`:给组件框添加标签
>
> `info`:给组件框添加注释信息

### Blocks类

### ChatInterface类

### 

### 对象的方法

- 范式1:对象.lanuch(share=True)

> `share`:默认是false，当变成True的时候生成一个公共 URL