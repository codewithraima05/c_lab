#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");

    if (input == NULL)
    {
        printf("Unable to open input.txt");
        return 1;
    }

    output = fopen("output.txt", "w");

    if (output == NULL)
    {
        printf("Unable to create output.txt");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted to uppercase successfully.");

    return 0;
}