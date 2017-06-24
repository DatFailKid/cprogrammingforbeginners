#include <stdio.h>

int square(int x);

int main() {
    printf("Enter your number to be squared: ");
    int number;
    scanf("%d", &number);
    square(number);
    int result = square(number);
    printf("\n%d^2=%d", number, result);

    return 0;
}

int square(int x) {
    return (x*x);
}