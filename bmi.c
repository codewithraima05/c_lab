#include<stdio.h>
int main()
{
    float w , h , bmw;
    printf("ENTER THE WEIGHT IN KG AND HEIGHT IN METRES");
    scanf("%f",&w);
    scanf("%f",&h);
    bmw=w/(h*h);
    printf("THE BMI ACCORDING TO WEIGHT AND HEIGHT IS %f: ", bmw);
    return 0;
}