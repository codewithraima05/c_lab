#include<stdio.h>
int main()
{
int a , b;
char ch;
printf("ENTER TWO NUMBERS AND THE ARITHEMETIC OPERATION");
scanf("%d",&a);
scanf("%d",&b);
scanf(" %c",&ch);
switch (ch){
case '+':
    printf("%d",(a+b));break;
    case '-':
    printf("%d",(a-b));break;
    case '*':
    printf("%d",(a*b));break;
    case '/':
    if(b!=0)
    printf("%d",(a/b));
    else
    printf("DIVISION BY ZERO");break;
    case '%':
    if(b!=0)
    printf("%d",(a%b));
    else
    printf("DIVISION BY ZERO");break;
    default:
    printf("INVALID INPUT");
}
return 0;
}
