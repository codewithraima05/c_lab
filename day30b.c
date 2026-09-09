#include<stdio.h>
int main()
{
    int  i , arr[5] ,p=0,n=0,z=0;
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]>0)
        {
            p++;
        }
        else if(arr[i]<0){
            n++;
        }
        else{
            z++;
        }
    }
    printf("THE NUMBER OF POSITIVE ELEMENTS IS:%d ",p);
    printf("THE NUMBER OF NEGATIVE ELEMENTS IS:%d ",n);
    printf("THE NUMBER OF ZERO ELEMENTS IS:%d ",z);
    return 0;
}