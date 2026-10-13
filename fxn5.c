#include<stdio.h>
int max2(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int max3(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else 
    {
        return c;
    }
}
int main ()
{
    int x,y,z;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    printf("Enter the third number: ");
    scanf("%d",&z);
   printf("THE LARGEST BTW TWO NUMBER IS %d: ", max2(x,y));
   printf("THE LARGEST BTW THREE NUMBER IS %d: ", max3(x,y,z));
   return 0;
}