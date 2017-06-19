#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m" //This will be for 'F'
#define ANSI_COLOR_GREEN   "\x1b[32m" //This will be for 'A'
#define ANSI_COLOR_YELLOW  "\x1b[33m" //This will be for 'S'
#define ANSI_COLOR_BLUE    "\x1b[34m" //This will be for 'D'
#define ANSI_COLOR_MAGENTA "\x1b[35m" //This will be for 'C'
#define ANSI_COLOR_CYAN    "\x1b[36m" //This will be for 'B'
#define ANSI_COLOR_RESET   "\x1b[0m" //Keep the rest of these in here, I could use these later, but this only works on Linux, I think

int main() {
    int pcSpace=3500;
    int roomSpace=50000;
    int spaceNeed=pcSpace-roomSpace;
    double bankAccount=1299.99;
    double pcPrice;
    pcPrice = 8000;
    double priceNeed;
    priceNeed = pcPrice - bankAccount;

    printf("You have $%0.2f in your bank account", bankAccount);
    printf(", and the PC costs $%0.2f", pcPrice);
    printf("\nYour room has %d units of space left in it", roomSpace);
    printf(", and the PC you got takes up %d units of space.", pcSpace);

    if (bankAccount > pcPrice) {
        printf("\nThankfully, you have enough money to get this PC.");
    }
    else if (bankAccount < pcPrice) {
        printf("\nYou do not have enough money to get this, you need to earn $%0.2f more to get this.", priceNeed);
    }
    else if (bankAccount == pcPrice) {
        printf("\nYou have just enough to get this, I suggest that you earn more money before getting this.");
    }

    if (roomSpace > pcSpace) {
        printf("\nThankfully, you have enough room to move in your PC.");
    }
    else if (roomSpace < pcSpace) {
    printf("\nUnfortunately, you don't have enough room for your PC, you need to clear up %d more units of space.", spaceNeed);
    }
    
    return 0;
}