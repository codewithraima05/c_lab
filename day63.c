#include<stdio.h>
int main(){
    int n,k,j,i,temp;
    int arr[100];
    printf("ENTER THE SIZE OF ARRAY");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n-1;i++)
    {
     for(j=0;j<n-1-i;j++)
     {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }   
    }
    if(k>=1 && k<=n){
        printf("%d",arr[k-1]);
    }
    else
    {
        printf("INVALID");
    }
    return 0;
}