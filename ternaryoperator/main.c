#include <stdio.h>

int main() {
    int age=14;
    char canVote=' '; //Since this doesn't have a letter in it, it must have some type of character in it, so put a space there.

    int temp=80;
    char isFreeze=' ';

    float taxRate;
    long propertyValue=325000;

    canVote=(age>=18)?'t' : 'f';

    isFreeze=(temp<32)?'y' : 'n';

    taxRate=(propertyValue>325000)? .075 : .05;

    int taxes=propertyValue * taxRate;

    printf("This person can vote (t/f): %c", canVote);
    printf("\nAt the time this program was made, was it freezing outside? (y/n)");
    printf("\n%c", isFreeze);
    printf("\nYou must pay $%d this month", taxes);
    printf(" since your tax rate is %0.3f", taxRate);

    return 0;
}