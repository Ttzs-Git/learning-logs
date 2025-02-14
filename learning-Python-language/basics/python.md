# python 基础语法

## 变量(变量指向特定的值;可修改;被赋值的标签)
### 命名规则
#### 字母(万国码,建议:英语)、数字、下划线;不能以数字打头——与C相同
#### 不能使用空格,可以使用下划线来分隔其中的单词;不要使用关键字和函数作为变量名
#### 惯例:变量名小写,多字母用下划线连接,私有变量下划线开头,受保护的变量单下划线开头
#### 尽量少用l和o
#### 原则:简短并且可描述

## 常量
### 没有内置的常量类型,建议使用:大写命名法,视为不变的量

## 基础数据类型
### 整形(int)
#### 1.进制:十进制(nnn);八进制(0onnn);二进制(0bnnn);十六进制(0xnnn)
#### 2.大数的下划线分组:3个为一组,输出不显示
### 浮点型(float)
#### 1. 表示方法(数学表示|科学计数法)
#### 2.大数的下划线分组:3个为一组,输出不显示

### 字符串型(str)(''和“”都可以)
### 布尔型(bool)

## 运算符
### 列表运算符([] [:])
### 为运算符(~ >> << & ^ |)
### 算数运算符( + - * / // % **)
### 比较运算符(== != <  >  <=  =>| 返回布尔值)
### 身份运算符(is  is not)
### 成员运算符(in not in)
### 逻辑运算符(and or not| 返回布尔值|短路处理)
### 赋值运算符(= += -= *= /= %= //= &/ |= ^= >>= <<=)

## 注释
### 原则: 清晰,简洁,便于合作和读写
### 注释——方案的描述——姓名,当前日期,功能

## 程序结构
### 顺序结构(自上而下地执行)
#### 1. 交换变量中的内容
##### a,b,c=c,b,a

### 分支结构
#### 1. if(条件测试|布尔表达式)..elif(条件测试)..else(:)
##### a. 嵌套循环
##### b.条件测试:数值0、空值None、单引号空字符串''、双引号空字符串""、空列表[]、空元组()、空字典{}，Python 都会返回False
#### 2. match(变量)...case(常量):xxx
##### a.基本模式:执行匹配的case后就跳出
##### b.合并模式: |

### 循环结构
#### 1. for ...in..(i/_通配符)
##### a. for ... in range()
##### b. for ... in items
##### c. 嵌套循环

#### 2. while
##### 交互性退出程序:while(flag):(flag) | while 条件: | while True: xxx: break

#### 3. break和continue

