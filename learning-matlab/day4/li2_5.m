%2_5
clc;clear;
syms x;
y=sin(x);
x=-3/2*pi:0.1:3*pi/2;
plot(x,subs(y,x),'k')
hold on
plot(x,subs(taylor(y,'order',2),x),'r');
plot(x,subs(taylor(y,'order',4),x),'g');
plot(x,subs(taylor(y,'order',6),x),'m');
legend('f(x)','f1(x)','f3(x)','f5(x)')
xlabel('x');
ylabel('y');
title('2.5.1');