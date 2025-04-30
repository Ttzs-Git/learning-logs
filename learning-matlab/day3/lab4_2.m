clear;
clc;
syms n;
f=(n+1)^(n+1)-(n+2)*n^n;
limit(f,n,inf);

% 第二个实验
A=[35 1;40 1];
b=[32,28]';
x=A\b;
fprintf('y=%fx+%f',x(1),x(2));
