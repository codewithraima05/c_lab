#include<stdio.h>
int main()
{
    float rad , circum , area ;
    printf("ENTER THE RADIUS OF CIRCLE");
    scanf("%f",&rad);
    circum=2.0*3.14*rad;
    area = 3.14*3.14*rad*rad;
    printf("THE CIRCUMFERENCE IS %f \n: " , circum);
    printf("THE AREA IS %f: ", area);
return 0;
}