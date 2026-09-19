#include <stdio.h>
int main() {
    char str[100];
    int count = 0;
    fgets(str, sizeof(str), stdin);
    while (str[count] != '\0') {
        count++;
    }
    printf("%d", count - 1);
    return 0;
}