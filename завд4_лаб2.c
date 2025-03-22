#include <stdio.h>

int main() {
    int a;
    float b;
    float sum;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a fractional number: ");
    scanf("%f", &b);

    sum = (float)a + b;

    printf("Sum: %.2f", sum);

    return 0;
}