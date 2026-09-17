#include<stdio.h>
int main()
{
    int arr[10];
    int esum=0, osum=0 , i;
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(i%2==0)
        {
            esum=esum+arr[i];
        }
        else{
            osum=osum+arr[i];
    }
}
printf("THE SUM OF ELEMENTS AT EVEN POSN IS %d:\n  ",sum);
printf("THE SUM OF ELEMENTS AT ODD POSN IS %d:\n ",osum);
return 0;
}