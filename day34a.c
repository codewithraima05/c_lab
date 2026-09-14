#include <stdio.h>
int main()
{
    int n, i, v , p;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n + 1];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter position: ");
    scanf("%d", &p);
    printf("Enter element: ");
    scanf("%d", &v);
    for(i = n; i >= p; i--)
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