#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%s %d %d", s.name, &s.roll, &s.marks);

        fprintf(fp, "%s %d %d\n", s.name, s.roll, s.marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    while (fscanf(fp, "%s %d %d", s.name, &s.roll, &s.marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               s.name, s.roll, s.marks);
    }

    fclose(fp);

    return 0;
}