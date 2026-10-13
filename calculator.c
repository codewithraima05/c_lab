#include<stdio.h>
int main()
{
    char ch;
    printf("ENTER THE ALPHABET");
    scanf(" %c", &ch);
    switch (ch)
    {
        case 'A':case 'a':case 'E':case 'e':case 'I':case 'i':case 'O': case 'o':case 'U':case 'u':
        printf("%c is a vowel" , ch); 
         break;
        default:
            if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
            {
                printf("%c is a consonant",ch);
            }
            else {
        printf("INVALID INPUT");
    }
}
    return 0;
}

    