#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2) {
        printf("An odd number");
    } else {
        printf("An even number");
    }
    return 0;
}
