#include <stdio.h>
#include <string.h>

int main() {
    char name[]= "Myron Stewart";
    printf ("My name is %s.", name); //"%s": Used for strings

    int length;
    length = strlen(name); //"strlen": Shows the number of CHARACTERS (Including spaces) in a string

    printf("\nMy name has %d characters in my name.", length);
    return 0;
}