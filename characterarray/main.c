#include <stdio.h>

int main() {
    char name[14]="Myron Stewart"; //Always make the number one more than how many characters there actually are, there needs to be space for a null character

    char lName[]={   'S',
                     't',
                     'e',
                     'w',
                     'a',
                     'r',
                     't',
                     '\0'};

    printf("My name is %s.\n", name);

    for (int i = 0; i < 7; ++i) {
        printf("Letter #%d of my last name is %c.\n", (i+1), lName[i]);
    }
    return 0;
}