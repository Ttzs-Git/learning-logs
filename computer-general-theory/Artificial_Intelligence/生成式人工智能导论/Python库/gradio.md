## gradio库

### 构造器

- 范式1:gradio.Interface(fn,inputs,outputs)

>  `fn`：要围绕其包装用户界面 (UI) 的函数
>  `inputs`：用于输入的 Gradio 组件。组件的数量应与函数中参数的数量相匹配。
>  `outputs`：用于输出的 Gradio 组件。组件的数量应与函数返回值的数量相匹配。
>
>  组件的名称作为字符串（`"textbox"`）或类的实例（`gr.Textbox()`）传入

### 对象的方法

- 范式1:对象.lanuch(share=True)

> `share`:默认是false，当变成True的时候生成一个公共 URL