#include<stdio.h>
int isPrime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        c++;
        }
    }
    if (c==2)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int x,f;
    printf("enter the range");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        f=isPrime(i);
        if(f==1)
        {
            printf("%d " , i);
        }
    }
    return 0;
}