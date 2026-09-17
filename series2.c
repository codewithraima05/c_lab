#include<stdio.h>
int main()
{
    float sum=0;
    int n , den , num;
    printf("ENTER THE NUMBER OF TERMS");
    scanf("%d",&n);
    for(num=2;num<=n;num=num+2)
    {
        for(den=3;den<=n;den=den+4){
        sum=sum+(float)(num)/(den);
    }
}
    printf("%f",sum);
    return 0; 
}