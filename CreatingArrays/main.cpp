#include <iostream>

//Author Myron Stewart Jr.

int main() {
    //Both are ways to make arrays
    int ages[5]; // [5]: Integer with length of five


    ages[0] = 13; // Me
    ages[1] = 14; // Josh
    ages[2] = 11; // Sarah
    ages[3] = 11; // Alex
    ages[4] = 9; // Mirah

    float GPAs[] = {3.14f,2.55f,3.44f,3.99f,2.1f,1.75f};
    printf("I was %d years old when I made this\n", ages[0]);
    printf("It's currently 2016, and my brother, Josh, is %d\n", ages[1]);
    printf("One of my sisters, Alex, is %d\n", ages[3]);
    printf("Sarah, another one of my sisters, is %d\n", ages[2]);
    printf("Mirah, the smallest of the family, is %d\n", ages[4]);
    printf("I wonder if someone's GPA was ever %0.2f, %0.2f, %0.2f, %0.2f, %0.2f, or %0.2f\n", GPAs[0], GPAs[1], GPAs[2], GPAs[3], GPAs[4], GPAs[5]);
}