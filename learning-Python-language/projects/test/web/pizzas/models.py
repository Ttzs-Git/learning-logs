from django.db import models

# Create your models here.
class Pizza(models.Model):
    """披萨的类"""
    name=models.CharField(max_length=100)

    def __str__(self):
        return self.name
    
class Topping(models.Model):
    """包含字段pizza和name"""
    pizza=models.ForeignKey(Pizza,on_delete=models.CASCADE)
    name = models.TextField()
    def __str__(self):
        return f'{self.name[:50]}...'