#include<stdio.h>
int main()
{
    int  i , arr[5];
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("THE ELEMENTS OF ARRAY ARE:\n ");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}