#include<stdio.h>
int main()
{
    int  i , arr[5],max ; 
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("THE LARGEST ELEMENTS OF ARRAY IS:%d ", max);
    return 0;
}
