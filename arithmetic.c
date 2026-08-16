#include<stdio.h>

int main(){
    int a , b , sum =0,mul=1,div=1,sub=0;
    printf("ENTER VALUE OF a: ");
    scanf("%d",&a);
    printf("ENTER VALUE OF b: ");
    scanf("%d",&b);
    sum = a + b;
    mul = a * b;
    div = a / b;
    sub = a - b;

    printf("SUM IS: %d",sum);
    printf("\n MULTIPLICATION IS: %d",mul);
    printf("\n DIVISION IS: %d", div);
    printf("\n SUBTRACTION IS:%d",sub);
    return 0;
}