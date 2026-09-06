#include<stdio.h>
int main()
{
int n,j,c=0;
printf("ENTER THE VALUE OF n");
scanf( "%d", &n);
for(int i=2;i<=n;i++)
{
    c=0;
 for( j=1;j<=i;j++){
if(i%j==0){
c++;
 }
}
if(c==2){
printf("%d ",i);
}
}
return 0;
}