def get_formatted_name(first,last,middle=''):
    """生成格式规范的姓名"""    
    if middle:
        full_name = f"{first} {middle} {last}"    
        return full_name.title()
    else:
        return f'{first} {last}'.title()

def test_get_name():
    """测试是否正常处理'Ttzs'"""
    name=get_formatted_name('T','xxx','tzs')
    assert name == 'T Tzs xxx'.title()