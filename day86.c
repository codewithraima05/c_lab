#include <stdio.h>
#include <string.h>

enum Menu {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char choice[20];
    int a, b, result;
    enum Menu operation;

    scanf("%s %d %d", choice, &a, &b);

    if (strcmp(choice, "ADD") == 0)
        operation = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        operation = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        operation = MULTIPLY;
    else {
        printf("Invalid choice");
        return 0;
    }

    switch (operation) {
        case ADD:
            result = a + b;
            break;

        case SUBTRACT:
            result = a - b;
            break;

        case MULTIPLY:
            result = a * b;
            break;
    }

    printf("%d", result);

    return 0;
}