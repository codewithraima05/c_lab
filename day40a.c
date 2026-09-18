#include <stdio.h>
int main()
{
    int a[10][10];
    int r, c, i, j, d;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter the matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Diagonal Traversal:\n");
    for(d = 0; d < c; d++)
    {
        i = 0;
        j = d;
        while(i < r && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    for(d = 1; d < r; d++)
    {
        i = d;
        j = c - 1;
        while(i < r && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }
    return 0;
}