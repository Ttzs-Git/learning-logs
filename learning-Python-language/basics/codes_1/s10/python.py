from pathlib import Path

## 导入文件并转化为行
path=Path('python.txt')
content=path.read_text()
lines=content.splitlines()

## 输出
print(f'{lines}')

## 行输出+储存在列表中
li=[]
for line in lines:
    li+=line
    print(f'In Python, I can {line}')
 