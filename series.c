#include<stdio.h>
int main()
{
    float sum=0;
    int n , den=3, num=2;
    printf("ENTER THE NUMBER OF TERMS");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+(float)(num)/(den);
        num=num+2;
        den=den+4;
    }
    printf("%f",sum);
    return 0; 
}