#include<stdio.h>
int main()
{
int n , i;
int arr[100];
printf("ENTER THE NUMBER OF ELEMENTS");
scanf("%d",&n);
printf("ENTER THE ELEMENTS IN ARRAY\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
printf("THE ELEMENTS OF ARRAY ARE:\n ");
for(i=0;i<n;i++)
{
    printf("%d ",arr[i]);
}
return 0;
}