from random import randint

class Die:
    """制作骰子"""
    def __init__(self,sides=6,times=10):
        """初始化面数和投掷的次数"""
        self.sides=sides
        self.times=times

    def roll_die(self):
        """给出骰子的结果"""
        print(f'投掷{self.sides}面骰子的结果是{randint(1,self.sides)}')

    def times_roll(self):
        """多次投掷"""
        for time in range(self.times):
            self.roll_die()

### 调用类——制作一个6面骰子并投掷10次
six=Die(6)
six.times_roll()

### 制作20面
twn=Die(20)
twn.times_roll()
    