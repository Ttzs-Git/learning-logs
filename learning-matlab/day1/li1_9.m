%例1.9
m=1820;
syms x;
syms a;
f=1/((2*pi)^0.5*a)*exp(-x^2/(2*a^2));
f1=subs(f,a,1000/m);
f2=subs(f,a,500/m);
f3=subs(f,a,100/m);
x=-1:0.001:1;
f1=subs(f1,x);
f2=subs(f2,x);
f3=subs(f3,x);
xlabel('x')
ylabel('y')
title('例1-9')
plot(f1,'g+')
hold on
plot(f2,'b-')
plot(f3,'c*')