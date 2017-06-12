#include <stdio.h>

int main() {
    int playerScore;            //Variable Declaration
    playerScore = 26000;        // "=" is the assignment operator

    char firstInitial;      //char: holds only one character or small number
    firstInitial = 'M';

    short age=14;      //"short" integer: 16 bits (2 bites), between -32768 and 32767; "age=14": combined declaration and initialization
    long nationalDebt=925703559790; //"long" integer: 32 bits (4 bites) or 64 bits (8 bites); Sometimes both are the same size/space

    float gpa=0.01;
    double taxRate=0.07; //has more precession than a float; more decimal places


    printf("Score: %d", playerScore);        //"%d": signifier to output an integer
    printf("\nFirst Initial: %c", firstInitial);      //"%c": signifier or specifier for character or "char" variable
    printf("\nI was %d when I made this program. I had learned how to use GitHub beforehand.", age);
    printf("\nI think the National Debt in the USA is $%ld", nationalDebt);         //"%ld": signifier or specifier for long integer
    printf("\nI heard this one loser got a GPA of %f", gpa);        //"%f": signifier or specifier for float
    printf("\nThe tax rate here in North Carolina is %f", taxRate);


    return 0;
}