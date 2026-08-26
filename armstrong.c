#include<stdio.h>
#include<math.h>
int main()
{
    int n , c , sum;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int t=n;
    while(t>0)
    {
        int r=t/10;
        c++;

    }
    while(t>0)
    {
        int a=t%10;
        sum=sum+(int)(pow(a,c));
        t=t/10;
    }
    if(sum==n){
    printf("ARMSTRONG NUMBER");}
    else{
         printf("NOT AN ARMSTRONG NUMBER");
    }
    return 0;
}