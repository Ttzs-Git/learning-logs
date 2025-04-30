function y=f17(x)
y=zeros(size(x));
for k=1:length(x)
if x(k)>=0&&x(k)<=0.5
    y(k)=2*x(k);
elseif x(k)>0.5&&x(k)<=1
    y(k)=2*(1-x(k));
else
    y=NaN;
end
end
end

