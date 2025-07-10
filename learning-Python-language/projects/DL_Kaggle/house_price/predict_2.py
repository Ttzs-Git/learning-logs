#In[1]
import torch
import numpy as np
import re
import torch.nn.functional as F
ff=open("housing.data").readlines()#打开一个数据，读取所有行 并保存在列表ff中
data=[]#用于保存每一行数据
for item in ff:
    out=re.sub(r"\s{2,}"," ",item).strip()#r"\s{2,}"正则表达式 去掉空格重复两次到多次的，替换后的内容，以及要处理的字符串 以及去掉行首和行尾的空格和换行符
    print(out)
    data.append(out.split(" "))#用空格处理好的字符串分割为列表 每一行分割为一个列表
data=np.array(data).astype(np.float) #将数据转化为numpy数组
print(data.shape)#(506,14) 506个样本 13+1个变量
#In[2]
#处理数据集
'''
神经网络结构——前向和反向（predict vs True————更新权重）达到最优权重——测试
1、划分数据集
 划分数据集——训练(train)集——用来训练得到最优权重
          ——测试(test)集——用来检验模型
'''
'''
train包含13个data和一个label 496
test包含13个data和一个label  10
'''
x_train=data[0:496,0:13]
y_train=data[0:496,-1]
x_test=data[496:,0:13]
y_test=data[496:,-1]
print(x_train.shape,y_train.shape,x_test.shape,y_test.shape)
#In[3]
#模型定义
'''
输入层：13 仅用一个隐藏层: 100  第二个隐藏层是100 输出层：1
'''
class FNN(torch.nn.Module):
    def __init__(self,n_features,n_ouputs):
        super(FNN,self).__init__()
        self.fc1=torch.nn.Linear(in_features=13,
                                out_features=100)
        self.fc2=torch.nn.Linear(in_features=100,
                                 out_features=100)
        self.output=torch.nn.Linear(in_features=100,
                                    out_features=1)
    def forward(self,x):
        '''
        每一个神经元包含一个求和过程+一个激活函数
        '''
        x=self.fc1(x)
        x=F.relu(x)
        x=self.fc2(x)
        x=F.relu(x)
        x=self.output(x)
        return x
#模型初始化
net=FNN(13,1)
net.cuda()
#计算pred和True之间的差距 优化loss达到最小值
loss_func=torch.nn.MSELoss() # Loss=1/2 * (pred-True)^2
#优化器
optimizer=torch.optim.Adam(net.parameters(),
                           lr=0.0001)
#In[]
#训练
for epoch in range(10000):    #epoch belongs to [0,9999]
    x_train=torch.tensor(data= x_train,
                         dtype=torch.float32)
    y_train=torch.tensor(data= y_train,
                         dtype=torch.float32)
    x_train=x_train.cuda()
    y_train=y_train.cuda()
    pred=net(x_train)
    loss=loss_func(pred,y_train)*0.001
    optimizer.zero_grad()#清除上一个循环的梯度
    loss.backward()#计算当前函数的梯度
    optimizer.step()#更新
    #print("epoch is {}, loss is {}".format(epoch,loss))
#测试
    x_test=torch.tensor(data= x_test,
                         dtype=torch.float32)
    y_test=torch.tensor(data= y_test,
                         dtype=torch.float32)
    x_test=x_test.cuda()
    y_test=y_test.cuda()
    pred_val=net(x_test)
    loss_val=loss_func(pred_val,y_test)*0.001
    print("epoch is{} train loss is{} test loss is{}".format(epoch,loss,loss_val))
#保存模型
# %%
torch.save(net,"model/model_predict.pkl")
# %%