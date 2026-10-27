#include<stdio.h>
int main()
{
    FILE *fp;
    char text[200];
    fp=fopen("data.txt","a");
    if(fp==NULL)
    {
        printf("ERROE OPENING FILE.");
        return 1;
    }
    printf("ENTER TEXT TO APPEND: ");
    fgets(text, sizeof(text),stdin);
    fprintf(fp, "%s",text);
    fclose(fp);
    printf("File updated successfully with appended text ");
    return 0;
}