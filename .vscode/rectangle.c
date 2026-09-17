#include<stdio.h>
int main()
{
    float len , breadth , area,per ;
    printf("ENTER THE length and breadth OF RECTANGLE");
    scanf("%f",&len);
    scanf("%f" , &breadth);
    area = len*breadth;
    per=2*(len+breadth);
    printf("THE AREA IS %f: ", area);
     printf("THE PERIMETER IS %f: ", per);
return 0;
}