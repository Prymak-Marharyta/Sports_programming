#include <stdio.h>

int main() {
    float price, percent, discount, finalprice;

    printf("Enter the cost of the product: ");
    scanf("%f", &price);

    printf("Enter the discount percentage: ");
    scanf("%f", &percent);

    discount = (price * percent) / 100;
    finalprice = price - discount;

    printf("Final cost of the product: %.2f uah", finalprice);

    return 0;
}