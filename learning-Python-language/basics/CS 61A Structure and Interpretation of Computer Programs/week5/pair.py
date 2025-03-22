def pair(x,y):
    """二元的数据序列"""
    def get(index):
        if index==0:
            return x
        else:
            return y
    return get

def select(p,i):
    return p(i)