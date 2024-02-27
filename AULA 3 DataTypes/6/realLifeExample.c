#include <stdio.h>

int main() {
    int items = 20;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    printf("Number of items: %d\n", items);
    printf("Cost per item: %2.f\n", cost_per_item);
    printf("total cost: %2.f%c\n", total_cost, currency);

    return 0;
}