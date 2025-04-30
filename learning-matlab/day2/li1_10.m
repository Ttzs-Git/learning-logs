% 例1-10
syms x y;
m=1820;
f=log(x^2+m*y)-x^3*y-sin(x)==0;
ezplot(f,[-10,10])