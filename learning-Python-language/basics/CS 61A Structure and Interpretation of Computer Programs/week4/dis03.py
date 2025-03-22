def swipe(n):
    """Print the digits of n, one per line, first backward then forward.

    >>> swipe(2837)
    7
    3
    8
    2
    8
    3
    7
    """
    if n < 10:
        print(n)
    else:
        "*** YOUR CODE HERE ***"
        print(n%10)
        swipe(n//10)
        print(n%10)

def skip_factorial(n):
    """Return the product of positive integers n * (n - 2) * (n - 4) * ...

    >>> skip_factorial(5) # 5 * 3 * 1
    15
    >>> skip_factorial(8) # 8 * 6 * 4 * 2
    384
    """
    if n==1 or n==2:
        return n
    else:
        return n * skip_factorial(n - 2)

# def f(x,y):
#     """x的质数检测函数"""
#     if x==2:
#         return True
#     elif x%y==0 or x==1:
#         # 存在因子
#         return False
#     elif x%y!=0 and y==2:
#         return True
#     else:
#         # y不是x的因子，继续向深处递归
#         return True and f(x,y-1)
    

 

# def is_prime(n):
#     """Returns True if n is a prime number and False otherwise.
#     >>> is_prime(2)
#     True
#     >>> is_prime(16)
#     False
#     >>> is_prime(521)
#     True
#     """
#     "*** YOUR CODE HERE ***"
#     if f(n,n-1):
#         return True
#     else:
#         return False

def is_prime(n):
    """Returns True if n is a prime number and False otherwise.
    >>> is_prime(2)
    True
    >>> is_prime(16)
    False
    >>> is_prime(521)
    True
    """
    # write a function inner to show the power
    def is_all(i):
        # check if all the number is not your factor
        if i>n**0.5:
            return True
        elif n%i==0:
            return False
        return is_all(i+1)
    return is_all(2) 
    
def hailstone(n):
    """Print out the hailstone sequence starting at n, 
    and return the number of elements in the sequence.
    >>> a = hailstone(10)
    10
    5
    16
    8
    4
    2
    1
    >>> a
    7
    >>> b = hailstone(1)
    1
    >>> b
    1
    """
    print(n)
    if n % 2 == 0:
        return even(n)
    else:
        return odd(n)

def even(n):
    return hailstone(n//2)+1

def odd(n):
    "*** YOUR CODE HERE ***"
    if n==1:
        return 1 
    else:
        return hailstone(3*n+1)+1

def sevens(n, k):
    """Return the (clockwise) position of who says n among k players.

    >>> sevens(2, 5)
    2
    >>> sevens(6, 5)
    1
    >>> sevens(7, 5)
    2
    >>> sevens(8, 5)
    1
    >>> sevens(9, 5)
    5
    >>> sevens(18, 5)
    2
    """
    def f(i, who, direction):
        # print(i,who,direction)
        if i == n:
            return who
        "*** YOUR CODE HERE ***"
        # if has_seven(i) or i%7==0:
        #     direction=-1*direction
        #     if (who+direction)%k!=0:
        #         return f(i+1,(who+direction)%k,direction)
        #     else:
        #         return f(i+1,k,direction)
        # else:
        #     # normal condition
        #     if (who+direction)%k!=0:
        #         return f(i+1,(who+direction)%k,direction)
        #     else:
        #         return f(i+1,k,direction)
        # optimize my codes
        if has_seven(i) or i%7==0:
            direction=-1*direction
        who = who+direction
        # keep in [1,k] 
        if who>k:
            who=1
        if who<1:
            who = k
        return f(i+1,who,direction)
    return f(1, 1, 1)

def has_seven(n):
    if n == 0:
        return False
    elif n % 10 == 7:
        return True
    else:
        return has_seven(n // 10)