#include <stdio.h>

int main() {
    int num = 1;     
    int *ptr;         

    ptr = &num;      

    printf("Initial value of num: %d\n", num);
    printf("Address of num: %p\n", ptr);

    *ptr = 5;  

    printf("Modified value of num via pointer: %d\n", num);

    return 0;
}
