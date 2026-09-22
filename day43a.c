#include <stdio.h>
int main()
{
    char str[100];
    int i, j;
    char temp;
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
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    printf("%s", str);
    return 0;
}