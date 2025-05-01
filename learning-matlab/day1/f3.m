function y=f3(x)
    q=find(x>=0&x<=0.5);
    y(q)=2*x(q);
    q=find(x>0.5&x<=1);
    y(q)=2*(1-x(q));
end
