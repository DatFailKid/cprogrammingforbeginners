#include <stdio.h>

int main() {
    int ages[5];
    ages[0]=15;
    ages[1]=14;
    ages[2]=12;
    ages[3]=12;
    ages[4]=10;
    // ages[10]=213;

    float gpas[]={3.7f,2.0f,1.2f,5.0f,4.9f}; //shortcut method

    printf("My siblings' ages (As of June 2017), from oldest to youngest, are %d, ", ages[0]);
    printf("%d, ", ages[1]);
    printf("%d, ", ages[2]);
    printf("%d, ", ages[3]);
    printf("and %d.", ages[4]);
    printf("\nAnd this age shouldn't exist in this program: %d", ages[10]);
    printf("\n\nI found out what a few people's GPAs were in high school were. \nThey were %0.1f, ", gpas[0]);
    printf("%0.1f, ", gpas[1]);
    printf("%0.1f, ", gpas[2]);
    printf("%0.1f, ", gpas[3]);
    printf("and %0.1f.", gpas[4]);

    return 0;
}