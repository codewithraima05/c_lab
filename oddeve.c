#include<stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER YOU WANT TO CHECK");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("EVEN NUMBER");
    }
    else{
        printf("ODD NUMBER");
    }
    return 0;
}