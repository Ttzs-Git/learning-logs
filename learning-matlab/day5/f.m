function y=f(A)
    [P,Q]=eig(A)
    x=[0.5;0.5];
    %x=2*rand(2,1)-1;
    t=[];
    for j=1:50
        x=A*x;
        t(length(t)+1,1:2)=x;
        fprintf('%2f,%2f\n',t(j,1),t(j,2))
    end
end

