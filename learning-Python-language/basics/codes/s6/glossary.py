## 词汇表的创建
words={'Python':'高级程序语言','list':'列表','dictory':'字典','string':'字符串','key':'键'}

## 打印词汇表
for key in words:
    print(f'\t{key}:{words[key]}')

## 删除最后一个键值对
lawd=words.pop('key')
print(lawd)