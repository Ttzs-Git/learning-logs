clc;clear all;
m=1820;
t=-m/250:0.01:m/250;
x=cos(t)+t.*sin(t);
y=sin(t)-t.*cos(t);
z=-t;
plot3(x,y,z)