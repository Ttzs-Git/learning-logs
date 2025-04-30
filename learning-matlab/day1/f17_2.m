function y=f17_2(x)
if x>=0&&x<=0.5
    y=2*x;
elseif x>0.5&&x<=1
    y=2*(1-x);
else 
    y=NaN;

end