#include <stdio.h>

int main() {
    int playScore=15000;

    int *pointplayer=&playScore;

    printf("Address of the Player's Score: %p\n", pointplayer);
    printf("Player Score Value: %d\n", playScore);
    printf("Player Score Value (through pointer): %d\n", *pointplayer); //*=dereferencing operator

    playScore = playScore+1500;

    printf("                                      +1500\n");
    printf("SCORE: %d\n", playScore);
    printf("SCORE(point): %d\n", *pointplayer);

    *pointplayer = *pointplayer-1000;

    printf("              -1000\n");
    printf("SCORE: %d\n", playScore);
    printf("SCORE(point): %d\n", *pointplayer);

    //DO NOT DO THIS! (Move pointer mathematically)
    pointplayer = pointplayer-10;

    printf("                -10\n");
    printf("SCORE: %d\n", playScore);
    printf("SCORE(point): %d\n", *pointplayer); //The value shouldn't make sense, as it's dereferencing from a different place.
    return 0;
}