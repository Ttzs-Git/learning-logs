def race(x,y):
    """
    解决龟兔赛跑问题
    """
    # This is my solution after thinking
    # assert y>x and y<=2*x
    # return 5*y/x
    # This is similar with how to run
    assert y>x and y<=2*x
    tort,here,minu=0,0,0
    while True:
        tort+=x
        if(minu%10<5):
            here +=y
        minu+=1
        if not(tort-here):
            break            
    return minu

def fizzbuzz(n):
    """
    >>> result = fizzbuzz(16)
    1
    2
    fizz
    4
    buzz
    fizz
    7
    8
    fizz
    buzz
    11
    fizz
    13
    14
    fizzbuzz
    16
    >>> print(result)
    None
    """
    "*** YOUR CODE HERE ***"
    for i in range(1,n+1):
        if(i%3==0 and i%5==0):
            print('fizzbuzz')
        elif i%3==0:
            print('fizz')
        elif i%5==0:
            print('buzz')
        else:
            print(i)

def is_prime(n):
    """
    遍历1~n,只有1和n能被整除,否则就不是质数
    """
    k=int(n**0.5)
    if(n==1):
        return False
    for i in range(2,k+1):
        if(n%i==0):
            return False
    return True

def has_digit(n,k):
    assert k>=0 and k<10
    # return str(k) in str(n)
    while n:
        if(n%10==k):
            return True
        else:
            n=n//10
    return False       


def unique_digits(n):
    num = 0
    for i in range(10):
        if has_digit(n,i):
            num+=1
    return num