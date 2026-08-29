#include<stdio.h>
int main()
{
    int n , bin=0 ,rem , p=1;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    while(n>0)
    {
         rem=n%10;
         if(rem==1)
         rem=0;
         else
         rem=1;
        bin=bin+(rem*p);
        p=p*10;
        n=n/10;
    }
    printf("THE COMPLEMENT OF 1's in BINARY NUMBER IS %04d: ", bin);
    return 0;
}