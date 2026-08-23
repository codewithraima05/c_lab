#include<stdio.h>
int main(){
    int n , sum=0;
    printf("ENTER THE RANGE");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%2!=0)
        {
            sum=sum+n;
        }
    }
    printf("SUM IS %d",sum);
    return 0;
}