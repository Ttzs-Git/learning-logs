clc;
clear;
A=[9 5;2 6];
t=[];p=[];
 x=2*rand(2,1)-1;
for j=1:40
   x=A*x;
   t(j,1:2)=x;
   if(x(1)~=0)
      p(j)=x(2)/x(1);
      fprintf('x(2)/x(1)=%f\n',p(j));
   end
   disp(num2str(t(40)))
end
    


