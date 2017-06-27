#include <stdio.h>

int main() {
    char username[]="DatFailKid"; //C doesn't really have strings, character arrays are used as substitutes for that

    //You can't initialize a string like this:
    /*char user[]=username;*/

    printf("User: %s\n", username);
    printf("Pointer to User: %p\n", username);
    return 0;
}