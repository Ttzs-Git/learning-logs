empty='empty'
def link(first,rest):
    """链表生成函数"""
    assert is_link(rest)
    return [first,rest]

def first(link):
    """选择器:选择第一个内容"""
    assert is_link(link)
    assert link!=empty
    return link[0]

def rest(link):
    """选择器:选择第二个内容"""
    assert is_link(link)
    assert link!=empty
    return link[1]

def is_link(link):
    return link==empty or (len(link)==2 and is_link(link[1]))