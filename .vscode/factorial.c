#include<stdio.h>
int main(){
    int n , f=1;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
            f=f*i;
        }
    printf("FACTORIAL IS %d",f);
    return 0;
}