#include <stdio.h>
#include <string.h>

int main() {
    char songname[]="Can You Feel The Sunshine?";
    int slength=strlen(songname); //You don't have to find a string length like this.

    printf("This song name, '%s', has %d characters in it, including the 'null' character.", songname, slength);

    char name[15]="Ash"; //Extra characters are added to allow "animal" to be put at the end of it.
    char animal[]=" teh doggo";

    strncat(name, animal, 11); //Concatenation: sticking a string to the end of another.

    printf("\nI have a dog named %s", name);
    printf(", and his name takes up %d characters, including the 'null' character.", strlen(name));

    char shirtColor[]="Blue";
    char friendShirt[]="Green";

    if (strcmp(shirtColor, friendShirt)==0) { //String Comparison function (NOTE: This IS case-sensitive).
        /*If these are the same, this will equal '0'.
        This is useful for login info*/

        printf("\nYou and your friend are wearing the same shirt color.");
    } else {
        printf("\nYou and your friend are not wearing the same shirt color.");
    }
    return 0;
}