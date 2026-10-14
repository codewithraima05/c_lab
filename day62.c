#include<stdio.h>
int main()
{
    int n,i;
    int arr[100];
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int currentsum=arr[0];
    int maxsum=arr[0];
    for(i=1;i<n;i++)
    {
        if(currentsum+arr[i]<arr[i])
        {
            currentsum=arr[i];
        }
        else{
            currentsum=currentsum+arr[i];
        }
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
    }
    printf("%d\n",maxsum);
    return 0;
}