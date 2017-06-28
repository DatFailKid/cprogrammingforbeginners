#include <stdio.h>

int main() {
    FILE *pFILE;
    char input[81];

    int line=1;

    pFILE = fopen("/home/myronjr/CLionProjects/stuff/Untitled 1.txt", "r"); //On Unbuntu, use this path directory

    if (pFILE != NULL) {
        //Process File
        while (!feof(pFILE)) {
            fgets(input, 81, pFILE);
            /*First Argument (input): Where is this file going?
             * Second Argument (81): How many bites are we reading per line? (Or what's the maximum number of bites the program will read? In this case, characters)
             * Third Argument (pFILE): File pointer */
            printf("%d: %s",line, input);
            line++;
        }

        fclose(pFILE); //Closing the file, keeping the file open longer than needed can cause problems
    } else {
        //ID Error
        printf("ID Error: Please check the path of the file and try again.");
    }
    return 0;
}