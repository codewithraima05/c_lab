#include<stdio.h>
int main(){
    int n , f=1 , sum=0;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int t=n;
    while(t>0)
    {
        int r=t%10;
        f=1;
    for(int i=1;i<=r;i++)
    {
            f=f*i;
        }
        sum=sum+f;
        t=t/10;
    }
if(sum==n)
{
    printf("STRONG NUMBER");
}
else{
    printf("NOT A STRONG NUMBER");
}
    return 0;
}