#include<stdio.h>
int main()
{
    int n,x;
    printf("ENTER THE NUMBER OF ELEMENTS");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE NUMBERS IN ARRAY");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE NUMBER YOU WANT TO CHECK");
    scanf("%d",&x);
    int lb=0,ub=n-1;
    int f=-1;
    while(lb<=ub)
    {
        int mid=(lb+ub)/2;
        if(arr[mid]>=x)
        {
          f=mid;
          ub=mid-1;  
        }
        else{
            lb=mid+1;
        }
    }
    printf("%d\n",f);
    return 0;
}