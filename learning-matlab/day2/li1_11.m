% li1-11\
clear;
clc;
m=1820;
x=-10:0.01:10;
y=-10:0.01:10;
[X,Y]=meshgrid(x,y);
Z=m*X.*exp(-X.^2-Y.^2);
mesh(X,Y,Z);
%surf(X,Y,Z)