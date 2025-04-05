#include <stdio.h>

int main() {
    int dateofbirth;
    int currentyear = 2025;
    int age;

    printf("Enter your year of birth: ");
    scanf("%d", &dateofbirth);

    age = currentyear - dateofbirth;

    printf("Your age: %d years", age);

    return 0;
}