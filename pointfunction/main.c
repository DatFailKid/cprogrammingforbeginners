#include <stdio.h>

void grandTotal(float subtotal, float tax, float *ptotal);

int main() {
    float subtotal=72.95f;
    float tax=0.07;
    float total;
    grandTotal(subtotal, tax, &total);

    printf("Subtotal: $%0.2f\n", subtotal);
    printf("Tax: $%0.2f\n", (subtotal*tax));
    printf("Total: $%0.2f\n", total);
    return 0;
}

void grandTotal(float subtotal, float tax, float *ptotal /*Dereference*/) {
    *ptotal=subtotal+(subtotal*tax);
}