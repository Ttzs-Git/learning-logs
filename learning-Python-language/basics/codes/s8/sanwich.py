def make_s(*topping):
    """接受一系列食材,制作三明治"""
    print(f'三明治中有:  ')
    for item in topping:
        print(f'\t{item}')
    
## 调用函数
make_s('tomato','potato','cheese')
