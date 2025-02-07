### 喜欢的数字
numbers = {
    'aaa':[1,2,3,4],
    'bbb':[3,3,3,3],
    'ccc':[4,4,6],
    'ddd':[],
}

### 遍历
for name in numbers:
    if numbers[name]:
        for item in numbers[name]:
            print(f'{item}是{name}喜欢的数字')
        print('\n')
    else:
        print(f'{name}不喜欢数字')    