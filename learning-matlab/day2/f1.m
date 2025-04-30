function y=f1(f,x0,n)
% f-迭代函数
% x0-迭代次数
% n-迭代次数
y=[x0];
for i=1:n
    y(i+1)=f(y(i));
    fprintf('%d',y(i))
end
end
