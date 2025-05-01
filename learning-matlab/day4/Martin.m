function Matrin(a,b,c,N)
    f=@(x,y)(y-sign(x)*sqrt(abs(b*x-c)));
    g=@(x)(a-x);
    m=[0;0];
    for n=1:N
        m(:,n+1)=[f(m(1,n),m(2,n)),g(m(1,n))];
    end
    figure
    plot(m(1,:),m(2,:),'kx');
    axis equal
    xlabel('x');
    ylabel('y');
    title(2.3);
    legend(['a=',num2str(a),',','b=',num2str(b),',','c=',num2str(c)])
end