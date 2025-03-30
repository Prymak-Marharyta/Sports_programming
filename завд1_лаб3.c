#include <stdio.h>

int main() {
    int meters;
    
    printf("Enter length in meters: ");
    scanf("%d", &meters);

    int centimeters = meters * 100;
    int millimeters = meters * 1000;

    printf("%d meters = %d centimeters, %d millimeters", meters, centimeters, millimeters);
    
    return 0;
}