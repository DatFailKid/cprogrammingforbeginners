#include <stdio.h>

void displayinfo();

int age=14; //This variable can be accessed by all functions (Global variable)
float gpa = 3.55f;
char grade= 'A';

int main() {
    //Both of these integers have a local scope. They can only be recognized in this function.
    /*
    float gpa = 3.55f;
    char grade= 'A';
     */
    displayinfo();

    return 0;
}

void displayinfo() {
    printf("I was %d when I made this.\n", age);
    printf("My GPA WAS NOT %0.2f.\n", gpa);
    printf("I finished middle school with all %c's.\n", grade);
}