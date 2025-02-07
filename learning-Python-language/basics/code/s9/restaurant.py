class Restaurant:
    """一个餐厅的类"""
    def __init__(self,restaurant_name,cuisine_type):
        """初始化属性"""
        self.restaurant_name=restaurant_name
        self.cuisine_name=cuisine_type
    
    def describe_restaurant(self):
        """打印两项信息"""
        print(f'餐厅的名字是{self.restaurant_name},菜系为{self.cuisine_name}')

    def open_restaurant(self):
        """指出餐厅正在营业"""
        print(f'欢迎新老客户前来品尝')


### 调用函数
KFC= Restaurant('KFC','HHH')
KFC.open_restaurant()
Restaurant.describe_restaurant(KFC)