import requests
from bs4 import BeautifulSoup

## 获得豆瓣前250内容
head = {
    "User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/133.0.0.0 Safari/537.36"
}
# list = [num*25 for num in range(10)]
for number in range(0,250,25):
    response = requests.get("https://movie.douban.com/top250"+f"?start={number}&filter=",headers = head)

    if response.ok:
        # print(f'请求成功')
        contest = response.text
    ## BeautifulSoup构造函数-第二个参数指定解析器
        soup= BeautifulSoup(contest,"html.parser")
    ## 解析成树状结构

    # ## 打印第一个<p>元素 文本段落元素
    # print(soup.p)
    # ### 打印第一个图片元素
    # print(soup.img)
        all_names = soup.findAll("span",attrs={"class":"title"})
        for name in all_names:
            name_string = name.string
            if("/" not in name_string):
                print(name_string)
    else:
        print(f'请求失败')