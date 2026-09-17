#include<stdio.h>
int main()
{
    int arr[5];
    int i , c=0 , n ;
     printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE NUMBER YOU WANT TO COUNT");
    scanf("%d ",&n);
    for(i=0;i<5;i++)
    {
        if(n==arr[i])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("NO NUMBER REPEATED");
    }
    else{
    printf("IT IS REPEATED %d TIMES: ",c);
    }
    return 0;
}