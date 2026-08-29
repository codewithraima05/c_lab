#include<stdio.h>
int main(){
    int n , t,  sum=0;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        int r=t%10;
        sum=sum+r;
        t=t/10;
        }
    printf("SUM OF DIGITS IS %d", sum);
    return 0;
}