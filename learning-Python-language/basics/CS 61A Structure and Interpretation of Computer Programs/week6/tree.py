"""构造数据抽象——树"""
def tree(root,branches=[]):
    for branch in branches:
        assert  is_tree(branch)
        # check if it is tree 
    return [root]+list(branches)
# combine root and branches 
# - root
# - branches
#           - root
#           - branches

def label(tree):
    return tree[0]

def branches(tree):
    return tree[1:]
    
def is_tree(tree):
    if type(tree)!=list or len(tree)<1: 
        # 检查是否是列表以及树的长度是否为0，树的定义是列表且非空
        return False
    else:
        for branch in branches(tree):
            # check all not empty branches
            if not is_tree(branch):
                return False 
    return True

def is_leaf(tree):
    """分支是空的"""
    return not branches(tree)