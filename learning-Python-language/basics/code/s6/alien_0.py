## 创建一个外星人字典+打印
alien_0={'colour':'green', 'points':5}
print(alien_0['colour'])
print(alien_0['points'])

## 添加元素：x,y
alien_0['x']=0
alien_0['y']=25

## 遍历字典
for item in alien_0:
    print(f'{item}={alien_0[item]}')

## 创建一个空字典
lien={}
print(lien)