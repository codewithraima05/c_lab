#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("ENTER THE CHARACTER");
    scanf("%c",&ch);
    if(islower(ch))
    {
        printf("IT IS LOWERCASE");
    }
    else if(isupper(ch))
    {
        printf("IT IS UPPERCASE");
    }
    else if(isdigit(ch))
    {
        printf("IT IS A DIGIT");
    }
    else 
    {
        printf("IT IS A SPECIAL CHARACTER");
        }
        return 0;
    }