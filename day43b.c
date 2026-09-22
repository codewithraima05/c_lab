#include <stdio.h>
int main()
{
    char str[100];
    int i, j, flag = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
    j = i - 1;
    i = 0;
    while (i < j)
    {
        if (str[i] != str[j])
        {
            flag = 0;
            break;
        }

        i++;
        j--;
    }
    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}