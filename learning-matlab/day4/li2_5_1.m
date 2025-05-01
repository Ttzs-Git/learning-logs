%2_5
clc;clear;
syms x;
y=sin(x);
fplot([y,taylor(y,'order',8),taylor(y,'order',10),taylor(y,'order',12)],[-3/2*pi 3/2*pi])

legend('f(x)','f7(x)','f9(x)','f11(x)')
xlabel('x');
ylabel('y');
title('2.5.2');