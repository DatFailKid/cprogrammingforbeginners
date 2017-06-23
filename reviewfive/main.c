#include <stdio.h>

#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_CYAN    "\x1b[36m"

int main() {
    char response;

    printf("This is Matt. He's a robot that you can talk to.\n");
    printf("Matt's responses will appear in ");
    printf(ANSI_COLOR_CYAN"cyan, "ANSI_COLOR_RESET);
    printf("and your responses will appear in ");
    printf(ANSI_COLOR_BLUE"blue.\n"ANSI_COLOR_RESET);
    printf("If you are ready, type in a character to begin. ");
    getchar();
    getchar();

    //Response template
    /*if (response=='') {
            printf(ANSI_COLOR_BLUE""ANSI_COLOR_RESET);
            printf(ANSI_COLOR_CYAN"\n"ANSI_COLOR_RESET);
            printf("\nA: \nB: \nC: \nD: ");
            printf("\nResponse: ");
            getchar();
            getchar();
            response=getchar();
            continue;
     */


    for (int i = 0; i < 25; ++i) {

        printf(ANSI_COLOR_CYAN"\nHello!\n"ANSI_COLOR_RESET);
        printf("A: Hello!\nB: Hi...\nC: (Kick)\nD: ...");
        printf("\nResponse: ");
        response=getchar();
        if (response=='a') {
            printf(ANSI_COLOR_BLUE"Hello!"ANSI_COLOR_RESET);
            printf(ANSI_COLOR_CYAN"\nHow are you today?"ANSI_COLOR_RESET);
            printf("\nA: Great!\nB: Ok, I guess...\nC: ...\nD: ...");
            printf("\nResponse: ");
            getchar();
            getchar();
            response=getchar();
            continue;
        }
        if (response=='b') {
            printf(ANSI_COLOR_BLUE"\nHi..."ANSI_COLOR_RESET);
            printf(ANSI_COLOR_CYAN"\nAre you ok?"ANSI_COLOR_RESET);
            printf("\nA: Yeah\nB: Yeah...\nC: No, because you're here.\nD: ...");
            printf("\nResponse: ");
            getchar();
            getchar();
            response=getchar();
            continue;
        }
        if (response=='c') {
            printf(ANSI_COLOR_BLUE"\n(You kick Matt)"ANSI_COLOR_RESET);
            printf(ANSI_COLOR_CYAN"\nOw! What was that for?!"ANSI_COLOR_RESET);
            printf("\nA: Sorry, I didn't mean to do that.\nB: I'm really sorry! I didn't mean to do that! >w<\nC: No reason. >:)\nD: You hit my sister!");
            printf("\nResponse: ");
            getchar();
            getchar();
            response = getchar();
            continue;
        }
        if (response=='d') {
            printf(ANSI_COLOR_BLUE"\n..."ANSI_COLOR_RESET);
            printf(ANSI_COLOR_CYAN"\nRather silent, are we?"ANSI_COLOR_RESET);
            printf("\nA: Hehe... I guess so.\nB: I guess.\nC: No, I'm just trying not to breath in your fumes.\nD: ...");
            printf("\nResponse: ");
            getchar();
            getchar();
            response=getchar();
            continue;
        }
        else {
            printf("\nERROR: RESPONSE NOT RECOGNIZED BY SYSTEM");
            printf("\nERR0R: RESP0NSE N0T REC0GN1ZED BY SYSTEM");
            printf("\n3RR0R: R35P0N53 N0T R3C0GN1Z3D BY 5Y5T3M");
            printf("\n3RR0R: 10101101 001 1010011101 11 000001");
            printf("\n1010101010110110110110110101010101101101");
            break;
        }
    }
    return 0;
}