#include<stdio.h>
int main()
{
    int a[5] , k=0;
    int b[5], i;
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        b[i]=a[k];
        k++;
    }
    printf("COPIED ARRAY IS: ");
    for(i=0;i<5;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}