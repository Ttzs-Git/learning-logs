## 人们列表的两个对象
zz = {'name':'xxx','age':19,'location':'chin'}
xx = {'name':'yyy','age':20,'location':'asdas'}

## 创建列表
people=[zz,xx]

## 遍历字典列表
for person in people:
    for key in person:
        print(f'{key}:{person[key]}')
    print('\n')    
