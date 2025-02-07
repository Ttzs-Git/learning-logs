from pathlib import Path

path=Path('name.txt')
des=input('是否还有下一位访客(y/n):  ')
list=''
while des == 'y':
    name = input('访客请输入你的名字:  ')
    list+=name+'\n'
    des=input('是否还有下一位访客(y/n):  ')

path.write_text(list) 
