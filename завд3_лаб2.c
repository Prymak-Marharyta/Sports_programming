#include <stdio.h>

int main() {
    char a;

    printf("Enter a character: ");
    scanf("%c", &a); 

    printf("Symbol: %c\n", a);
    printf("ASCII code: %d", a);

    return 0;
}