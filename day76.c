#include <stdio.h>
int main()
{
    char filename[100];
    FILE *fp;
    char ch;
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Error: File does not exist!\n");
    }
    else
    {
        printf("File opened successfully.\n");

        while ((ch = fgetc(fp)) != EOF)
        {
            printf("%c", ch);
        }
        fclose(fp);
    }
    return 0;
}