### 列表存储5个地方
place=['White House','Himalayas','British museum','Panama canal','Mariana Trench']
### 打印
for i in place:
    print(i)
## 打印排序后的列表 
print(sorted(place))
### 确认暂时排列
print(place)
# 字符反序打印
print(sorted(place,reverse=True))
### 逆转列表
place.reverse()
print(place)
## 还原列表
place.reverse()
print(place)
### 真实改变列表,是列表按字母排序
place.sort()
print(place)
place.sort(reverse=True)
print(place)
### 尝试引发索引错误
print(len(place))
print(place[-5])