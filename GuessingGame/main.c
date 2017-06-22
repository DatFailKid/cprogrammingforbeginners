#include <stdio.h>

#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    //Original Game
    /*char name[1]="";

    for (int i = ; i < 15; ++i) {
        printf("\n");
        printf("Enter a letter: ");

         scanf("%s", &name);

        printf("You entered %c.", name[0]);

         if (i != 15) {
             printf("\nYou can change this character if you want.");
             continue;
         }

         if (i == 15) {
             printf("That was your last change. Your final character was %s", name);
             break;
         }


        /*if (name == '\n')
        {
            break;
        } */

    //You can change the guessing number if you want to.
    int guess=37;
    int user;

    printf(ANSI_COLOR_YELLOW"The Guessing Game"ANSI_COLOR_RESET);
    printf("\nI am thinking of a number between 1 and 100. Guess it! You have 20 guesses.");
    printf("\nI have little patience. If you type in a letter, you'll be sent out of my tent.");

    for (int g = 0; g < 20; ++g) {
        printf("\nGuess %d: ", (g+1));
        scanf("%d", &user);

        if (user == guess) {
            printf("...");
            printf("\nYou actually guessed my number...");
            printf("\nCongrats >:(");
            printf("\nNEXT!");
            break;
        }
        if (user != guess) {
            printf("\nNope! Guess again!");
        }
        if (user <= 0 || user > 100) {
            printf("\nThat number is not between 1 and 100.");
        }
        if (g == 19) {
            printf("\nOk, that's it, out of my tent!\nNEXT!");
            break;
        }
    }

    return 0;
}