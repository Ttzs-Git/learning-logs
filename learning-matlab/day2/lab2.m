clc;
clear;
% 极限
x=1:100;
y=x.^(x.^(-1));
plot(x,y,'g-')
% 猜测极限为1
m=input('请输入一个整数');
n=1;
y=2;
while(abs(y-1)>10^(-m))
    n=n+1;
    y=n^(1/n);
end
fprintf('迭代%d次\n',n)
