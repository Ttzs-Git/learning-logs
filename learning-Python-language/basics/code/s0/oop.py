## 类
# class student:
#     def __init__(self,name,age):
#         self._name = name
#         self.__age = age
#     def study(self,course):
#         print(f'正在上{course}')
#     def play(self,game):
#         print(f'正在{game}')
#
# stu1=student('猫猫',17)
# stu1.study('Python')
# print(stu1._student__name)
# class Student:
#
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#
#
# stu = Student('王大锤', 20)
# stu.sex = '男'

# ### 案例一: 定义一个类描述数字时钟
# import time
# class clock:
#     def __init__(self,hou=0,min=9,sec=0):
#         self.sec = sec
#         self.min = min
#         self.hou = hou
#     def run(self):
#         self.sec += 1
#         if self.sec == 60:
#             self.sec = 0
#             self.min+=1
#             if self.min==60:
#                 self.min=0
#                 self.hou+=1
#                 if self.hou==24:
#                     self.hou=0
#     def show(self):
#         print(f'{self.hou:02d}:{self.min:02d}:{self.sec:02d}')
#
# now=clock(17,58,49)
# while True:
#     now.run()
#     time.sleep(1)
#     now.show()

# ## 案例2:定义一个类描述平面上的短板,要求提供计算到另外一个点的计算方法
# class Point:
#     def __init__(self,x,y):
#         self.x = x
#         self.y = y
#     def distance(self,other):
#         return ((self.x - other.x) ** 2 + (self.y - other.y) ** 2)**0.5
#
# p1=Point(1,2)
# print(p1)
# p2=Point(3,4)
# print(Point.distance(p1,p2))

# class tri():
#     __slots__=('x','y','z')
#     def __init__(self,x,y,z):
#         self.x = x
#         self.y = y
#         self.z = z
#     @staticmethod
#     def check(x,y,z):
#         return x+y>z and x+z>y and y+z>x
#
#     @property
#     def c(self):
#         return self.x+self.y+self.z
#     @property
#     def s(self):
#         p=(self.x+self.y+self.z)/2
#         return (p*(p-self.x)*(p-self.y)*(p-self.z))**0.5
# tri1=tri(3,4,5)
# print(tri1.c)

### 继承
class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
    def sleep(self):
        print("Sleeping...")
    def eat(self):
        print("Eating...")

class Student(Person):
    def __init__(self, name, age, score):
        super().__init__(name, age)
        self.score = score
    def study(self):
        print("Studying...")
class Teacher(Person):
    def __init__(self, name, age):
        super().__init__(name, age)
    def teach(self):
        print("Teaching...")

class son(Student):
    def __init__(self, name, age, score):
        super().__init__(name, age, score)
st1=Student("xxx", 26, 90)
te1=Teacher('ss',50)
s1=son('ssss',20,22)
s1.study()
