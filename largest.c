#include<stdio.h>
int main()
{
    int a , b,c;
    printf("ENTER THREE NUMBERS");
    scanf("%d", &a );
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>b && a>c)
    {
        printf("Largest number is %d\n: " , a);
    }
    else if (b>a && b>c)
    {
        printf("Largest number is %d\n: " , b);
    }
    else
    printf("largest number %d\n: " , c);
    return 0;
}