clc;
clear all;
syms x;
f=(2*x+1)/(x-1820);
a=[829922^(1/2) + 911];
n=5
for i=1:n
    a(i+1)=subs(f,x,a(i));
end
vpa(a(n))
