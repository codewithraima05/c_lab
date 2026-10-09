#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    int sum;
    sum = n*(n+1)/2;
    x=sqrt(sum);
    if(x*x==sum)
    {
        printf("%d", x);
    }
    else
    {
        printf("-1");
    }
    return 0;
}