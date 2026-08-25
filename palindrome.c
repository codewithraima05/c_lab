#include<stdio.h>
int main(){
    int n , t,  rev=0;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    t=n;
    while(t>0)
    {
        int r=t%10;
        rev=rev*10+r;
        t=t/10;
        }
        if(n==rev)
        {
             printf("PALINDROME NUMBER");
        }
        else{
    printf("NOT PALINDROME NUMBER");
        }
    return 0;
}