#include <stdio.h>

int main()
{
    int n, i,v;
    int lb, ub , mid;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &v);
    lb= 0;
    ub= n - 1;
    while(lb<=ub)
    {
        mid = (lb + ub) / 2;

        if(arr[mid] == v)
        {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if(arr[mid] < v)
        {
            lb = mid + 1;
        }
        else
        {
            ub= mid - 1;
        }
    }

    printf("Element not found");

    return 0;
}