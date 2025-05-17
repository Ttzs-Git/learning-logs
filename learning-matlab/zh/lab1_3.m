clc;
clear;
format long

% 原始数据
t = 1:17;
x = [13741585,13801816,13918643,16927851,23506839,29572782,31273209,31273209,31273209,31273209,33906371,40410778,60684414,71479130,72276486,73182406,83940569];

% 初始参数估计: [最终值, 增长速率, 转折点时间]
a0 =1.0e+08*[ 9.229397585793302   0.000000792949428   0.000000001232054];

% 模型定义（逻辑斯蒂）
f_logistic = @(a,t) a(1) ./ (1 + a(2)*exp(-a(3).*t));

% 拟合
[A, resnorm] = lsqcurvefit(f_logistic, a0, t, x);

% 找趋于稳定的时间点
d = 27;
while abs(f_logistic(A,d) - f_logistic(A,d+1)) > 1
    d = d + 1;
end

% 输出
disp(['稳定时间点d = ', num2str(d)]);
disp(['稳定值 = ', num2str(f_logistic(A,d))]);

% 绘图
plot(t, x, '*', 'DisplayName', '原始数据');
hold on;
tt = 1:d;
plot(tt, f_logistic(A,tt), 'r-', 'DisplayName', '逻辑斯蒂拟合曲线');
grid on;
legend;
