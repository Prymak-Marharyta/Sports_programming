#include <stdio.h>

int main() {
    float cel, fah;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &cel);
    fah = cel * 9 / 5 + 32;
    printf("Temperature in Fahrenheit: %.2f", fah);
    return 0;
}