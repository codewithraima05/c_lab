#include<stdio.h>
int main()
{
    int  i , arr[5] ,e,o=0;
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]%2==0)
        {
            e++;
        }
        else{
            o++;
        }
    }
    printf("THE NUMBER OF EVEN ELEMENTS IS:%d ",e);
    printf("THE NUMBER OF ODD ELEMENTS IS:%d ",o);
    return 0;
}