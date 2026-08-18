#include<stdio.h>
int main()
{
    float p ;
    printf("ENTER THE PERCENTAGE");
    scanf("%f", &p);
    if(p>=90.0 && p<=100.0)
    {
        printf("GRADE A");
    }
    else if(p>=80.0 && p<=89.0)
    {
        printf("GRADE B");
    }
    else if(p>=70.0 && p<=79.0)
    {
        printf("GRADE C");
    }
    else if (p>=60.0 && p<=69.0)
    {
        printf("GRADE D");
    }
    else
    printf("GRADE F");
    return 0;
}