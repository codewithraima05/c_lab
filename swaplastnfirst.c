#include<stdio.h>
int main()
{
    int n,l,f,c=1,m , final;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int t=n;
    l=t%10;//last digit 
    while(t>=10)
    {
        t=t/10;
        c=c*10;
    }
   f=t;
   m=(n%c)/10;
   final=l*c+m*10+f;
   printf("THE NUMBER AFTER SWAPPING IS %d: ",final);
   return 0;
}