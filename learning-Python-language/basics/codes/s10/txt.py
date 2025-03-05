## 输入两个数
x1=input('请输入一个数: ')
x2=input('请输入两个数: ')

## 
try:
    x1=int(x1)
    x2=int(x2)
except TypeError and ValueError:
    print(f'请不要输入除数字以外的东西')
else:
    print(f'{x1+x2}')