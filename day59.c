#include<stdio.h>
int main()
{
    int n,k,i,j;
    int arr[100];
    int sum,maxSum;

    printf("ENTER THE SIZE OF ARRAY");
    scanf("%d",&n);
    printf("ENTER THE NUMBERS IN ARRAY");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE VALUE OF K");
    scanf("%d",&k);
    if(k<=0 || k>n)
    {
        printf("INVALID K");
        return 0;
    }
    maxSum=arr[0];
    for(i=0;i<=n-k;i++)
    {
        sum=0;
        for(j=i;j<i+k;j++)
        {
            sum =sum+arr[j];
        }
        if(i==0 || sum>maxSum)
        {
            maxSum=sum;
        }
    }
    printf("Maximum sum =%d\n", maxSum);
    return 0;
}