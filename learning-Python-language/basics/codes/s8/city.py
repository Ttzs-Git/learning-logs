def city_country(country:str,city:str):
    """城市|国家组合字符串"""
    return f'{country.capitalize()},{city.capitalize()}'\
    
## 调用函数
message=city_country('wuxi','China')
print(message)
