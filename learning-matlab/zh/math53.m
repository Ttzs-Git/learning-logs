% 初始频率 (a+b+c=1)
x = [0.3, 0.6, 0.1]; 
a = x(1); b = x(2); c = x(3);

% 预存储结果
results = zeros(100,3);
for n = 1:100
    p = a + 0.5*b;  % 等位基因频率
    a = p^2;        % 更新AA频率
    b = 2*p*(1-p);  % 更新Aa频率
    c = (1-p)^2;    % 更新aa频率
    results(n,:) = [a, b, c];
end

% 绘图
plot(1:100, results, 'LineWidth', 2);
legend({'AA', 'Aa', 'aa'}, 'Location', 'eastoutside');
xlabel('世代'); ylabel('频率');
grid on;

% 显示最终频率
fprintf('最终频率: AA=%.4f, Aa=%.4f, aa=%.4f\n', a, b, c);