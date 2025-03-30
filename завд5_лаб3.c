#include <stdio.h>

int main() {
    char a;
    
    printf("Enter a lowercase letter of the English alphabet: ");
    scanf("%c", &a);

    if (a >= 'a' && a <= 'z') {
        a = a - ('a' - 'A'); 
        printf("Capital letter of the alphabet: %c", a);
    } else {
        printf("Error. Please enter a lowercase letter of the English alphabet");
    }

    return 0;
}