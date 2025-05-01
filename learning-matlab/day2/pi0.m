clc;clear all;
syms x;
f=(2*x-1)/(x-1820);
f=diff(f)
fplot(f,[-20,20]);
hold on;
y=1;
y2=-1;
fplot(y,[-20,20]);
fplot(y2,[-20,20]);