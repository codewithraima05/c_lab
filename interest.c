#include<stdio.h>

    int main()
    {
    int p , n  ;
    float r , i ;
    printf("Enter the principal amount: ");
    scanf("%d",&p);
    printf("Enter the rate of interest: ");
    scanf("%f",&r);
    printf("Enter the time period: ");
    scanf("%d",&n);
    i=(p*n*r)/100;
    printf("The simple interest is %f: ",i);
    return 0;
    }