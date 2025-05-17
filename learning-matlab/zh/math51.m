% 输入数据
t_data = 1:17;
x_data = [13741585,13801816,13918643,16927851,23506839,29572782,31273209,31273209,31273209,31273209,33906371,40410778,60684414,71479130,72276486,73182406,83940569];

% 定义改进的Logistic模型
model = @(a, t) a(1) ./ (1 + a(2) * exp(-a(3)*t - a(4)*t.^2));

% 初始参数和约束
a0 = [max(x_data) * 1.05, 6, 0.1, 0.01];


% 拟合模型

[A, resnorm] = lsqcurvefit(@(a, t) model(a, t), a0, t_data, x_data, [], []);

% 提取参数
xm = A(1); r = A(2); k = A(3); b = A(4);

% 计算结束时间
target = log(1 / (99 * r));
t_end = fzero(@(t) -k*t - b*t^2 - target, [0, 100]);

% 输出结果
fprintf('最终规模 x_m = %.0f 人\n', xm);
fprintf('参数 r = %.2f, k = %.4f, b = %.4f\n', r, k, b);
fprintf('疫情结束时间 ≈ %.1f 天\n', t_end);

% 绘制结果
t_pred = linspace(1, max(t_data)+50, 100);
x_pred = model(A, t_pred);

figure;
plot(t_data, x_data, 'ko', 'MarkerFaceColor', 'b'); hold on;
plot(t_pred, x_pred, 'r-', 'LineWidth', 2);
plot(t_end, 0.99*xm, 'gp', 'MarkerSize', 15, 'MarkerFaceColor', 'g');
line([1, t_pred(end)], [xm, xm], 'Color', 'k', 'LineStyle', '--');
xlabel('时间（天）'); ylabel('感染人数');
legend('实际数据', '模型拟合', '99%饱和点', 'x_m', 'Location', 'southeast');
title('SARS感染人数模型拟合');
grid on;