from django.db import models

# Create your models here.
class Topic(models.Model):
    """学习主题的类"""
    text = models.CharField(max_length=200)
    date_added = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return self.text

class Entry(models.Model):
    """学到的有关某个主题的具体知识点"""
    topic = models.ForeignKey(Topic,on_delete=models.CASCADE) ## 外键(foreignkey)是数据库术语
    ## 外键——指向数据库的另一条记录,将每个条目关联到特定的主题
    ## 后一个参数——删除主题的同时删除所有与之关联的条目——级联删除(cascading delete)

    text = models.TextField()
    ## 不限制字段的长度
    date_added = models.DateTimeField(auto_now_add=True)
    ## 创建顺序按照呈现条目,并放置时间戳
    class Meta:
       """管理模型的额外信息"""
       verbose_name_plural = 'entries' 

    def __str__(self):
        """返回一个表示条目的简单字符串"""
        if len(self.text)>50:
            return f'{self.text[:50]}...'
    ### 只返回 text的前50个字符+....
        else:
            return f'{self.text[:50]}'


