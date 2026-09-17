#include<stdio.h>
#define SIZE 5
int main()
{
    int  i , arr[5],avg,sum=0 ; 
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
        avg=sum/5;
    }
    printf("THE AVG OF ELEMENTS OF ARRAY IS:%d ", avg);
    return 0;
}
