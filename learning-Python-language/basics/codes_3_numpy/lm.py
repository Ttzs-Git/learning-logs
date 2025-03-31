def count(n):
    # 计算n中有多少1
    if(n==1):
        return 1
    elif (n==0):
        return 0
    elif (n%10==1):
        return 1+count(n//10)
    else:
        return 0 +count(n//10)

def count1(n):
    s=str(n)
    m=list()

n=int(input("请输入n: \n"))
# 计数
m=0 
for i in range(1,n+1):
    # 循环从1~n
    m+=count(i)
print(m)