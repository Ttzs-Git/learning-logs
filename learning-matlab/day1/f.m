function y=f(n,d)
%n-参数
%d-定义域
    syms a x;

    f=1/((2*pi)^0.5*a)*exp(-x^2/(2*a^2));
    f=subs(f,a,n);
    y=subs(f,d);
end