#include<stdio.h>
int main()
{
    int n,m ,hcf=0;
    printf("ENTER THE NUMBERS");
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        hcf=i;
    }
    printf("THE HIGHEST COMMON FACTOR IS %d ", hcf);
    return 0;
}