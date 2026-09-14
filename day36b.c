#include<stdio.h>
int main()
{
int a[3][3] , i , j;
int sum=0;
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
    }
    printf("SUM OF EACH ROW AND COLUMN IS %d:  ", sum);
    return 0;
}