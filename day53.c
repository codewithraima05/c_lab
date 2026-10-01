#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int total = 0;

    // Calculate sum of entire array
    for(int i = 0; i < n; i++)
    {
        total = total + nums[i];
    }

    int leftsum = 0;
    int pivot = -1;

    for(int i = 0; i < n; i++)
    {
        // Sum on right side
        int rightsum = total - leftsum - nums[i];

        if(leftsum == rightsum)
        {
            pivot = i;
            break;  // leftmost pivot found
        }

        // Add current element to left sum
        leftsum = leftsum + nums[i];
    }

    printf("%d\n", pivot);

    return 0;
}