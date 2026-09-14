#include <stdio.h>

int main()
{
    int n, i;
    int l, sl;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    l = arr[0];
    sl = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > l)
        {
            l= arr[i];
        }
    }
    for(i = 0; i < n; i++)
    {
        if(arr[i] > sl && arr[i] < l)
        {
            sl = arr[i];
        }
    }
    printf("Second largest element = %d", sl);
    return 0;
}