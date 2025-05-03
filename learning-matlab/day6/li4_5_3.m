clc;clear;
format long
t=1790:10:1980;t=t';
x=[3.9,5.3,7.2,9.6,12.9,17.1,23.2,31.4,38.6,50.2,62.9,76.0,92.0,106.5,123.2,131.7,150.7,179.3,204.0,226.5]';
A=[t zeros(size(t))];
b=log(x);
%线性最小二乘法
m=A\b; %k lnx0
m=[m(1) exp(m(2))]% k x0
f=polyfit(t,b,1); %k lnx0
f=[f(1) exp(f(2))]
A=[sum(t) length(t);sum(t.^2) sum(t)];
b=[sum(b) sum(t.*b)]';
n=A\b; % k lnx0
n=[n(1)  exp(n(2))]

%输出误差
e=sum((x-(m(2)*exp(x(1)*t))).^2)
e=sum((x-(f(2)*exp(f(1)*t))).^2)
e=sum((x-(n(2)*exp(n(1)*t))).^2)