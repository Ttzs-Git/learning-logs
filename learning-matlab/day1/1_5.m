%li1-5
clc;
clear all;
m=1820;
x=[rand(1)];
for i=1:9
    x=[x (m/100+x(i))^(0.5)];
end
x