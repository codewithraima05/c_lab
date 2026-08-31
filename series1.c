#include<stdio.h>
int main()
{
    float sum=0;
    int n , den , num;
    printf("ENTER THE NUMBER OF TERMS");
    scanf("%d",&n);
    sum=1;
    for(int i=2;i<=n;i++)
    {
        num=((2*i)-1);
        den=2*i;
        sum=sum+(float)(num)/(den);
    }
    printf("%f",sum);
    return 0; 
}