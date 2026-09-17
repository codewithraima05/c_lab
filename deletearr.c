#include <stdio.h>
int main() {
    int a[100], n, p, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for(i = 0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the position to delete: ");
    scanf("%d", &p);
    for(i = p; i<n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    printf("Array after deletion:\n");
    for(i = 0; i<n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}