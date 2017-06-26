#include <stdio.h>

void space();

int yaboi=92264;
char petDog[]="Jake";

int main() {
    printf("I have a few belongings on this computer, and I'm going to tell you how much space they take up. Is this ok?");
    scanf("%d");
    space();
    return 0;
}

void space() {
    printf("\nI AM YA BOI, AND I TAKE UP %d BITES ON THIS COMPUTER", sizeof(yaboi));
    printf("\nI am Jake teh doggo and I take up %d bites on tis computer", sizeof(petDog));
}