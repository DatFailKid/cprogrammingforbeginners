#include <stdio.h>

#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"


int userNum1;
int userNum2;

void add();
void subtract();
void multiply();
void divide();
void square();
void cube();

int main() {
    int function;
    printf(ANSI_COLOR_YELLOW"Basic Calculator+\n"ANSI_COLOR_RESET);
    printf("Choose a function:\n");
    printf("Function "ANSI_COLOR_GREEN "1"ANSI_COLOR_RESET ": Addition\n");
    printf("Function "ANSI_COLOR_GREEN "2"ANSI_COLOR_RESET ": Subtraction\n");
    printf("Function "ANSI_COLOR_GREEN "3"ANSI_COLOR_RESET ": Multiplication\n");
    printf("Function "ANSI_COLOR_GREEN "4"ANSI_COLOR_RESET ": Division\n");
    printf("Function "ANSI_COLOR_GREEN "5"ANSI_COLOR_RESET ": Square\n");
    printf("Function "ANSI_COLOR_GREEN "6"ANSI_COLOR_RESET ": Cube\n");
    printf("Enter "ANSI_COLOR_GREEN "7"ANSI_COLOR_RESET " to exit program\n");
    scanf("%d", &function);

    if (function==1) {
        add();
        getchar();
        getchar();
        return 0;
    }
    if (function==2) {
        subtract();
        getchar();
        getchar();
        return 0;
    }
    if (function==3) {
        multiply();
        getchar();
        getchar();
        return 0;
    }
    if (function==4) {
        divide();
        getchar();
        getchar();
        return 0;
    }
    if (function==5) {
        square();
        getchar();
        getchar();
        return 0;
    }
    if (function==6) {
        cube();
        getchar();
        getchar();
        return 0;
    }
    if (function==7) {
        return 0;
    }
    else {
        printf(ANSI_COLOR_RED"ERROR: NO SUCH FUNCTION"ANSI_COLOR_RESET);
        return 0;
    }
}

void add() {
    printf("\nEnter two numbers to add: ");
    scanf("%d %d", &userNum1, &userNum2);
    int result=userNum1+userNum2;
    printf("%d + %d = "ANSI_COLOR_GREEN"%d"ANSI_COLOR_RESET, userNum1, userNum2, result);
    printf("\nPress Enter to stop");
}
void subtract() {
    printf("\nEnter two numbers to subtract: ");
    scanf("%d %d", &userNum1, &userNum2);
    int result=userNum1-userNum2;
    printf("%d - %d = "ANSI_COLOR_GREEN"%d"ANSI_COLOR_RESET, userNum1, userNum2, result);
    printf("\nPress Enter to stop");
}
void multiply() {
    printf("\nEnter two numbers to multiply: ");
    scanf("%d %d", &userNum1, &userNum2);
    int result=userNum1*userNum2;
    printf("%d x %d = "ANSI_COLOR_GREEN"%d"ANSI_COLOR_RESET, userNum1, userNum2, result);
    printf("\nPress Enter to stop");
}
void divide() {
    printf("\nEnter two numbers to divide: ");
    scanf("%d %d", &userNum1, &userNum2);
    int result=userNum1/userNum2;
    printf("%d / %d = "ANSI_COLOR_GREEN"%d"ANSI_COLOR_RESET, userNum1, userNum2, result);
    printf("\nPress Enter to stop");
}
void square() {
    printf("\nEnter a number to square: ");
    scanf("%d", &userNum1);
    int result=userNum1*userNum1;
    printf("%d^2 = "ANSI_COLOR_GREEN "%d"ANSI_COLOR_RESET, userNum1, result);
    printf("\nPress Enter to stop");
}
void cube() {
    printf("Your cube root can go up to 1290.\n");
    printf("\nEnter a number to cube: ");
    scanf("%d", &userNum1);
    if (userNum1 > 1290) {
        printf("The answer for this operation will be incorrect.");
        printf("\nPress Enter to Stop");
        return;
    }
    int result=userNum1*userNum1*userNum1;
    printf("%d^3 = "ANSI_COLOR_GREEN "%d"ANSI_COLOR_RESET, userNum1, result);
    printf("\nPress Enter to stop");
}