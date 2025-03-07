#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("An even number");
    } else {
        printf("An odd number");
    }
    return 0;
}