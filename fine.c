#include<stdio.h>
int main()
{
    int days , fine=0;
    printf("ENTER THE NUMBER OF EXTRA DAYS");
    scanf("%d",&days);
    if(days>=0 && days<=5)
    {
        fine=days*2;
        printf("FINE %d",fine);
    }
    else if(days>5 && days<=10){
        fine=days*4;
        printf("FINE %d",fine);
    }
    else if(days>=30)
    {
        fine = days*6;
        printf("FINE %d",fine);
    }
    else{
        printf("MEMBERSHIP CANCELLED");
    }
    return 0;

}