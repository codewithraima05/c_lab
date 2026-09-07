#include<stdio.h>
int main()
{
int n , i,sum=0;
int arr[100];
printf("ENTER THE NUMBER OF ELEMENTS");
scanf("%d",&n);
printf("ENTER THE ELEMENTS IN ARRAY\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    sum=sum+arr[i];
}
printf("THE SUM ELEMENTS OF ARRAY ARE %d:  ",sum);
return 0;
}