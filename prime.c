#include<stdio.h>
int main()
{
int n ,c=0;
printf("ENTER THE VALUE OF n");
scanf( "%d", &n);
for(int i=1;i<=n;i++)
{
if(n%i==0)
c++;
}
if(c==2)
printf("PRIME NUMBER");
else{
    printf("NOT A PRIME NUMBER");
}
return 0;
}