#define _CRT_DEPRECATE__DEPRECATE
#include<stdio.h>
#include<math.h>
int main()
{
    double m=0,s=0,item=0,sign=1;
    int i=1;
    scanf("%lf",&m);
    while(fabs(item)<1e-4)
    {
        item=sign*m/i;
        s+=item;
        m*=m;
        i=i*(i+1);
        sign=-sign;;
    }
    printf("%.2f\n",s);
    return 0;
}