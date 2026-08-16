#include<stdio.h>
int main()
{
int n , sum=0;
printf("ENTER THE VALUE OF n");
scanf( "%d", &n);
for(int i=1;i<=n;i++)
{
sum=sum+i;
}
printf("THE SUM OF N NUMBERS IS %d: " , sum);
return 0;
}