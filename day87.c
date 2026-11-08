#include <stdio.h>
#include <string.h>
enum Role {
    ADMIN,
    USER,
    GUEST
};
int main() {
    char choice[20];
    enum Role role;
    scanf("%s", choice);
    if (strcmp(choice, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(choice, "USER") == 0)
        role = USER;
    else if (strcmp(choice, "GUEST") == 0)
        role = GUEST;
    else {
        printf("Invalid role");
        return 0;
    }
    switch (role) {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }
    return 0;
}