%li1-12
clc;clear all;
m=1820;
syms x;
f=x^3+m^0.5*x^2+(m/3-3)*x-m^0.5*(1-m/27);
diff(f)
%绘制大体图像
x1=-30:0.1:10;
f1=subs(f,x1);
subplot(2,1,1)
plot(x1,f1)
xlabel('x');
ylabel('y');
title('1.12大体图像');
%绘制局部图像
x2=(-m^0.5/3-2):0.1:(-m^0.5/3+2);
f2=subs(f,x2);
subplot(2,1,2);
plot(x2,f2);
xlabel('x');
ylabel('y');
title('1.12局部图像')