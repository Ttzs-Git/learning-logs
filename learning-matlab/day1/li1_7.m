%例1-7
%x=0:0.1:1;
%f1=f17(x);
%plot(x,f1)
x=0:0.01:1;
y=zeros(size(x));
for i =1:length(x)
    y(i)=f17_2(x(i));
end
plot(x,y,'-')