'''
有个手写数字分类的数据集
MNIST：图像维度 单通道灰度图 28*28*1(height,width,channel)
0-9 相当于分类种类有10种
全连接神经网络 不能捕捉空间上的信息（展平操作）n*n——2n*1 空间特征放弃 所以在做二维或者多维的时候捕捉不了图像的空间信息
卷积神经网络：卷积层+连接层
卷积层——特征图，特征图包含高阶的信息（有空间特征信息）
连接层——分类用的，把高阶信息展平再进行分类 捕捉空间特征
'''
#导包
import torch
import torchvision.datasets as datasets
import torchvision.transforms as transforms
import torch.utils.data as utils_data
#数据集的处理
train_data=datasets.MNIST(root="dataset",#数据集下载的位置
                          train=True,#True为训练集、False为测试集
                          transform=transforms.ToTensor(),#把数据集变为tensor格式（才能在gpu加速）
                          download=True)#如果已经下载好 直接跳过下载过程
test_data=datasets.MNIST(root='dataset',
                         train=False,#false时候下载的是测试集
                         transform=transforms.ToTensor(),
                         download=True)
#train_data test_data 一个是训练集数据集+label 2是测试集+label
#图像数据集（batch，channel，height，width）
#label是（batch，1）
train_dataloader=utils_data.DataLoader(dataset=train_data,
                                       batch_size=64,
                                       shuffle=True)#把内部的数据打乱一下
test_dataloader=utils_data.DataLoader(dataset=test_data,
                                      batch_size=64,
                                      shuffle=True)
#train_dataloader和test_dataloader 满足图像数据的处理要求
'''
for images,labels in train_dataloader:
    print(images.shape,labels.shape)
    break
'''
#In[]
#net
# #torch.Size([64, 1,  28,28,) torch.Size([64])
class cnn(torch.nn.Module):
    def __init__(self):
        super(cnn,self).__init__()
        self.conv=torch.nn.Sequential(
            torch.nn.Conv2d(in_channels=1,
                            out_channels=32,
                            kernel_size=(5,5),
                            padding=2),
        #filiter：32个 nout=(nin+2p-f)/s+1   (28+2*2-5)/1+1=28
        #(28,28,1)---(28,28,32)
            torch.nn.BatchNorm2d(32),#输入的通道数
            torch.nn.ReLU(),
            torch.nn.MaxPool2d(kernel_size=2)
            #(28,28,32)---(14,14,32)           
        )
        self.fc1=torch.nn.Linear(in_features=14*14*32,out_features=10)
    def forward(self,x):
        x=self.conv(x)
        x=torch.flatten(x,1)#展平操作为n，1
        x=self.fc1(x)
        return x
net=cnn()
#定义网络参数
net.cuda()
loss_func=torch.nn.CrossEntropyLoss()
optimizer=torch.optim.Adam(net.parameters(),
                           lr=0.0001)
#In[]
#train
for epoch in range(100):
    total_loss=0
    correct=0
    total=0
    for images,labels in train_dataloader:
        images,labels=images.cuda(),labels.cuda()
        outputs=net(images)
        loss=loss_func(outputs,labels)
        optimizer.zero_grad()
        loss.backward()
        optimizer.step()
    total_loss+=loss.item()#把loss变为可以加减的值 numpy
    correct+=(outputs.argmax(1)==labels).sum().item()
    total+=labels.size(0)
    acc=correct/total
    print('epoch is {},loss is {},acc is {}'.format(epoch,total_loss,acc))
# %%
    #test
total_loss_val=0
correct_val=0
total=0
for image,labels in test_dataloader:
    images,labels=images.cuda(),labels.cuda()
    outputs_val=net(images)
    loss=loss_func(outputs_val,labels)
    total_loss_val+=loss.item()
    correct_val+=(outputs_val.argmax(1)==labels).sum().item()
    total+=labels.size(0)
acc=correct/total
print('epoch is {},loss is {},acc is {}'.format(epoch,total_loss,acc))