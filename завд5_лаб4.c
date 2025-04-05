#include <stdio.h>

int main() {
    int number;
    int num1, num2, num3, sum;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    num1 = number / 100;
    num2 = (number / 10) % 10;
    num3 = number % 10; 

    sum = num1 + num2 + num3;

    printf("Sum of numbers: %d", sum);

    return 0;
}