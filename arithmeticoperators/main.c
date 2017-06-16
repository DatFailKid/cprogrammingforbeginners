#include <stdio.h>

int main() {
    int age=14;
    int ageNextYear=age + 1;        //Addition
    int ageFiveYearsAgo=age -5;        //Subtraction
    int twiceMyAge=age * 2;
    float oneThirdMyAge=age/3.0;
    int modNumber = 19%5;
    int someDogsAge = 49;
    someDogsAge++; //Increment operator, same as line 5

    //Modulus = Remainder

    printf("I was %d when I made this small program.", age);
    printf("\nFive years before, I was %d.", ageFiveYearsAgo);
    printf("\nA year after this, I will be %d.", ageNextYear);
    printf("\nIf you double my age, that would make me %d.", twiceMyAge);
    printf("\nIf you divide my age by three, you should get %f.", oneThirdMyAge);
    printf("\nThe result of the Modulus operation is %d", modNumber);
    printf("\nSomeone may have a dog that is %d years old, in dog years, I guess?", someDogsAge);
    someDogsAge--; //Decrement operator, see line 6
    printf("\nSomeone may have a dog that is %d years old, in dog years, I guess?", someDogsAge);
    return 0;
}