#include <stdio.h>

int main() {
    //Single character input
    /*char response;

    printf("Do you play games? (Input 'Y' for Yes, or 'N' for No). \n");
    response = getchar(); //Not "getChar", "getchar"

    if (response=='Y' || response=='y') {
        printf("\nOh, ok! (Press Enter or Return to finish)");
    }

    if (response=='N' || response=='n') {
        printf("...\nYou are no longer my friend...\nBEGONE. (Press Enter or Return to finish)");
    }

    getchar();
    getchar(); */

    //String input (Multiple characters)
    /*char name[20];
    printf("Enter your first name: ");
    scanf("%19s", name); //Putting "19" stops the user from overrunning the system

    printf("Your name is %s", name); */

    int age;

    printf("Please enter your age: ");
    scanf("%d", &age); //If you're entering a numeric value, then you have to use the "address of" operator (&)

    age = age*7;

    printf("You are now a dog and are %d years old", age);

    return 0;
}