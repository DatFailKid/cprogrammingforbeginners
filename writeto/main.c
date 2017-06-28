#include <stdio.h>

int main() {
    FILE *pFILE;

    pFILE=fopen("/home/myronjr/CLionProjects/stuff/Untitled 2.txt", "a"); //"a" append mode; "" File name

    if (pFILE != NULL) {
        char year[]="Grade:";
        int grade=9;     //File operations

        fprintf(pFILE, "%s %d\n", year, grade); //You can the integer types or info if you want
        /*First argument (pFILE): File pointer
         * Second argument ("%s, %d", year, gpa): What is being written? */
        printf("Data recorded.");
        fclose(pFILE);
    } else {
        printf("ID ERROR: Please review file path and try again");
    }
    return 0;
}