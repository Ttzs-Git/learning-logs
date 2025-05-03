function f4(n)

    for c=1:1000
        b=c-n;
        a=sqrt(c^2-b^2);
        if(a==floor(a)&&b>0)
            fprintf('a=%d b=%d c=%d\n',a,b,c)
        end
    end
    fprintf('\n')
end
