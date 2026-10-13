#include<stdio.h>
float area(float r); // function prototype or function declaration
int main()
{ // main function
    float rad;
    printf("enter the radius of circle: ");
    scanf("%f",&rad);
    printf("THE AREA OF CIRCLE IS %f: ", area(rad));
}
float area(float r) // function definition
{
    return 3.14*r*r;
}