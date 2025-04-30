%实验4
clc;
clear;
syms x;
f=(25*x-85)/(x+3);
f_x=[];%离散化值域
a=3;%x的初值
n=100;%迭代次数
f_x=[f_x a];
for i =1:n
    f_x(i+1)=subs(f,f_x(i));
end
f_x;
f_x(n)
