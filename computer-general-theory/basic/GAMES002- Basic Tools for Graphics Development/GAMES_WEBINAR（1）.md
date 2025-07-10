# GAMES_WEBINAR（1）

# 前言

科研是什么?

自我训练的方式|职业|生活方式

> 你如何看待科研？

##  科研

#### 科研方法

科研心理与人生|科研责任与道德|论文阅读与写作|科研**交流**与报告

![image-20241128195103152](GAMES_WEBINAR（1）.assets/image-20241128195103152.png)



#### 科研工具

MIT:The missing semester of your cs education

![image-20241128195333817](GAMES_WEBINAR（1）.assets/image-20241128195333817.png)





#### 科研导师

科研导师|实践学习

![image-20241128195539694](GAMES_WEBINAR（1）.assets/image-20241128195539694.png)

> 随时随地的交流

#### 科研文化

https://121clicks.com/design/east-meets-west-cultural-differences-yang-liu

#### 榜样的力量

同伴——>跟优秀的人学习



# Linux+shell

### LINUX

开源

基于Linux内核:![image-20241128202402230](GAMES_WEBINAR（1）.assets/image-20241128202402230.png)

​						shell:壳：与内核打交道



类Unix：不同但是类似

操作系统集合

优点：开源（生态环境比较好）、功能齐全、快而稳定、包管理....

应用：使用远程服务器（linux）、一些仿真环境（机器人、物理）、OS、网络、软开等

图形学：windows较多一点

如何访问Linux？

1.安装linux系统：乌班图18.04   20.04等等  ；需要一个U盘  |参见知乎

2.使用WSL： 官方文档

3.使用虚拟机：VMware、Virtual Box+镜像|一般与本机的内容不共享|通过网络传输文件|但是比较完善

### shell

![image-20241128203502017](GAMES_WEBINAR（1）.assets/image-20241128203502017.png)









![image-20241128204104083](GAMES_WEBINAR（1）.assets/image-20241128204104083.png)

> 推荐用2？？？

- echo -将参数输入到界面上

![image-20241128204940837](GAMES_WEBINAR（1）.assets/image-20241128204940837.png)

> 指令+参数

echo：输出到屏幕

用空格结束|分隔

第一行：不同的参数，echo按顺序输出

第二行：\转义符：整体一个参数

第三|四行，空格变成字符串的一部分

![image-20241128205235283](GAMES_WEBINAR（1）.assets/image-20241128205235283.png)

![image-20241128205256183](GAMES_WEBINAR（1）.assets/image-20241128205256183.png)

加粗—常用；可能系统不自带



shell的工作原理：调用程序

命令行的第一个词是程序名称，随后都是参数

词之间用空格分隔

敲下回车之后会开启一个**子进程**跑进相应的程序

>  ics  调用其他程序的程序

底层调用的原理：path

![image-20241128205710787](GAMES_WEBINAR（1）.assets/image-20241128205710787.png)

$+变量——>调用变量

![image-20241128210017453](GAMES_WEBINAR（1）.assets/image-20241128210017453.png)

### linux下的路径是什么？

绝对路径"/"——根目录

相对路径“./” 从当前目录出发  显示在用户名之后，也可以用pwd指令查看；./可以省略|千万不要‘/'开头 



> pwd 查看当前路径
>
> cd切换当前路径

![image-20241128210633793](GAMES_WEBINAR（1）.assets/image-20241128210633793.png)

父路径：返回上一级；向上

-：后退

~：用户文件所在路径

![image-20241128210738575](GAMES_WEBINAR（1）.assets/image-20241128210738575.png)

网络套接字

> cat 查看文件内容并输出文件内容

### 文件重定向&管道

![image-20241128211933296](GAMES_WEBINAR（1）.assets/image-20241128211933296.png)

< >后跟文件名

\>清空重开

\>>保留原来内容

![image-20241128212251550](GAMES_WEBINAR（1）.assets/image-20241128212251550.png)

> grep 查找字符串并标记；如果没有，啥也不输出

### 权限

![image-20241128213326029](GAMES_WEBINAR（1）.assets/image-20241128213326029.png)

组：用户所在的组

> r:read
>
> w:write
>
> x:运行execute



chmod（change mod)改变权限位

1.逐位修改

![image-20241128213538989](GAMES_WEBINAR（1）.assets/image-20241128213538989.png)

> root 的权限更高，需要加sudo

2.采用八进制位

![image-20241128213826834](GAMES_WEBINAR（1）.assets/image-20241128213826834.png)

三位形成一个八进制数

> 规则是什么？



用户权限：

最高权限：root

+sudo（superdo）：以root的身份使用![image-20241128214421404](GAMES_WEBINAR（1）.assets/image-20241128214421404.png)

> sudo echo something >blank.txt
>
> | sudo只能管理到sth，无法管理>

>
>
>tee代表接受标准输入，并输出



### 包管理

![image-20241128214649352](GAMES_WEBINAR（1）.assets/image-20241128214649352.png)

> instorm
>
> dpkg  解压并安装

![image-20241128214726125](GAMES_WEBINAR（1）.assets/image-20241128214726125.png)

> 名称是难点，不好调研的部分——官方软件包

![image-20241128214903446](GAMES_WEBINAR（1）.assets/image-20241128214903446.png) 

北大源

### 变量

![image-20241128215600994](GAMES_WEBINAR（1）.assets/image-20241128215600994.png)

> 不能加空格|加空格，空格和bar会被认为是参数

![image-20241128215729767](GAMES_WEBINAR（1）.assets/image-20241128215729767.png)

![image-20241128215801521](D:\gitee_github\computer-general-theory\GAMES002- Basic Tools for Graphics Development\ph\image-20241128215801521.png)

变量名=   的格式

![image-20241128215814717](GAMES_WEBINAR（1）.assets/image-20241128215814717.png)

> set 是环境变量和shell变量的并集

shell的变量是临时变量，环境变量；赋值仅仅添加到shell变量

![image-20241128220204783](GAMES_WEBINAR（1）.assets/image-20241128220204783.png)

> ls -a隐藏文件
>
> 不退出，重启.bashrc

### 命令替换&进程替换

![image-20241128220633352](GAMES_WEBINAR（1）.assets/image-20241128220633352.png)

比较两个命令的差别

diff进行文件的差别

输入一个文件名；非一个文件；



### shell脚本

![image-20241128220830639](GAMES_WEBINAR（1）.assets/image-20241128220830639.png)

边执行，边运行

预编译：c，cpp

![image-20241128221043996](GAMES_WEBINAR（1）.assets/image-20241128221043996.png)

系统将会解析成脚本语言，引导解释器，但是不会被执行

![image-20241128221153690](GAMES_WEBINAR（1）.assets/image-20241128221153690.png)

> 使用chmod，改变权限

![image-20241128221448370](GAMES_WEBINAR（1）.assets/image-20241128221448370.png)

![image-20241128221454799](GAMES_WEBINAR（1）.assets/image-20241128221454799.png)

> 编辑：code  vim（终端） nannou、emix（快捷键）

![image-20241128223319174](GAMES_WEBINAR（1）.assets/image-20241128223319174.png)

一行行追加，很麻烦