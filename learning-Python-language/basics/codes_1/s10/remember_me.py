from pathlib import Path 
import json
## 用户页面: 新用户记录名字，打招呼;旧用户打招呼
## 鉴别文件是否存在,打招呼


def old_greet(path):
    """检验身份,并欢迎老用户打招呼"""
    user=input('你的用户名是: ')
    content=path.read_text()
    content=json.loads(content)
    if user == content:
        print(f'欢迎{content.title()}回来')
    else:
        print(f'警告！！！⚠')

def create(path):
    """读取新的用户名"""
    user=input('你的用户名是: ')
    users=json.dumps(user)
    path.write_text(users)
    return user

def remember_me(addre):
    """记住我的整体框架"""
    path=Path(addre)
    if path.exists():
        old_greet(path)
    else:
        user=create(path)
        print(f'我会记得你的名字,欢迎下次光临,{user}')

remember_me('ttzs.txt')