function []=newton(f,d,x0,e)
% f-原函数
% d-导数
% x0-迭代初值
% e-精度
h=@(x)x-f/d;
while abs(f(x0),0)>=e
    x0=subs(h,x,x0);
  

end
end