## 常用数据结构
### 列表——可变类型——一般的复数名称
#### 1. 创建
##### a. []直接创建
##### b. list()函数组装
###### I.list(range())数值列表
###### II.list('字符串')----字符列表
#### 2.运算
##### a.+(两个列表的拼接)
##### b.*(列表的重复运算)
##### c.in not in(成员运算)
##### d.\[\](对列表的元素进行访问和修改|0~N-1|-N~-1)
##### e.\[start:end:strike\](切片运算对数组进行访问和修改|复制列表);当start=0|end=N|strike=1为默认;列表直接赋值的结果只是另一个变量对相同的内容关联c
###### I.end 不被包括
###### II.任何一个参数都可以为负数,理解方式:一维向量,向左为正,向右为负
##### f.关系运算(== != <= >=)(一个个元素进行比较)
##### g.解包运算
##### a. 普通模式:一个元组赋给对应个数的变量.当不等时,引发'valueerror'
##### b. 星号表达式:\*修饰的变量变成列表;\*表达式只能出现一次
#### 3.遍历
##### a.for i in range(len(列表)):
##### b.for i in 列表:(注意:i会取到列表的值) 
##### 范式:for item in list_of_items:
#### 4.常见操作 
##### a.添加元素
###### I.列表.append('xx')方法——在列表尾追加'xx',无返回值
###### II.列表.insert(n,'xxxx')方法——在列表\[n\]的位置插入'xxx'，无返回值
##### b.删除元素
###### I.列表.remove('xxx')-删除列表中第一个指定的元素，无返回值
###### II.列表.pop(n)(底层字节码:`CALL_METHOD`和`POP_TOP`)-删除指定位置的元素,n=-1=N时可以省略,返回被删除的元素——让列表变得像栈
###### III.列表.clear()-清除列表所有元素
###### IV.del关键字(底层字节码:`DELETE_SUBSCR`) 列表\[n\]-删除指定位置的元素,性能更优，无返回值
###### V.删除列表中所有指定元素: while xx in list:list.remove(xx)
##### c.搜索位置
###### I. 列表.index('xxxx',n)-从列表\[n\]开始检索第一个'xxxx'的索引,若n=0,省略
##### d.频次检测
###### I.列表.count('xxx')-统计出现的次数
##### e.排序
###### I.列表.sort(key=none,reverse=False)——按照ASCII进行列表排序;默认是按照从小到大排序;reverse=True,从大到小进行排序;key=len,按照字符串长度排序;key接受函数——永久排序
###### II.sorted(iterable, *, key=None, reverse=False)——暂时排序,列表本身未发生任何变化
##### f.反转
###### I.列表.reverse()——反转数组的排序——永久修改但可复原
##### g.长度
###### I. len()函数——获取列表长度
##### h.数值列表的常见操作
###### I.max()函数:返回多个参数或一个可迭代对象中的最大值
###### II.min()函数:返回多个参数或一个可迭代对象中的最小值
###### III. sum(序列)函数:对一个序列中的项从左到右进行求和运算
##### i.循环中修改元素
##### while()对列表元素进行修改
#### 5.列表生成式(指令:`LIST_APPEND`指令)
##### 范式:list = \[f(value) for value in xxx if aaa\](表达式+范围+条件)
##### 范式:list=\[xxx for _ in xxx\](条件+循环次数)
#### 6. 嵌套列表-多维列表:建议使用内容范式遍历列表


### 元组——不可变类型(适合多线程环境,创建快)
#### 1.定义
##### 一元组:(x,)(注意:和()的区别)
##### 多元组:(x,y)
##### 空元组()
#### 2.运算
##### a.+(两个元组的拼接)
##### b.*(元组的乘法运算)
##### c.in not in(成员运算)
##### d.\[\](对元组的元素进行访问和修改|0~N-1|-N~-1)
##### e.\[start:end:strike\](切片运算对元组进行访问和修改)
###### I.end 不被包括
###### II.任何一个参数都可以为负数,理解方式:一维向量,向左为正,向右为负
##### f.关系运算(== != <= >=)(一个个元素进行比较)
#### 3.打包和解包操作
#### 打包:一个变量被赋多个值,自动变为元组
#### 解包
##### a. 普通模式:一个元组赋给对应个数的变量.当不等时,引发'valueerror'
##### b. 星号表达式:\*修饰的变量变成列表;\*表达式只能出现一次
#### 4.相互转化
##### list()|tuple()函数
#### 5.修改元组变量--无法直接修改元组元素的值,但是我们可以给变量赋新的元组|转换成列表后,再修改

