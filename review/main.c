#include <stdio.h>
#include <string.h>

void write();

char user[1000];

FILE *pFile;

int main() {

    const char *response=" ";
    char End[]="end";
    char Repeat[]="repeat";

    printf("Create a file on your PC and name it. Press Enter when you're done.\n");
    getchar();

    pFile=fopen("/home/myronjr/CLionProjects/stuff/test.txt", "a");

    if (pFile != NULL) {
        while (!feof(pFile)) {
            printf("Write something up to 1000 characters: \n");
            scanf("%s", user);
            write();

            printf("Enter '/end' to stop. Enter '/repeat' to continue ");
            scanf("%s", response);

            if (strcmp(response, End)==0) {
                break;
            } if (strcmp(response, Repeat)==0) {
                continue;
            } else {
                printf("Response not recognized by system");
            }
        }

    } else {
        printf("ERROR: THERE IS NO FILE WITH THAT NAME. CHECK THE PATH AND TRY AGAIN\n");
    }
    return 0;
}

void write() {
    fprintf(pFile, "%s", user);
    fgets(user, 1000, pFile);
    printf("You typed '%s'\n", user);
    fclose(pFile);
}