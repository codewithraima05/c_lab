#include <stdio.h>

int main()
{
    int n, i, v , p;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter elements in sorted order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert: ");
    scanf("%d", &v);
    p= 0;
    while(p< n && arr[p] < v)
    {
        p++;
    }
    for(i = n; i > p; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[p] = v;
    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}