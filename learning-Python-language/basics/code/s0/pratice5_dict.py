## 超级难的字典
### **例子1**：输入一段话，统计每个英文字母出现的次数，按出现次数从高到低输出。
# s = input('输入一段话，我将统计其中的字母： ')
# dict={}
# for i in s:
#     if 'a'<=i<='z' or 'A'<=i<='Z':
#         dict[i]=dict.get(i,0)+1
# ks=sorted(dict, key=dict.get, reverse=True)## 列表
# for i in ks:
#     print(i,dict[i])


### **例子2**：在一个字典中保存了股票的代码和价格，找出股价大于100元的股票并创建一个新的字典。
stocks = {
    'AAPL': 191.88,
    'GOOG': 1186.96,
    'IBM': 149.24,
    'ORCL': 48.44,
    'ACN': 166.89,
    'FB': 208.09,
    'SYMC': 21.29
}
sks={x:stocks[x]  for x in stocks if stocks[x]>100}
for i in sks:
    print(i,sks[i])