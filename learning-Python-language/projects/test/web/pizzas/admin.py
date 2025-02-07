from django.contrib import admin
from .models import Topping,Pizza
# Register your models here.
admin.site.register(Pizza)
admin.site.register(Topping)