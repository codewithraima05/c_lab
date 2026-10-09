#include<stdio.h>
int main()
{
    int n,i;
    int nums[100],answer[100];
    int product=1;

    printf("ENTER THE SIZE OF ARRAY");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }    
    for(i=0;i<n;i++)
    {
        product=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
             product = product * nums[j];
            }
        }
        answer[i] = product;
    }
    printf("ANSWER ARRAY: ");
    for(i=0;i<n;i++)
    {
        printf("%d",answer[i]);
        if(i<n-1)
        printf(" ,");
    }
    printf("\n");
    return 0;
    }
