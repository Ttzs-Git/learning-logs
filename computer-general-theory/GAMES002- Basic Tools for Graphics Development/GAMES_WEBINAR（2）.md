# GAMES_WEBINAR（2）

# windows+cmd+powershell

## windows

微软

图形化操作系统家族

[Microsoft Windows | Microsoft Wiki | Fandom](https://microsoft.fandom.com/wiki/Microsoft_Windows)

[Microsoft Windows - BetaWiki](https://betawiki.net/wiki/Microsoft_Windows)



![image-20241129205430726](GAMES_WEBINAR（2）.assets/image-20241129205430726.png)

![image-20241129210210412](GAMES_WEBINAR（2）.assets/image-20241129210210412.png)

### 为何使用windows

强大的图形化界面

用户基数大

简单

硬件兼容

....

几乎任何场景都可以应用



### 如何访问windows

![image-20241129211040636](GAMES_WEBINAR（2）.assets/image-20241129211040636.png)

> windows:其实是需要购买的
>
> 不确定来源的程序放到虚拟机中运行，可以保护原来的系统



### CMD!=PowerShell

PowerShell不直接执行CMD命令，而是通过别名alias实现

![image-20241129211654003](GAMES_WEBINAR（2）.assets/image-20241129211654003.png)

![image-20241129211704872](GAMES_WEBINAR（2）.assets/image-20241129211704872.png)

[(4 封私信 / 80 条消息) PowerShell 与 cmd 有什么不同？ - 知乎](https://www.zhihu.com/question/22611859)

> 面向对象的编程语言

> cmd支持字符串，不支持对象
>
> ![image-20241129211909696](GAMES_WEBINAR（2）.assets/image-20241129211909696.png)



## 启动CMD

> ![image-20241129214210124](GAMES_WEBINAR（2）.assets/image-20241129214210124.png)

> 安装或者更新powershell：参考官网教程

> CMD指令
>
> 格式类似Linux Shell
>
> ![image-20241129214343333](GAMES_WEBINAR（2）.assets/image-20241129214343333.png)
>
> > 建议都用‘\’
> >
> > Linux有统一的根目录；Windows里有盘符
> >
> > 选项类似开关
> >
> > /f强制执行
> >
> > ersae删除
>
> 空格和引号的含义不规律
>
> > cmd下无法直接切换盘符,需要再次输入一下盘符
> >
> > ![image-20241130153319532](GAMES_WEBINAR（2）.assets/image-20241130153319532.png)
> >
> > 设计路径|空格可以用“”括起来
> >
> > echo是原样输出“”
> >
> > 重定向和管道与Linux一样

![image-20241130153519500](GAMES_WEBINAR（2）.assets/image-20241130153519500.png)



### 账户权限

> ![image-20241130153901230](GAMES_WEBINAR（2）.assets/image-20241130153901230.png)
>
> 来宾账户：锁机但是又想访问
>
> ![image-20241130153912704](GAMES_WEBINAR（2）.assets/image-20241130153912704.png)
>
> > 确认  无攻击

### 文件权限

![image-20241130154248564](GAMES_WEBINAR（2）.assets/image-20241130154248564.png)

> 提到了文件的权限的分类？？
>
> ![image-20241130154356659](GAMES_WEBINAR（2）.assets/image-20241130154356659.png)

### CMD变量

![image-20241130154644291](GAMES_WEBINAR（2）.assets/image-20241130154644291.png)

![image-20241130154846462](GAMES_WEBINAR（2）.assets/image-20241130154846462.png)

set指令仅影响当前窗口，类似与临时变量

![image-20241130154934641](GAMES_WEBINAR（2）.assets/image-20241130154934641.png)

> 区分用户和系统

![image-20241130155042055](GAMES_WEBINAR（2）.assets/image-20241130155042055.png)

![image-20241130155123216](GAMES_WEBINAR（2）.assets/image-20241130155123216.png)

> 尽可能图形化的界面的来解决问题

### CMD脚本

![image-20241130155355143](GAMES_WEBINAR（2）.assets/image-20241130155355143.png)

> Linux是用权限位
>
> Windows是用拓展名或者后缀
>
> > @echo off关掉指令提示
> >
> > echo.  什么都不输出
> >
> > echo.> xxx.txt  创建一个文件
> >
> > ![image-20241130160405533](GAMES_WEBINAR（2）.assets/image-20241130160405533.png)
> >
> > 不推荐学
> >
> > 形成python脚本
>
> ![image-20241130160853069](GAMES_WEBINAR（2）.assets/image-20241130160853069.png)
>
> 或者是del



## PowerShell指令

指令更复杂，又称cmdlets

![image-20241130161649149](GAMES_WEBINAR（2）.assets/image-20241130161649149.png)

> \* **通配符**
>
> 可能还支持**正则语言**
>
> 指令似乎不区分大小写

### 对象

![image-20241130162012457](GAMES_WEBINAR（2）.assets/image-20241130162012457.png)![image-20241130162158477](GAMES_WEBINAR（2）.assets/image-20241130162158477.png)

![image-20241130162209925](GAMES_WEBINAR（2）.assets/image-20241130162209925.png)

### PowerShell别名机制

![image-20241130162320857](GAMES_WEBINAR（2）.assets/image-20241130162320857.png)

![image-20241130163032902](GAMES_WEBINAR（2）.assets/image-20241130163032902.png)

![image-20241130163052097](GAMES_WEBINAR（2）.assets/image-20241130163052097.png)

### PowerShell脚本

![image-20241130163915851](GAMES_WEBINAR（2）.assets/image-20241130163915851.png)

> -le   小于等于

![image-20241130164102767](GAMES_WEBINAR（2）.assets/image-20241130164102767.png)

> 参考官方文档
>
> 不建议学习

![image-20241130164310400](GAMES_WEBINAR（2）.assets/image-20241130164310400.png)![image-20241130164336234](GAMES_WEBINAR（2）.assets/image-20241130164336234.png)

> 第4题设计脚本语言