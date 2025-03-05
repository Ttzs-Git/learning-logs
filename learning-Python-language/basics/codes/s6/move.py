## 初始化外星人+显示当前的坐标
alien={'x':0,'y':25,'speed':'med'}
print(f'现在外星人的坐标({alien['x']},{alien['y']})')

## 当前改变
if alien['speed'] == 'med':
    alien['x'] += 1
elif alien['speed'] == 'slow':
    alien['x'] += 2
else:
    alien['x'] += 3

## 显示当前的坐标 
print(f'现在外星人的坐标({alien['x']},{alien['y']})')

## 添加元素
alien['point']=5
alien['colour']='green'
alien['xxxx']='yyyy'

## 删除元素
del alien['xxxx']

## 打印字典,表明已删除成功
print(alien)