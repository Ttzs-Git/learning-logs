from operator import abs
def improve(upgrate,close,guess=1):
    """迭代求精"""
    while not close(guess):
        guess=upgrate(guess)
    return guess

def eq(guess,true_num,tol=1e-15):
    return abs(guess-true_num)<tol