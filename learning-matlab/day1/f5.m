function y=f5(x)
    y=(x-1).*(x>=-pi&x<0)+(x+1).*(x>=0&x<=pi);
end