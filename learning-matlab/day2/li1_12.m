%例1-12
clc;
clear;
m=1820;
x=(-m^0.5/3-2):0.01:(-m^0.5/3+2);
f=x.^3.+m^0.5.*x.^2.+(m/3-3).*x-m^0.5*(1-m/27);

plot(x,f);
xlabel('x')
ylabel('y')
title('li1-12')
% 返回零点
f1=@(x)x^3+m^0.5*x^2+(m/3-3)*x-m^0.5*(1-m/27);
fprintf('%f %f %f\n',fzero(f1,-15.95),fzero(f1,-14.2),fsolve(f1,-12.5))