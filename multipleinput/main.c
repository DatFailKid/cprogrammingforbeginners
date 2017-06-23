#include <stdio.h>

int main() {
    float operand1, operand2;

    printf("Enter two numbers to multiply: ");
    scanf("%f %f", &operand1, &operand2);

    float result=operand1*operand2;

    printf("%f * %f = %f", operand1, operand2, result);
    return 0;
}