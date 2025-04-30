% li2-1
clear;
clc;
syms x;
m=1820;
f=(2*x-1)/(x-m)-x;
a=-20:20;
f1=subs(f,a);
plot(a,f1);
% 迭代法求解x
b=0;
for i= 1:10
    b=subs(f,b);
end
fprintf('迭代答案是%d',b)
