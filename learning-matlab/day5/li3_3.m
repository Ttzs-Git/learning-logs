clc;
clear;
A=[9 5;2 6];
t=[];
for i=1:20
    x=2*rand(2,1)-1;
    t(length(t)+1,1:2)=x;
    for j=1:40
        x=A*x;
        t(length(t)+1,1:2)=x;
        if(x(1)~=0)
            p(j)=x(2)/x(1);
            fprintf('x(2)/x(1)=%f\n',p(j));
        end
    end
end
plot(t(:,1),t(:,2),'-*');
grid('on')

