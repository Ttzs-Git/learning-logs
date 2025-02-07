# web应用
## Python Web框架--Django
## 项目开发
### 指定规范(spec)(项目目标,项目功能,项目外观,用户界面)
### 建立虚拟环境  python -m venv ll_env(ll_env是虚拟环境的名字)
### 激活虚拟环境 .\ll_env\Scripts\Activate
### 停止使用  deactivate
### 更新pip:  pip install --upgrade pip
### 下载Django: pip install django
### 新建项目  django-admin startproject ll_project . (.很重要——合适的目录结构,轻松部署到服务器) 
注释: 
manage.py-接受命令,将其交给Django的相关部分;管理使用数据库,运行服务器

settings.py-指定Django如何与系统交互以及如何管理项目
urls.py-创建那些网页来相应浏览器请求
wsgi.py-帮助Django提供它创建的文件_web server gateway interface (web服务器网关接口)

### 创建数据库 python manage.py migrate
migrate迁移(修改)数据库

### 查看项目 python manage.py runserver
runserver-查看项目状态
计算机的端口8000:localhost
逐步增加1:找合适的端口

### 创建应用程序 python manage.py startapp learning_logs
models.py--定义要在应用程序中管理的数据
admin.py
views.py
### 定义模型 models.py
### 激活模型 settings.py
### 修改数据库 pyhton manage.py makemigrations learning_logs
###  ........ python manage.py migrate
修改数据的步骤: 修改models.py;对learning_logs调用makemigrations;Django迁移项目
## 管理网站
### 创建超级用户 python manage.py createsuperuser
不比较密码的实际相似性,只比较哈希值
### 注册模型 admin.py
### 访问网站 访问http://localhost:8000/admin/
### 定义模型Entry models.py
多对一关系的定义
### 迁移模型 python manage.py makemigration learning_logs
生成迁移文件0000x_entry.py ——告诉Django如何修改数据库,使其储存与模型相关的信息
### ......  python manage.py migrate
检查Django应用了该迁移并且一切正常
添加新模型+迁移数据库——> 一组操作 
python manage.py makemigration name_app
python manage.py migrate
### 注册模型 admin.py 
### 管理网站  http://localhost:8000/admin/
### Django Shell python manage.py shell
###  .......... from learning_logs.models import Topic 
导入模型Topic
### ............ Topic.objects.all()
获取模型Topic所有的实例,返回一个查询集的列表
### 遍历查询集 
#### ......... topics = Topic.objects.all()
#### ........   for topic in topics:
####  ........      print(topic.id,topic)
获得ID和相应的主题
#### ........    t=Topic.objects.get(id=1)
#### ........    t.text
#### ........   t.date_added

### 退出shell <C+z>+回车键
>> p569
