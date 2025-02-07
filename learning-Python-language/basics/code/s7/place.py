## 调查度假胜地
flag = True
message={}
while flag:
    ## 创建字典
    ## 添加字典元素:name place    
    name = input('请输入你的名字: ')
    place=input('If you could visit one place in the world,where would you go?  ')
    message[name]=place
    print(f'{message[name]}')
    ass=input(' 是否还有其他人接受调查(y/n): ')
    if ass == 'y':
        flag = True
    else:
        flag = False
print(f'-------Poll Results------')
## 遍历调查结果
for name, place in message.items():
    print(f'{name}:{place}')
    
