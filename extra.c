#include<stdio.h>
int main()
{
    int a , b ;
    printf("ENTER THE FIRST NUMBER: ");
    scanf("%d", &a);
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d" , &b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("THE VALUE OF a is %d and b is %d ", a,b);
    return 0;
}