### 字符串-(万国码下的字符)
#### 1. 转义字符:\n  \t \' \" \\ \r(回车符,回到行头)
#### 2.0 原始字符串,以"r"或"R"开头后+'xxxx'
#### 2.1 嵌套引号的使用-内外的引号不相同即可
#### 3. 字符的特殊表示方式: \ddd,\xdd-表示ASCII码对应的字符;\uxxx表示unicode码对应的字符
#### 4. 字符串的运算
##### I.拼接(+)\重复(*)\比较运算\成员运算\索引切片运算(不能修改，只能访问)
##### II.len()函数-获得字符串的长度
#### 5.遍历-两种范式
#### 6.字符串相关的方法
##### a.大小写操作
###### I.字符串.capitalize()方法——大写首字母
###### II.字符串.title()方法——大写每一个首字母
###### III.字符串.upper()方法——大写字符串
###### IV.字符串.lower()方法——小写字符串
##### b.查找操作
###### I.字符串.find('xxx',n)函数-从n位置开始向右查找'xxxx',如果find()函数找不到，返回-1
###### II.字符串.index('xxx',n)函数-从n位置开始向右查找'xxxx',如果找不到,报错
###### III.字符串.rfind('xxx',n)函数-从n位置开始向左查找'xxxx',如果find()函数找不到，返回-1
###### IV.字符串.rindex('xxx',n)函数-从n位置开始向左查找'xxxx',如果找不到,报错
##### c.性质判断 
###### I.字符串.startswith('xxx')函数-检查是否以'xxx'开头
###### II.字符串.endswith('xxx')函数-检查是否以'xxx'结尾
###### III.字符串.isdigit()函数——检查是否全是数字构成的
###### IV.字符串.isalpha()函数——检查是否全是字母(umicode字符但不包括emoji字符)构成的
###### V.字符串.isalnum()函数——检查是否是由数字和字母构成的
##### d.格式化字符串
###### I.字符串.center(width,fillchar)方法-用fillchar不足width的宽度,并且保持字符居中,若fillchar是  ,则可以省略
###### II.字符串.ljust(width,fillchar)方法-用fillchar不足width的宽度,并且保持字符靠最左,若fillchar是  ,则可以省略
###### III.字符串.rjust(width,fillchar)方法用fillchar不足width的宽度,并且保持字符靠最右,若fillchar是  ,则可以省略
###### IV.字符串.zfill(n)方法——在-(可以没有)和字符串之间的补n-len(字符串)个(n>len(字符串)
###### V.f字符串—f(format设置格式)
####### a1. "%格式化方法  "%(变量名)----类似于C语言
####### a2. "%格式化方法  "format(变量名)  
####### b0. f'{变量}xxx{变量}'
####### b. f'{变量名:占位符}'
####### c.f'{变量名=:占位符}'---'变量名='会输出
####### d.f'\033\[0m...\033\[0m'-控制输出内容的颜色:\033\[0m是一个控制码,表示关闭所有的属性
####### z. 占位符
######## :.nf——保留小数后n位小数
######## :+-.nf——带符号的小数后n位小数
######## :.0f-不带小数
######## :x>nd-左边补x,补够n位
######## :x<\nd-右边补x,补够n位
######## :,-逗号分隔格式
######## :.n%-n位百分数
######## :.ne-n位科学计数法的指数

##### e.删除操作
###### I.字符串.(l,r)strip('x')方法-(l-修建左端;r-修剪右端)修剪'x',默认是' '
###### II.字符串.removeprefix('xx')方法-删除特定的前缀——从开头开始识别.如果找不到前缀,就返回原字符串;若找得到,返回值为删除前缀的字符串
###### III.字符串.removesuffix('xx')方法—删除特定的后缀
##### f.替换操作
###### 字符串.replace(old,new,count)-将count个old替换为new.如果count数量>=old的数量.可以省略
##### g.拆分与合并
##### 字符串.split('x'=' ',n)函数——根据n个'x'进行拆分,默认是' ' 
##### 'xx'.join(字符串)函数—将字符串进行合并用'XX'
##### h.编码和解码
###### 字符串.encode(编码方式)——加密
###### 字符串.decode(编码方式)——解密
##### i.匹配方法——正则表达式


