## 创建宠物列表
pet1={
    'type':'dog',
    'master':'aaa'
}
pet2={
    'type':'cat',
    'master':'hhh',
}
pets=[pet1,pet2]

## 遍历列表
for pet in pets:
    for key in pet:
        print(f'{key}:{pet[key]}')
    print('\n')


