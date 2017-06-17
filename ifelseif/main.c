#include <stdio.h>

int main() {
    long propertyValue=575000;
    float taxRate;

    if(propertyValue < 125000) {
        taxRate=.05;
    } else if(propertyValue > 125000 && propertyValue < 225000) {
        taxRate=.075;
    } else if(propertyValue >225000) {
        taxRate=.1;
    }

    float taxes = taxRate * propertyValue;
    float TaxRate=taxRate * 100;
    printf("You must pay $%0.2f in taxes this month,", taxes);
    printf(" since your tax rate is %0.1f percent.", TaxRate);
    return 0;
}