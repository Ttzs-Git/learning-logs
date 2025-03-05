## 创建列表+朋友列表
pizzas=['fruit','vegatables','meat']
friend_pizzas=pizzas[:]

## 向不同列表中添加东西不同——检验列表是赋值
pizzas.append('guge')
friend_pizzas.append('sasa')

## 遍历列表
for pizza in pizzas:
    print(f'I like {pizza}')
for pizza in friend_pizzas:
    print(f'My friend lovs {pizza}')
print(f'I really love pizza') 

## 打印整个列表,看看有多少元素
print(pizzas)
## ['fruit', 'vegatables', 'meat', 'guge']

### 切片运算
### 第一个切片
print(pizzas[0:3:1])
## 第二个切片
print(pizzas[1:4:])
