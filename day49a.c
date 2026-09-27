#include <stdio.h>

int main() {
    char name[100];
    int i;

    fgets(name, sizeof(name), stdin);

    // First character is the first initial
    if (name[0] != ' ')
        printf("%c.", name[0]);

    // Character after a space is the next initial
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n') {
            printf("%c.", name[i]);
        }
    }

    return 0;
}