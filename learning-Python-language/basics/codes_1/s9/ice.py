from  restaurant import Restaurant 

class Ice_Restaurant(Restaurant):
    """继承餐厅的类+添加冰淇淋的口味的属性+展示口味的方法"""
    def __init__(self,restaurant_name,cuisine_type,*flavors):
        """继承餐厅的属性参数,添加口味的参数"""
        super().__init__(restaurant_name,cuisine_type)
        self.flavors=flavors

    def show(self):
        """展示冰淇凌的口味"""
        print(f'这是我们店的冰淇凌口味:  ')
        for item in self.flavors:
            print(f'\t{item}')

### 实例化
ice=Ice_Restaurant('ICE','ice_cream','FRUIT','VERS')
ice.show()    