#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("ENTER THREE SIDES OF TRIANGLE");
    scanf("%d",&s1);
    scanf("%d",&s2);
    scanf("%d",&s3);
    if(s1==s2 && s2==s3)
    {
        printf("EQUILATERAL TRIANGLE");
    }
    else if(s1==s2 || s2==s3)
    {
        printf("ISOSCELES TRIANGLE");
    }
    else{
        printf("SCALENE TRIANGLE");
    }
    return 0;
}