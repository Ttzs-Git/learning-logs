## 实验1
## 目标
实现两层网络，包含一个隐藏层和一个输出层，使用梯度下降算法训练网络，使得网络能够学习到一个简单的函数。

## 任务

- 实现numerical_gradient
- 定义一个class TwoLayerNet
  - 字典params:装所有层的参数，使用正态分布进行初始化参数
  - 预测函数predict
  - 损失函数:loss
  - 正确率函数:accuracy
  - 数值微分numerical_gradient()

![image-20250322150837431](.\Two_Layer_Net.assets\image-20250322150837431.png)

- mini-batch的实现
  - 导入MNIST的数据
  - 设置超参数
  - 获取mini-batch
  - 计算梯度
  - 更新参数
  - 记录学习国臣