s=input().lower() # 改为小写
for i in ",.;?:\'()\"-":
    s=s.replace(i," ") # 删除表颠符号 
ls=s.split() # 分割出单词
wd=dict() # 启动字典
for word in ls:
    if(word not in wd): 
        wd[word]=0 
    wd[word]=wd[word]+1  # 计数模块
wd=sorted(wd.items(),key=lambda x:x[0]) # 按照unicode排序
i=len(wd)
for key,val in wd:
    print(f"'{key}':{val}",end="") # 输出
    i=i-1
    if(not i): 
        print('')
    else:
        print(end=",")
wd=sorted(wd,key=lambda x:(x[1],x[0]),reverse=True) # 按照次数和unicode排序
b=()
a=[]
for i in wd[0:5]:
    b=(i[1],i[0])# 目的: 交换次数和单词的位置
    a.append(b)
print(a)