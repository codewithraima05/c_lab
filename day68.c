#include <stdio.h>
int main() {
    int nums[100], n, i;
    int expectedSum, actualSum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actualSum += nums[i];
    }
    expectedSum = n * (n + 1) / 2;
    printf("%d", expectedSum - actualSum);
    return 0;
}