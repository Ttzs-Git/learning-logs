% 实验二实际操作
a=0:pi/6:2*pi;
b=0:pi/12:2*pi;
axis([0 2*pi -1 1]);
subplot(2,2,1);
plot(a,sin(a),'k-');
axis([0 2*pi -1 1]);
subplot(2,2,2);
plot(b,sin(b),'k-*');
axis([0 2*pi -1 1]);
subplot(2,2,3);
plot(a,sin(a),'k.-');
axis([0 2*pi -1 1]);
subplot(2,2,4);
plot(b,sin(b),'k*')