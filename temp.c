#include<stdio.h>
int main()
{
    float cel , f;
    printf("ENTER THE TEMP IN CELSIUS");
    scanf("%f",&cel);
    f=(cel*9.0/5.0)+32.0;
    printf("TEMPERATURE IN FAHREINHIET IS %f " , f);
    return 0;
}