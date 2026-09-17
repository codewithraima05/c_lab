#include<stdio.h>
int main()
{
    int a[3][3];
    int i , j;
     printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
    }
}
 printf("TRANSPOSE ARRAY");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        printf("%d ",a[j][i]);
    }
}
return 0;
}