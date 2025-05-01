clc;clear;
syms a b c d e x;
f=(a*x+b)/(c*x^2+d*x+e);
f=subs(f,a,e);
f=subs(f,d,0);
f=subs(f,b,1820*c);
a=diff(f,x);
a=subs(a,x,1820^(1/3));
a=subs(a,c,1);
for i=-1000:1000
   b=subs(a,e,i);
   if(abs(b)<1)
       fprintf("e=%d\n",i)
       break;
   end
end