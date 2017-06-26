#include <stdio.h>
#include <stdlib.h>

int main() {
    void *pAllcMem;

    pAllcMem=malloc(2000);

    printf("Memory block starts at address %p\n", pAllcMem);

    free(pAllcMem);

    //You need to free up memory that you allocate, or else it's a "Memory Leak". Very important in objective C and iOS development
    //You can't free up unallocated memory

    pAllcMem = NULL;
    return 0;
}