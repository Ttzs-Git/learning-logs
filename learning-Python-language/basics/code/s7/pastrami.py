### 创建熏牛肉的列表
pastramis=['pastrami' for _ in range(5)]

## 打印一条消息:肉卖完了
print(f'肉卖完了')

## 删除列表中的肉
while ('pastrami' in pastramis):
    pastramis.remove('pastrami')

### 展示删除结果
print(pastramis)

