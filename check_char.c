#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("ENTER THE CHARACTER");
    scanf("%c",&ch);
    char lowerch=tolower(ch);
    if(lowerch=='a'||lowerch=='e'||lowerch=='i'||lowerch=='o'||lowerch=='u')
    {
        printf("IT IS A VOWEL");
    }
    else{
        printf("IT IS A CONSONANT");
    }
    return 0;
}