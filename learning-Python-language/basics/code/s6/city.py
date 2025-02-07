### 子字典
wuxi={
    'city':'wu xi',
    'nation':'china',
    'population':10,
    'fact':'large'    ,
}
newyork={
    'city':'new york',
    'nation':'u.s.',
    'population':8,
    'fact':'small',
}
london={
    'city':'london',
    'nation':'U.K.',
    'population':7,
    'fact':'ssss'
}

## 创建父字典
cities={
    'wuxi':wuxi,
    'newyork':newyork,
    'london':london,
}

## 遍历字典
for city in cities:
    for key in cities[city]:
        print(f'\t{key}:{cities[city][key]}')
    print(f'\n')