#include <stdio.h>
#include <memory.h>

int main() {
    int age=14;
    int ageStart=age-1;

    char name[]="Myron Stewart"; //Always type a char declaration as "char {name}[]= {value}

    printf("My name is %s,", name);
    printf(" I was %d when I made this program,", age);

    char date[]="June 16, 2017"; //Always type a char declaration as "char {name}[]= {value}

    int length=strlen(name);
    int lendate=strlen(date);

    printf(" and the date was %s.", date);
    printf("\nI started learning C when I was %d.", ageStart);
    printf("\nSo I will now tell you some random things, because I can.");
    printf("\nMy name has %d characters in it,", length);
    printf(" and the date of when I made this has %d characters in it.", lendate);
    return 0;
}