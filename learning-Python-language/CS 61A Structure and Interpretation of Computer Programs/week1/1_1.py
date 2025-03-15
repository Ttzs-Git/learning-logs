# 从莎士比亚的文集中导入内容,打印其中正反文字都在的单词
from urllib.request import urlopen
shashark=urlopen("https://www.composingprograms.com/shakespeare.txt")
word = set(shashark.read().decode().split())
text=[w for w in word if len(w)==6 and w[::-1] in word]
print(text)