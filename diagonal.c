#include<stdio.h>
int main()
{
    int a[3][3] , i , j;
    int lsum=0,rsum=0;
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d ",&a[i][j]);
    }
    printf("\n");
}
 for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                rsum=rsum+a[i][j];
            }
        }
    }
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j<=2)
            {
                lsum=lsum+a[i][j];
            }
        }
    }
    printf("SUM OF RIGHT DIAGONAL IS %d:  ",rsum);
    printf("SUM OF LEFT DIAGONAL IS %d:  ", lsum);
return 0;
}