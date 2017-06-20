#include <stdio.h>

int main() {
    int x=0;

    while ( x < 101 ) {
        if(x%2!=0) {
            x++;
            continue;
        }

        printf("%d\n", x);
        x++;
    }

    /*while ( x < 101 ) {
        if(x==51) {
            printf("LOOP HAS BEEN BROKEN");
            break; //Ends loop
        }

        printf( "%d\n", x);
        x++;
    } */
    return 0;
}