class Employee:
    """初始化姓名+年薪++默认增加年薪5000接受其他年薪的增量"""
    def __init__(self,sufname,name,salary):
        self.name=f'{sufname} {name}'.title()
        self.salary=salary
    
    def give_raise(self,ad=0.5):
        """加薪"""
        self.salary += ad
    
