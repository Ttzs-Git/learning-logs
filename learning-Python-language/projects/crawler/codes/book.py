import requests
from bs4 import BeautifulSoup

## 发送请求
head ={"User-Agent":"Mozilla/5.0(Windows NT 10.0; Win64;x64)"}
## 可以用来伪装成浏览器请求
response = requests.get("http://books.toscrape.com",headers = head)
## 自动生成请求行的部分和请求头


# print(response)

# ## 打印状态码
# print(response.status_code)

## 检查状态码
if response.ok:
    ## 以字符串储存相应的内容
    # print(response.text)
    ## 返回网页源码
    
    soup =  BeautifulSoup(response.text,"html.parser")
    # ## 寻找指定对象 
    # all_prices = soup.find_all("p",attrs={"class":"price_color"})
    # ## 打印价格 过略标签
    # for price in all_prices:
    #     ## 返回标签包围的文字 且过率货币
    #     print(price.string[2:])
    all_titles = soup.findAll("h3")
    for titles in all_titles:
        # all_links = titles.findAll("a")
        link = titles.find("a")
        ## 返回第一个元素,不是可迭代对象
        # for link in all_links:
        print(link.string)
else:
    print(f'请求失败')