#include <stdio.h>

void greet(char name[20]);
void add(int a, int b, int c);

int main() {
    char userName[20];

    printf("Please state your name: ");
    scanf("%s", userName);
    greet(userName);
    add(15, 15, 15); //You can change these if you want
    printf("\nWow, this actually works...\n");
    return 0;
}

void greet(char name[20]) {
    printf("Ok, hello %s!\n", name);
}
void add(int a, int b, int c) {
    int result=a+b+c;
    printf("%d+%d+%d=%d", a, b, c, result);
}