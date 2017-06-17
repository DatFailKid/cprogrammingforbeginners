#include <stdio.h>

int main() {
    char letterGrade='f';

    switch (letterGrade) { //switch: This variable will determine the outcome
        case 'a':;
        case 'A':;
            printf("Great job!");
            break;

        case 'b':;
        case 'B':;
            printf("Good job, but you can do better!");
            break;

        case 'c':;
        case 'C':;
            printf("That's OK, you can do better, though.");
            break;

        case 'd':;
        case 'D':;
            printf("Come on! You're not trying hard enough!");
            break;

        case 'f':;
        case 'F':;
            printf("YOU WILL DO BETTER, OR YOU SHALL STAY BACK, OR GO BACK A GRADE.");
            break;

        default:;   //If not of these come out to be true, then this occurs
            printf("This isn't even a grade...");
            break;

    }
    return 0;
}