#In[1]
import torch
import re
import numpy as np
import torch.nn.functional as F
ff=open("housing.data").readlines()
data=[] 
## 放数据
## make data
for item in ff:
    out=re.sub(r"\s{2,}"," ",item).strip()
    #print(out)
    data.append(out.split(" "))
data=np.array(data).astype(np.float64)
print(data.shape)
#In[2]
## 分数据集合
# 450
x_train=data[:450,:13]
y_train= data[:450,-1]
x_test=data[451:,:13]
y_test=data[451:,-1]
print(x_train.shape,y_train.shape,x_test.shape,y_test.shape)
#In[3]
## class FNN
class FNN(torch.nn.Module):
    def __init__(self,n_features,n_outputs):
        super(FNN,self).__init__()
        self.fc1=torch.nn.Linear(in_features=13,out_features=100)
        self.fc2=torch.nn.Linear(in_features=100,out_features=100)
        self.output=torch.nn.Linear(in_features=100,out_features=1)
## init the net
## 13----> 100 ---> 100--->1
## 

    def forward(self,x):
        x=self.fc1(x)
        x=F.relu(x)
        x=self.fc2(x)
        x=F.relu(x)
        x=self.output(x)
        return x



# In[4]
# init the net_obj 
net=FNN(13,1)
net.cuda()
# LOSS-FUNCIOTN
loss_func=torch.nn.MSELoss()# MSE
## optimizer
optimizer=torch.optim.Adam(net.parameters(),
                           lr=0.0001)
# In[]
# train
for epoch in range(10000):
    x_train=torch.tensor(data=x_train,
                         dtype=torch.float32)
    y_train=torch.tensor(data=y_train,
                         dtype=torch.float32)
    x_train=x_train.cuda()
    y_train=y_train.cuda()
    pred=net(x_train) # run
    loss=loss_func(pred,y_train) # compute loss
    optimizer.zero_grad()# clear grad
    loss.backward()
    optimizer.step()
    print(f'epoch is{epoch:.4f} loss is {loss:.4f}')

# In[]
x_test=torch.tensor(data=x_test,
                    dtype=torch.float32)
y_test=torch.tensor(data=y_test,
                    dtype=torch.float32)
x_test=x_test.cuda()
y_test=y_test.cuda()
pred_val=net(x_test)
loss_val=loss_func(pred_val,y_test)
print(f"epoch is {epoch:.4f},train loss is{loss:.4f},test loss is {loss_val}")
# In[]
torch.save(net,"model/model_predict.pkl")
