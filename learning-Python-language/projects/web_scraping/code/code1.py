from selenium import webdriver

# 谷歌属性
chrome_options = webdriver.ChromeOptions()

# headless 设置为真
chrome_options.headless = True

# 创建一个实例
chrome = webdriver.Chrome(chrome_options=chrome_options)

page=chrome.get("https://www.bilibili.com/video/BV1JM4y137kK?spm_id_from=333.788.player.switch&vd_source=c1b032615249e371a441348715da69ba")