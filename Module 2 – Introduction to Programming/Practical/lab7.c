#include <stdio.h>

int main() {
    int i;

    printf("Using break statement (stop at 5)::\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            break; 
        }
        printf("%d ", i);
    }
    printf("\n\n");

    printf("Using continue statement (skip 3)::\n");
    for (i = 1; i <= 10; i++) {
        if (i == 3) {
            continue; 
        }
        printf("%d ", i);
    }
}