### 集合-set(成员运算优于列表,不支持索引运算,散列存储(哈希存储))
#### 1. 创建——必须都是hashable类型(可计算哈希码|不可变类型|集合无法嵌套)
##### a.{x}--x至少有一个
##### b.set()函数将其他序列转化为集合
##### c.生成式表达式
##### d.set()---空集
#### 2. 遍历
##### 范式: for i in 集合: print(i)
#### 3.集合的运算
##### a.成员运算(in not in)
##### b.二元运算(运算符===方法)
##### I.a&b === a.intersection(b)——交集
##### II.a|b === a.union(b)————并集
##### III.a-b === a.difference(b)——差集
##### IV.a^b === a.symmetric.difference(b)——对称差集(差集的并集)
##### V.a |=b ==== a.update(b) === a=a|b
##### VI.a&=b ==== a.intersection_update(b) === a=a&b
#### 4.比较运算(== !=)
##### I.a<\b  === a是b的真子集
##### II.a<=b=== a.issupset(b) ===a是b的子集
##### III.a>b ==== a是b的超集 ==== a.issupset(b)
##### IV.a>=b ==== a是b的真超集
#### 5. 集合的方法
##### a.添加删除元素(集合具有无序性)
###### 集合.add(元素)
###### 集合.discard(元素)
###### 集合.remove(元素)-使用需要检查元素是否在集合中，否则，可能引起错误
###### 集合.pop()——随机删除一个元素，并且返回这个元素
###### 集合.clear()-清空集合
##### b.判断是否有相同的元素—交集是否为空
###### 集合.isdisjoint(集合)——判断两个集合是否还有相同的元素

### 不可变集合——frozenset(可作为集合的元素)

### 字典——dictionary(键值对)(很类似于C语言的结构体)
#### 1. 创建(健是不可变类型,值是可变类型)(单行;多行)
##### a.{'健':'对'}
##### b.dict()函数生成
##### c.生成式语法{x:f(x) 创建条件}|{健:对 健对的检索条件}
##### 注意: 字典中键值对的顺序是有添加的顺序决定的
##### 常见情况: 一个对象的众多信息;众多对象的同种信息——建立映射关系
#### 2.遍历
#### 范式: for key in dict: print(dict\[key\])
#### 3.运算(健必须是hashable类型)
##### a.成员运算(判断健是否在字典中)
##### b.索引运算:字典\[健\]=值|可以通过索引进行添加键值对
#### 4.常见操作
##### a.获得值
###### I.字典.get(key,default=None)——通过健获得对应的值，如果没有对应的值，返回default(没有则显示None)
###### II.字典\[key\]---获得字典key键对应的值
##### b.删除键值对
###### I.dict.pop(键)——删除指定的键值对,返回对应的值
###### II.del dict\[key\]——删除dict中key和key对应的values;找不到返回KeyError错误
###### III.dict.clear()——清除所有键值对
##### c.遍历字典
###### I.常见范式(遍历字典,默认遍历键): for key in dict: print(f'{dict\[key\]}')
###### II.字典.items()——将健和值封装为二元组;遍历键值对范式: for key,values in dict.items():
###### III.字典.keys()——获得字典所有的健,返回包含dict中所有键的列表;遍历键范式:for key in dict.keys(): 
###### IV.字典.values()——获得字典所有的值,返回值列表;遍历范式:for value in dicr.values():  
###### V.特定顺序访问范式: for key in sorted(dict.keys()): 
##### d.dict.items(y)——x、y中都有的,更新为y;x只有y中有的的,添加到x
##### e.dict.popitem()——无输入函数,返回最后一组——二元组,找不到会返回KeyError错误
#### 5.嵌套
##### a.字典列表——由字典构成的列表——描述众多类似对象
##### b.由列表组成的字典——描述一个对象的某一个方面的众多信息——需要两层循环进行遍历
##### c.字典嵌套字典


## 文件
### 0. pathlib库 和 json模块(javascript objext nation)
#### Path类 
### 1. 打开文件
#### 范式1: 对象名=Path('文件名')(情景: 文件和py程序在通义目录下)
#### 范式2: .....=Path('当前目录的一个文件夹/../文件')(相对路径的情景: 文件在当前文件夹的子文件夹中)
#### 范式3: .....=Path('/../../文件)(绝对路径|windows中的'\'要改成'/')
### 2. 读取文件
#### 范式1: 整个变量=对象名.read_text(encoding=平台默认值, errors=strict)(读取整个文件)
#### 范式2: 行变量=整个变量.splitlines()--将整个文件转化为一系列的行;for line in 行变量: xxx(如果要处理文件的各行,就不需要strip())
### 3. 修改文件-删除行中的空格(或其他),并用循环和序列添加的方式储存
### 4. 写入文件
#### 范式: 对象.write_text(字符串)——其他类型的数据必须先转化为字符串(str())
#### 注意1:如果对象指向的路径下文件不存在,就创建
#### 注意2:多行内容通过'\n''\t'等转义字符,且要一次性传入
### 5.程序之间共享数据的简单方式
#### 存储范式1:json.dumps(content)---content是即将要转换为json格式的数据,整个函数返回一个字符串
#### 读取范式2:json.loads(content)---函数返回一个python对象
### 6.检查指定文件是否存在——对象.exits()方法--存在True;

