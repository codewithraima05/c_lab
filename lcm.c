#include<stdio.h>
int main()
{
    int n,m ,lcm,hcf ;
    printf("ENTER THE NUMBERS");
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0 && m%i==0)
        hcf=i;
    }
    lcm=(n*m)/hcf;
    printf("THE LEAST COMMON MULTIPLE IS %d ", lcm );
    return 0;
}