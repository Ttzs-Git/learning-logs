"""使用追踪装饰器"""
def trace(f):
    def wrapped(x):
        print('->',f,'(',x,')')
        return f(x)
    return wrapped

@trace
def cube(x):
    return x**3