## 内置函数
### 类型函数
#### type()函数: 对变量的类型进行检查
#### int()函数：
##### 1. 将一个数值(只取整数部分)转换成整数
##### 2. 将字符串(只能将数字字符直接转化成数字)转换成整数
##### 3. 可以指定进制进行理解
##### 4. True 为1,False 为0
#### bin()函数:整数转化为 0b开头的二进制字符串
#### hex()函数:整数转化为 0x开头的十六进制字符串
#### oct()函数:整数转化为 0o开头的八进制字符串
#### open()函数:打开一个文件并返回文件对象
#### float()函数:
##### 1. 整数直接转化为浮点数
##### 2. 浮点状的字符串转化为浮点数
#### str()函数:将指定的f对象转换成字符串形式,可以指定编码方式
#### chr()函数:整数（字符编码）--->unicode码对应的字符
#### ord()函数:字符------>对应的unicode码
#### bool()函数:
##### 1. 非零数都是True,0是False
##### 2. 字符串如果是''或者""就是F,如果是其他,就是T
#### list()函数:转化为列表类型
#### tuple()函数:转化为元组类型

### 输入输出函数
#### input(prompt(提示))函数:形参是字符串('xxx'或者字符串变量),返回值是字符串,经常和类型函数联用
#### print()函数
##### 输出范式print('字符串',变量,end(结束符)='\n',sep(分隔符)='')


### 计算函数
#### abs()函数:返回绝对值
#### pow(a,b)函数:a**b
### round(a,b)函数:按照指定的精度对数值进行四舍五入,得到b位小数的四舍五入的值

### range()函数——构造一个范围序列
#### range(start,end,step)<=====>i = start;i<\end;i+=step
##### 省略规则: start=0| step=1 可省略

### 列表相关
#### list()函数——列表对象的构造器
#### filter(条件,列表)函数——实现对序列元素的过滤
#### map(函数,列表)函数——实现对序列元素的映射

### len()函数——获得列表的长度

### set()函数——集合对象的构造器
#### 创建一个空集合
#### 将其他序列转化为集合

### zip(a,b)函数——将两个序列压缩，并且建立映射关系

### dict()函数——字典对象的构造器
#### 直接使用'变量名=变量内容'的方式构造
#### dict(zip(a,b))，并建立映射关系(键值关系)

### sortd()函数
#### 不修改源列表,返回排序后的列表对象(函数的无副作用设计)
#### 范式sort(列表,key=函数)——函数定义排序

### all()函数-如果列表中的所有布尔值都是True,则返回True

### id() 函数——用于获取对象的“身份”，即该对象在内存中的唯一标识符,可能是逻辑地址

## 库(模块)
### 使用方法
#### 1. import 库(模块) (as 别名)   模块(库).函数
#### 2. from 库(模块) import 函数1,函数2    函数(直接使用)
#### 3. from 库(模块) import 函数 (as 别名)  
#### 4.form 库(模块) import *   函数(可以直接使用,不适用点号)——不建议使用

### time模块
#### time.sleep(n)函数:表示睡眠n秒(n可以是整形或者浮点型)

### re模块——正则表达式

### timeit模块
#### timeit.timeit('xxxx',number=n)函数--执行n次某步骤需要的花费时间

### random模块
#### random.random()函数———生成[0,1)范围之内的浮点数
#### random.randrange(a,b)函数——[a,b)范围之内的整数
#### random.sample(序列,k)函数——从列表|元组中不放回地抽取k个参数
#### random.choice(序列,k=n)函数——从列表|元组中随机抽取1个,又放回的抽样,参数k是一个命名关键字参数,在传参时必须指定参数名
#### random.randint(a,b)函数——返回一个整数N---a<=N<=b

