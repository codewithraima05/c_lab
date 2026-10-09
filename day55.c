#include<stdio.h>
int main()
{
    int n,i,count=0,candidate=0,freq=0;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    int nums[n];
    printf("enter the numbers in array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(count==0){
        candidate=nums[i];         
    }
    if(nums[i]==candidate)
    {
        count++;
    }
    else {
        count--;
    }
}
for(i=0;i<n;i++)
{
    if(nums[i]==candidate){
        freq++;
    }
}
if(freq>n/2)
{
    printf("%d",candidate);
}
else{
    printf("-1");
}
}