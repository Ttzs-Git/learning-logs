function f5()
for k=200:300
    for c=1:1000
        b=c-k;
        a=sqrt(c^2-b^2);
        if(a==floor(a)&&b>0&&gcd(a,gcd(b,c))==1)
            fprintf("k=%d\n",k)
            break;
        end
    end
end
