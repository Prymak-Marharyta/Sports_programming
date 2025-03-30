#include <stdio.h>

int main() {
    double radius;
    const double PI = 3.14;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.");
    } else {
        double area = PI * radius * radius;
        printf("Area of a circle with radius %.2f = %.2f", radius, area);
    }
    
    return 0;
}
