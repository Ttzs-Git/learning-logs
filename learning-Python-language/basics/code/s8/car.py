def make_car(brand,model,**kwargs):
    """接受制造商和型号,以及其他任意数量的关键字参数"""
    kwargs['brand']=brand
    kwargs['model']=model
    return kwargs

car = make_car('subaru', 'outback', color='blue', tow_package=True)
print(car)