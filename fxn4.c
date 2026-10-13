#include<stdio.h>
int square(int n)
{
    return n*n;
}
int cube(int n)
{
    return n*n*n;
}
int main()
{
    int i=1;
    int m;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&m);
    printf("THE TABLE OF SQUARE AND CUBE IS:\n ");
    for(i=1;i<=m;i++)
    {
        printf("%d %d\n",square(i) , cube(i));
    }
}