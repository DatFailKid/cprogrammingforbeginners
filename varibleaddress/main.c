#include <stdio.h>

int main() {
    int first=425;
    int second=-672;
    char third='c';
    float fourth=2.771f;
    char fifth[]="DatFailKid";

    printf("The memory address of 'first', in integers, is %u\n", &first);
    printf("The memory address of 'second', in integers, is %u\n", &second);
    printf("The memory address of 'third', in integers, is %u\n", &third);
    printf("The memory address of 'fourth', in integers, is %u\n", &fourth);
    printf("The memory address of 'fifth', in integers, is %u\n", &fifth);

    int *pointfirst=&first;
    int *pointsecond=&second;
    char *pointthird=&third;
    float *pointfourth=&fourth;
    //char *pointfifth[]=&fifth[];

    printf("The Size of 'first' is %d\n", sizeof(first));
    printf("The Size of 'second' is %d\n", sizeof(second));
    printf("The Size of 'third' is %d\n", sizeof(third));
    printf("The Size of 'fourth' is %d\n", sizeof(fourth));

    return 0;
}