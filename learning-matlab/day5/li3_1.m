clc;
clear;
A=str2sym('[1820 1816;-1814 -1810]');
A=A./10;
[P,Q]=eig(A)
x=[1;2]
syms n;
x=P*(Q.^n)/P*x

%for i=1:n

