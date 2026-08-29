#include<stdio.h>
int main()
{
    int n , t, p=1;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        int r=t%10;
        if(r%2 != 0)
        p=p*r;
        t=t/10;
        }
    printf("PRODUCT OF ODD DIGITS IS %d", p);
    return 0;
}