## 默认值的测试
def test(name,type='dog'):
    """副作用:说出动物的类型和名字"""
    print(f'{name.title()} is a {type}')

test('ANy')