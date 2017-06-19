#include <stdio.h>

int main() {
    int counter=-100;

    /*
    while (counter < 101) {
        printf("%i\n", counter);
        counter++;
    }
    return 0;
     */
    /*
    while  (counter > 0) {
        printf("%i\n", counter);
        //counter--;
        counter = counter - 10;
    } */

    
    do {
        printf("%i\n", counter);
        counter=counter-5;

    } while (counter>0); // This will at least output at least once, even if it evaluates as false. You can test this by setting "counter" to "-100"
}