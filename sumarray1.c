#include<stdio.h>
#define SIZE 5
int main()
{
    int  i , arr[5],sum ; 
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("THE SUM OF ELEMENTS OF ARRAY IS:%d ", sum);
    return 0;
}
