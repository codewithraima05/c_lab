#include<stdio.h>
int main()
{
int n , i, min , max;;
int arr[100];
printf("ENTER THE NUMBER OF ELEMENTS");
scanf("%d",&n);
printf("ENTER THE ELEMENTS IN ARRAY\n");
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
for(i=1;i<n;i++)
{
    if(arr[i]>max)
    {
        max=arr[i];
    }
    if(arr[i]<min)
    {
        min=arr[i];
    }
}
printf("THE MAXIMUM ELEMENT OF ARRAY IS %d:  ",max);
printf("THE MINIMUM ELEMENT OF ARRAY IS %d:  ",min);
return 0;
}