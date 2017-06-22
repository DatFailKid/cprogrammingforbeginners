#include <stdio.h>

int main() {
    float gpas[]={0.1f,1.2f,2.3f,3.4f,4.5f};
    float total=0.0;

    for (int i = 0; i < 5 ; ++i) {
        printf("GPA %d: %0.1f\n", (i+1), gpas[i]);
        total += gpas[i];
    }

    printf("The sum of the GPAs in this program is %0.1f.", total);
    printf("\nTherefore, the average of those GPAs is %f", total/5.0);

    return 0;
}