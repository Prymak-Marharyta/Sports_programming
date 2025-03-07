#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("Bigger number: %d", a);
    } else if (b > a) {
        printf("Bigger number: %d", b);
    } else {
        printf("The numbers are equal");
    }
    return 0;
}