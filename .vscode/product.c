#include<stdio.h>
int main(){
    int n , p=1;
    printf("ENTER THE RANGE");
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2)
    {
            p=p*i;
        }
    printf("PRODUCT IS %d",p);
    return 0;
}