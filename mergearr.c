#include <stdio.h>
int main() {
    int n1, n2, i, j, p = 0;
    int x[100], y[100], z[200];
    printf("ENTER THE SIZE OF FIRST ARRAY");
    scanf("%d", &n1);
printf("ENTER THE ELEMENTS OF FIRST ARRAY");
    for(i = 0; i < n1; i++)
        scanf("%d", &x[i]);
        printf("ENTER THE SIZE OF SECOND ARRAY");
    scanf("%d", &n2);
    printf("ENTER THE ELEMENTS OF SECOND ARRAY");
    for(i = 0; i < n2; i++){
        scanf("%d", &y[i]);
    }
    for(i = 0; i < n1; i++){
        z[p++] = x[i];}
    for(i = 0; i < n2; i++) {
        int found= 0;
        for(j = 0; j < p; j++) {
            if(y[i] == z[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0)
            z[p++] = y[i];
    }
    for(i = 0; i < p; i++)
        printf("%d ", z[i]);
    return 0;
}





