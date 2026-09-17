#include<stdio.h>
int main()
{
    int  i , arr[5],min ; 
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("THE SMALLEST ELEMENTS OF ARRAY IS:%d ", min);
    return 0;
}