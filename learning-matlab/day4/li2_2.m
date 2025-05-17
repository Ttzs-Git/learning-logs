clc;
clear all;
m=1820;
f=@(x)2*x*(x>=0&x<=0.5)+2*(1-x)*(x>0.5&x<=1);
p=[1/m];
n=1000;
x=1:n;
for i=x
    p(i+1)=f(p(i));
    vpa(p(i));
end
p(n)
plot(x,p(1:n),'.')