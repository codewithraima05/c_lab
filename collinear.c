#include<stdio.h>
int main()
{
int x1 , y1, x2, y2, x3, y3 , m1,m2;
printf("ENTER THE VALUE OF POINTS");
scanf( "%d", &x1);
scanf( "%d", &y1);
scanf( "%d", &x2);
scanf( "%d", &y2);
scanf( "%d", &x3);
scanf( "%d", &y3);
m1=y2-y1/(x2-x1);
m2=y3-y2/(x3-x2);
if(m1==m2)
{
    printf("COLLINEAR POINTS");
}
else{
    printf(" NOT COLLINEAR POINTS");
}
return 0;
}