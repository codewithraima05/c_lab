#include<stdio.h>
int main()
{
    int n,i,j,prev;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE NUMBERS IN ARRAY\n ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        prev=-1;
    for(j=i-1;j>=0;j--){
        if(arr[j]>arr[i]){
            prev=arr[j];
            break;
        }
    }
    printf("%d  ", prev);
    if(i<n-1)
    {
        printf(" ,");
    }
}
return 0;
}