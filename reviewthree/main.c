#include <stdio.h>

int main() {

    int kidcount;

    printf("I am 3, and ");

    for (kidcount = 0; kidcount < 10001; kidcount++)
    {
        printf("I can count to %d\n", kidcount);

        if (kidcount == 999) {
            printf("Nevermind, I can't count that high...");
            break;
        }
    }

    return 0;
}