### math 模块
#### math.factorial()函数——实现阶乘

### string模块
#### a.字符串常量(不需要括号)
##### I.string.digits-'0123456789'
##### II.string.ascii_letters-'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'
##### III.string.ascii_uppercase-大写字母
##### IV.string.ascii_lowercase_小写字母

### statistics模块——统计信息

### operator模块
#### add()函数——加法
#### mul()函数——乘法

### functools模块
#### functools.reudce(运算函数,运算的数据,运算的初始值)——归约操作：列表转化为一个值
#### functools.partial
#### functools.wraps()——装饰器——装饰函数.\_\_wrapped\_\_()——得到修饰之前的函数
#### functools.lru_cache()——装饰器函数——避免递归工程中的大量重复运算

### sys模块
#### sys.setrecursionlimit(maxmize)函数——带参数有的修饰器函数,改变递归调用的最大深度,maxmize用来定义缓存空间的大小,默认值是128

### enum模块
#### enum.Enum类

## 自定义函数——某一项具体工作
### 1. 创建范式
#### def 函数名 (arg1(:类型),....)(->类型): 函数体  return 'sth'(否则,返回none) 
### 2. 参数
#### a.位置参数——函数(x,x,x)——参数必须关联到定义的形参的位置——顺序很重要
#### b.关键字参数——通过“参数名=参数值”的形式为函数传入参数——函数(形参n=x,形参m=y....)
#### c.强制位置参数--'\'--只能作为最后一个参数,必须按照顺序传参
#### d.命名关键字参数--'*'--只能作为第一个参数出现,必须按照匹配的方式传参
#### e.参数的默认值(定义函数时可以定义参数的默认值,带默认值的参数必须放在其他参数之后,可变参数表中不可有'\'，可以有'*')
#### f.参数:类型——————增加代码的可读性
#### g.可变参数——传入的参数的数量可变——使用星号表达式
##### I.*变量—保存到元组中-位置传参
##### II.*变量1,**变量2——(顺序)可变关键字参数传给变量2(参数名是键,参数值是值|变量2是字典),纯参数传给变量1,形成元组
##### III.普通变量,*args——第一个形参传给普通变量,可能存在的第二个,以及其他的传给变量args,形成元组
##### IV.普通变量,**kwargs——位置实参和不确定数量的关键字实参
##### V.普通变量,*args,**kwargs——普通变量,不确定数量的位置参数,不确定数量的关键字参数
#### h.列表参数
##### I.列表传入函数——对列表进行永久性地修改
##### II.副本列表参数   func(list\[:\])——不改变列表
### 3.模块module(文件)-完全限定名(模块名.函数名)
#### 范式1: import xxxx (as yyyy)  xxx.函数
#### 范式2: from xxxx import 函数 as(别名)
#### 注意:同名函数 以下为准
### 4.返回值-return :简单值|字典|列表
### 5.高阶函数——将函数作为参数传入函数,或者传出
### 6.Lambda函数(匿名函数):使用高阶函数的时候(参数或者返回值|一行代码|不考虑复用)
#### 范式:lambda x:f(x)
#### 7.偏函数——固定一些参数——鲁棒性分析??——新函数
##### functools.partial(函数,参数)
#### 8.装饰器:用一个函数装饰另外一个函数并为其提供额外的能力(嵌套定义函数——C表示羡慕的死死的)
##### I.使用装饰器函数的返回函数
##### II.语法糖——用@装饰器函数将装饰器函数直接放在被装饰的函数上
##### III.__wrapped__的求修饰
##### IV.修饰器函数本身可以可以参数化
#### 9.递归调用
##### 范式: 递归收敛条件+递归公式——if(收敛条件): xxx else:  函数()
##### 原理:(栈——先进后出)每进入一个函数调用,栈就会增加一层栈帧(stack frame),栈帧就是我们刚才提到的保存当前代码执行现场的结构:每当函数调用结束后,栈就会减少一层栈帧
##### 注意:递归调用一定要确保能够快速收敛,否则将会stackflow
##### CPython解释器——递归深度为1000
##### 如果无法实现快速递归,可以考虑循环递推(迭代)


