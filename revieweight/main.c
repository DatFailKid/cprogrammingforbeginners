#include <stdio.h>
#include <string.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main() {
    char password[]="incorrect";
    char user[]=" ";
    char username[]="Failure";
    char pass[]=" ";

    printf(ANSI_COLOR_RED"THIS IS YOUR LAST ATTEMPT. YOUR ACCOUNT WILL BE LOCKED UP IF YOUR PASSWORD IS INCORRECT."ANSI_COLOR_RESET);
    printf(ANSI_COLOR_CYAN"\nHint: Your name has %d characters in it."ANSI_COLOR_RESET, strlen(username));
    printf("\nENTER YOUR USERNAME.");
    printf("\nUsername: ");
    scanf("%s", user);
    printf("\nENTER YOUR PASSWORD.");
    printf(ANSI_COLOR_CYAN"\nHint: Your password has %d character in it."ANSI_COLOR_RESET, strlen(password));
    printf("\nPassword: ");
    scanf("%s", pass);

    if ((strcmp(password, pass)==0) && strcmp(username, user)==0) {
        printf(ANSI_COLOR_GREEN"\nWelcome to the Failed Network!"ANSI_COLOR_RESET);
    } else {
        printf(ANSI_COLOR_RED"\nEither your username or password is incorrect. Your account will now be locked up."ANSI_COLOR_RESET);
    }
    return 0;
}