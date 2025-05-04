function plotf(f,a,x,y)
%f-匿名函数f(a,x)
%a-参数
%x-自变量
%y-因变量
plot(x,y,'*')
hold on;
plot(x,f(a,x));
grid on
legend('原始数据','拟合曲线','Location','SouthEast')
end