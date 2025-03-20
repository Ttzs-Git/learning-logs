class User:
    """用户类:属性包含名字和生日|尝试登陆的属性;方法:描述信息+打招呼"""
    def __init__(self,first_name,last_name=0,*birthday,**kwargs):
        """接受名和字,接受生日"""
        self.name=f'{first_name.title()} {last_name.title()}'
        self.birthday=birthday
        self.login_attempts=0

    def describe_user(self):
        """描述信息"""
        print(f'用户名称为{self.name} ,用户的生日是: ',end='')
        for item in self.birthday:
            print(f'{item}',end='')
            i=0
            i+=1
            if i!=2:
                print('/',end='')
        
    def greet_user(self):
        """打招呼"""
        print(f'\n尊敬的{self.name} 欢迎来到Ttzs...')

    def increment_login_attempts(self):
        """登陆尝试"""
        self.login_attempts+=1

    def rest_login_attempts(self):
        """重置登录次数"""
        self.login_attempts=0

### 创建对象
Ttzs=User('T','tzs',2000,12,12)
Ttzs.describe_user()
Ttzs.greet_user()

### 尝试登录
Ttzs.increment_login_attempts()
Ttzs.increment_login_attempts()
Ttzs.increment_login_attempts()
Ttzs.increment_login_attempts()

### 打印尝试次数
print(Ttzs.login_attempts)

### 重置次数
Ttzs.rest_login_attempts()

### 检查是否重置
print(Ttzs.login_attempts)