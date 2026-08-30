#include<stdio.h>
int main()
{
    int n , sum=0;
    printf("ENTER THE NUMBER");
    scanf("%d" , &n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("PERFECT NUMBER");
    }
    else{
        printf("NOT A PERECT NUMBER");
    }
}