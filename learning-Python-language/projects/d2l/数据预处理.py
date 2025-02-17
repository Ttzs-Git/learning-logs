# 数据预处理
import os

# 创建一个人工数据集,并储存在csv(逗号分隔集)文件

## 创建一个文件夹
os.makedirs(os.path.join('','data'),exist_ok=True)
## 创建一个文件
data_file= os.path.join('','data','house_tiny.csv')

with open(data_file,'w')as f:
    f.write('NumRooms,Alley,Prices\n')
    f.write('NA,Pave,12750\n')
    f.write('4,NA,10600\n')
    f.write('2,NA,12313\n')
    f.write('NA,NA,15160\n')

## 读取csv的内容使用pandas库
import pandas
# 读取数据
data = pandas.read_csv(data_file)
print(data)

## 缺少的数据-典型方法:插值 删除 

## 插值
inputs,outputs = data.iloc[:,0:2],data.iloc[:,2]
# 将NaN视为一个类
inputs = pandas.get_dummies(inputs,dummy_na=True)
print(inputs)




# ## 选择数值列
# inputs = inputs.select_dtypes(include=[int,float])
## 有数字的均值
inputs = inputs.fillna(inputs.mean())
# ## 删除有缺失值的行
# inputs=inputs.dropna()
print(inputs)

## 转化成张量
import torch
x,y=torch.tensor(inputs.values),torch.tensor(outputs.values)
## 通常使用32位浮点数
print(x)
print(y)