## 异常(traceback包含异常的报告)(try-except代码块处理的)
### `ZeroDivisionError`错误——除以0
### `nameerror`错误——未赋值;拼写错误
### `IndexError`错误——索引错误——解决:由于列表的动态变化,索引变化,打印出列表进行检查
### `ValueError`错误——查找不存在|元素个数和变量个数不匹配
### `TypeError`错误——类型错误——修改常量的数据|形参和实参不匹配
### `UnicodeDecodeError`错误-加解密方式不统一
### `KeyError`异常——索引健但缺少指定的值
### `SyntaxError`错误——语法错误——没有":";没有默认值的参数放在了带默认值的参数后面
### `RecursionError`错误———Stack Flow
### `AttributeError`异常——属性错误
### `IndentationError`错误--缩进错误
### ` FileNotFoundError`异常--try_except模块处理
### if-try-except-else代码块
#### try:xxx (可能引发异常的代码)
#### except yyyError: zzz ——(通过traceback编写|pass-保持静默)
#### else: 

## 处理数据常用方法: functools.reduce(归约),map(映射),filter(过滤)

## 编程范式
### 面向过程编程(OPP)
### 面向对象编程(OOP):定义类——创建对象——给对象发消息|数据抽象和行为抽象
#### 1.理解:
##### 0.总体
###### 把一组数据和处理数据的方法组成**对象**，把行为相同的对象归纳为**类**，通过**封装**隐藏对象的内部细节，通过**继承**实现类的特化和泛化，通过**多态**实现基于对象类型的动态分派
##### a.对象(object)
###### I.一组数据和处理数据的方法
###### II.面向对象的世界中,一切皆为对象
###### III. 对象的属性通常是私有(private)或者受保护(protected)的成员,方法通常是公开的(public)
##### b.类(class)
###### I.行为相同的对象的归纳
##### c.辩证关系:类是对象的蓝图和模板,对象是类的实例,是可以接受消息的实体,对象一定属于某一个类
#### 2.类
##### a.定义类
###### I.范式: class 类名(父类):  def 方法名(self,参数):---(方法是对象的行为,可以接受的消息)
##### b.静态方法和类方法——给类对象的消息                   
###### 范式:@staticmethmod 方法——静态方法
###### 范式:@classmethod 方法——类方法
###### 区别:对象方法调用的第一个参数:普通对象,类方法的第一个参数:类对象;静态方法的调用的第一个参数:没有接受消息的对象
##### c.装饰器@property 方法——像调用属性一样调用方法
##### d.方法之间的相互调用——范式:self.方法(参数)
#### 3.对象
##### a.实例化(创建对象)——构造器语法:变量名=类名(属性)——变量名实际是对象在内存中的逻辑位置
##### b.访问属性:  对象.属性
##### c.调用方法: 
###### I.范式1:类.方法(对象,方法的参数)
###### II.范式2:对象.方法(方法参数) 
##### d.属性的初始化
###### I.\_init\_(self,参数):self.属性1=参数 ——为对象指定值——python创建实例自动运行的方法
###### 注意:实例化:根据类建立对象|属性:可以通过实例访问的变量|属性参数与函数参数一样有很多变化方式
###### II.给属性指定默认值:直接初始化,不接受参数输入
###### III.类中所有方法想要调用属性参数——需要传入self参数
###### IV._参数(受保护属性)(其他类可以访问,外部可访问)  __参数(私有属性)(其他类一般不能访问)
###### 补充: 强制访问私有属性——名称改写:_ClassName__private_member
###### V.动态属性(动态为对象添加属性)——动态语言的特性
###### 范式:对象.属性=内容
###### 如果不希望动态添加属性,可以使用 \_\_slots\_\_魔法;范式: class 类名: \_\_slots\_\_=('属性1','属性2')
##### e.修改属性的值
###### I.范式1: 对象.属性=XXXX
###### II.范式2: 编写方法辅助更新属性(包括重置,更新)
##### f.方法的链式调用(前一个有返回值值)
#### 4.面向对象编程的三大特点
##### a.封装(encapsulation)
###### I.隐藏函数内部一切可以隐藏的实现细节,只向外部暴露简单的调用接口
###### II.只知道方法的名字和参数,隐藏方法的内部实现细节
##### b.继承(inheritance)——通过多重继承实现复杂层递的角色设计
###### I.实现类的特化和泛化
###### II.父类(超类,基类)——>子类(派生类,衍生类)
###### III.定义一个类时,未指定父类,默认认为时object类;允许多重继承
###### IV.继承范式: class 子类(父类):
###### V.调用父类初始化方法:范式:super().\_\_init\_\_(属性参数)-----在超类的基础上初始化;类的范式: class 类名(父类名):
###### VI.里氏替换原则(Liskov Substitution Principle)——子类可以继承父类的属性和方法,也有自己的属性和方法.开发时用子类对象去替换掉一个父类对
###### VII.方法重写:直接重写;子类方法将覆盖父类的方法
###### VIII.组合——将大类拆解为小类的组合---将小类的实例作为大类的属性;范式: self.属性名=小类()
##### c.多态(polymorphism)
###### I.基于对象类型的动态分派
###### II.继承相同的父类,对相同的方法进行不同程度的重写,完成不同的任务
#### 5.内置对象(已经存在的对象,只需要给对象发消息)
#### 6.类之间的关系:is-a关系(继承|泛化),has-a关系(关联),use-s关系(依赖)
#### 7. 类|模块的导入
##### 范式1: from 模块 import 类1(as 别名),类2...(继承时推荐)
##### 范式2: import 模块 as 别名
##### 范式3: from  模块 import *——不推荐:无法指出导入什么类,名称冲突

