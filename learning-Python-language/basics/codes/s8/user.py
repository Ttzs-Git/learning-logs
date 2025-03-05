def build_profile(sufname,name,**kwargs):
    """建立简介"""
    kwargs['sufname']=sufname
    kwargs['name']=name
    return kwargs

print(build_profile('T','tzs',hhu=0.2,sdas=456,adasd6=431))