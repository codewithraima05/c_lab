#include<stdio.h>
int main()
{
    int a , b , c , d=0;
    printf("ENTER THE VALUES OF a , b and c from quad eqn");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=(b*b)-4*a*c;
    if(d>0)
    {
        printf("ROOTS ARE REAL AND DIFFERENT");
    }
    else if (d==0)
    {
        printf("ROOTS ARE REAL AND SAME");
    }
    else{
        printf("ROOTS ARE COMPLEX");
    }
    return 0;    
}