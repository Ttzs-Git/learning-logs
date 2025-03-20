## 熟食店
import time

### 点好的三明治列表,正在制作的三明治列表
sandwich_orders=['aaaa','bbbb','cccc','dddd','eeee']
finished_sandwicher=[]

### 制作三明治
i = 0
while i<len(sandwich_orders):
    time.sleep(1)
    print(f'{sandwich_orders[i].title()}, I made your tuna sandwich')
    finished_sandwicher.append(sandwich_orders.pop(i))
    i+=1

### 宣布所有的三明治已经做好
for sandwich in finished_sandwicher:
    print(f'{sandwich} 已经做好了')