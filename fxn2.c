#include<stdio.h>
int add(int a , int b) // function definition
{
    return a+b;     // returning sum 
}
int main()     // main function
{
    int x,y;
    printf("ENTER FIRST NUMBERS: ");
    scanf("%d",&x);
     printf("ENTER SECOND NUMBERS: ");
     scanf("%d",&y);
     printf("THE SUM IS %d: ",add(x,y));  //calling add function and printing the sum
     return 0;
}