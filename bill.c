#include<stdio.h>
int main()
{
    int units , bill=0;
    printf("ENTER THE NUMBER OF UNITS");
    scanf("%d",&units);
    if(units>=0 && units<=100)
    {
        bill=units*5;
        printf("BILL %d: ", bill);
    }
    else if(units>100 && units<=200){
        bill=((units-100)*7)+(100*5);
        printf("BILL %d:  ",bill);
    }
    else if(units>200 && units<=300)
    {
        bill=((units-200)*10)+(100*7)+(100*5);
        printf("BILL  %d:  ",bill);
    }
    else{
        bill=((units-300)*12)+(100*10)+(100*7)+(100*5);
        printf("BILL %d:  ",bill);
    }
    return 0;

}