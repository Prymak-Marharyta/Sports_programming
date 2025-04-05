#include <stdio.h>

int main() {
    int price = 450;
    int percent = 15;

    int discount = (price * percent) / 100;
    int finalprice = price - discount;

    printf("Discounted price: %d uah", finalprice);

    return 0;
}
