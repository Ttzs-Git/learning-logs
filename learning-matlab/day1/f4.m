function y=f4(x)
    y=2.*x.*(x>=0&x<=0.5)+2.*(1-x).*(x>0.5&x<=1);
end