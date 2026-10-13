#include<stdio.h>
int fact(int n)
{
    if(n==0)
    return 1;
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int m;
    printf("ENTER THE NUMBER");
    scanf("%d",&m);
    printf("THE FACTORIAL IS %d: ", fact(m));
    return 0;
}
