#include <stdio.h>

int main()
{
    int a,b;
    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\n****Arithmetic Operations****");
    printf("\n%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    printf("\n****Relational Operations****");
    printf("\n%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("%d < %d  : %d\n", a, b, a < b);

    printf("\n****Logical Operations****");
     if (a > 0 && b > 0) {
        printf("\nBoth %d and %d are positive numbers\n", a, b);
    } else {
        printf("At least one of %d or %d is not positive\n", a, b);
    }

     if (a % 5 == 0 || b % 5 == 0) {
        printf("\nAt least one of %d or %d is divisible by 5\n", a, b);
    } else {
        printf("Both %d and %d are not divisible by 5\n", a, b);
    }
}