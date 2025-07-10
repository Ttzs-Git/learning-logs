#In[1]
# setting: python 3.9.21 torch 2.6 
# input 13
# hidden 100
# output 13
import torch
import torch.nn.functional as F
import re
import numpy as np
ff=open("housing.data").readlines()# read lines
data=[]
# In[]
for line in ff:
    out=re.sub(r"\s{2,}"," ",line).strip()
    data.append(out.split(" "))
data=np.array(data).astype(np.float64)
print(data.shape)
# In[]
class FNN(torch.nn.Module):
    def __init__(self,in_features,out_features):
        super(FNN,self).__init__()
        self.fc1=torch.nn.Linear(in_features=13,
                                 out_features=100)
        self.output=torch.nn.Linear(in_features=100,
                                 out_features=13)
    def forward(self,x):
        x=self.fc1(x)
        x=F.sigmoid(x)
        x=self.output(x)
        return x
        
#In[2]
# init the net
net =FNN(13,13)
net=net.cuda()
loss_func=torch.nn.MSELoss()
optimizer=torch.optim.Adam(net.parameters(),
                           lr=0.001)
# %%
# train set
# test set
x_train=data[:450,:13]
y_train=data[:450,1:]
x_test=data[451:,:13]
y_test=data[451:,:1:]
print(x_train.shape,y_train.shape,x_test.shape,y_test.shape)
# %%
# train
for epoch in range(10000):
    x_train=torch.tensor(x_train,dtype=torch.float32)
    x_train=x_train.cuda()
    y_train=torch.tensor(y_train,dtype=torch.float32)
    y_train=y_train.cuda()
    pred=net(x_train)
    loss_pred=loss_func(pred,y_train)
    optimizer.zero_grad() # clear grad
    loss_pred.backward()
    optimizer.step()
  #  print(f'loss is {loss_pred:.4f}')
# %%
x_test=torch.tensor(x_test,dtype=torch.float32).cuda()
y_test=torch.tensor(y_test,dtype=torch.float32).cuda()
val=net(x_test)
loss_test=loss_func(val,y_test)
print(f"train loss is {loss_pred:.4f},test loss is {loss_test:.4f}\n")
# %%
torch.save(net,"model/model_hw.pkl")
# %%