## 测试
### 0.pytest库
### 1.单元测试(函数的某个方面没有问题)——测试用例(一组测试用例)——全覆盖测试
### 2.测试文件(test_xxx):测试函数- def test_xxx(): 断言(声称满足特定条件)
### 3.测试类:在测试函数中测试
### 4.夹具:@pytest.fixture 函数——>可供多个测试使用的资源——> 消除重复
#### 注意: 大项目比较适合|形参和函数名相同|

## 编辑器——语法高亮

## python之禅:(import this)
### 基本原则: 可读,可行
#### +可读:注释(多一点注释,为函数,类,方法写明功能);名称(变量,函数等标识符处的命名合理)
#### 可行:最终能够解决实际问题,并且可以被他人使用(最初,可以从简洁的功能做起,最终实现整个功能)
### 进阶原则: 可读,简约
#### 可读: 名称尽量简洁能懂,注释简洁明白
#### 简约: 代码删繁就简,交互性更好,简洁,干净的输出

##  PEP8(Python Enhancement Proposal)
### 缩进:4个空格
### 行长:注释行长不超过72个字符,每行不超过80个字符
### 空行:使代码看起来整洁，不同功能区之间建议使用
### 条件测试:运算符附近空一格
### 函数:
#### 1. 描述性名称(小写字母和下划线)
#### 2. 阐释功能的注释
#### 3. 形参或者关键字参数的等号附近无空格
#### 4. 函数之间建议空两行
#### 5. 所有的import语句放开头
#### 6. 开头描述整个程序
### 类:
#### 1. 驼峰命名法:类名的每个单词的首字母大写，不使用下划线
#### 2. 对象和模块名全小写且单词之间使用下划线
#### 3. 每个类之后,都有文档字符串——描述类的功能
#### 4. 每个模块需要文档字符串
#### 5. 空行: 类的方法之间使用一个空行;模块的类之间使用两个空行
#### 6. 导入库: 先导入标准库,一个空行,再导入自己的模块
### 重构:代码能正常运行之后,将其划分为一系列的函数进行改进