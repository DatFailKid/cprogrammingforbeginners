#include <stdio.h>

int main() {
    int x; //MAKE SURE TO DO THIS FIRST!!!
    int i;

    for (x = 0; x < 501; x++) {

        printf("%d\n", x);
    }

    printf("\n");

    for (i=1000; i >-1; i=i-13) {
        printf("%d\n", i);
    }
    return 0;
}