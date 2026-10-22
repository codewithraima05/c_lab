#include<stdio.h>
int main(){
    int n,i;
    int arr[100];
    int seen[1000];
    printf("ENTER SIZE OF ARRAY");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS IN ARRAY");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    if(seen[arr[i]]==1)
    {
        printf("%d\n",arr[i]);
        break;
    }
    seen[arr[i]]=1;
}
return 0;
}