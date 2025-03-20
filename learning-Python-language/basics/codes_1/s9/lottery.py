import string
import random

def lottery_ticket():
    """制作彩票"""
    num=list(range(10))
    upper=list(string.ascii_uppercase)
    result=[]
    for _ in range(4):
        result.append(random.choice(num+upper))
    return result


def times(target):
    """蒙特卡洛模拟——测试彩票中奖的概率"""
    time=1
    result=lottery_ticket()
    while result != target:
        result = lottery_ticket()
        time += 1
    return 1/time



### 调用函数
a=lottery_ticket()
print(f'如果你的彩票是{a},你就中大奖了！！！')
print(f'上述彩票中奖的概率约为{times(a):.10f}')