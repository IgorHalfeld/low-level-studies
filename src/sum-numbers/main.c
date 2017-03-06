#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;
    printf("Sum of two numbers\n");

    printf("Type the first number: ");
    scanf("%d", &a);

    printf("Type the second number: ");
    scanf("%d", &b);

    printf("\n");

    printf("The sum of %d and %d is %d", a, b, a + b);
    return 0;
}
