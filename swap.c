#include<stdio.h>
int main()
{
    int  a , b ,c ;
    printf(" ENTER FIRST NUMBER :  ");
    scanf("%d",&a);
    printf("eNTER SECONF NUMBER :  ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf(" THE SWAPED VALUE OF a is %d and b is %d ", a,b);
}