clc;clear;
d=0;
c=1;
e=75;
b=1820*c;
a=e;
f=@(x)(a*x+b)/(c*x^2+d*x+e);
n=100000;
p=[-12];
for i=1:n
    p(i+1)=f(p(i));
end
p(10000)