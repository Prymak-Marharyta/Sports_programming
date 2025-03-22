#include <stdio.h>

int main() {
    char a;

    printf("Enter a character: ");
    scanf("%c", &a);

    printf("Next character: %c", a + 1);

    return 0;
}