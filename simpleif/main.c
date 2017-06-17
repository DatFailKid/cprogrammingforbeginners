#include <stdio.h>
// None of these should come out to be true, you can switch around the values if you want, though.
int main() {
    int age=14;
    int ageToVote=18;
    int ageToDrink=21;
    int ageDad=40;

    /*
     * >    Greater than
     * <    Less than
     * ==    Equal to (It HAS to appear like this)
     * >=   Greater than or equal to
     * <=   Less than or equal to
     * =    ASSIGNMENT OPERATOR
     * !=   Not equal to
     * &&   and (ex. > && < ...)
     * ||   or
     */

    if(age >= ageToVote)
    {
        printf("You are old enough to vote,");
    }

    if(age >= ageToDrink) {
        printf(" and drink.");
    }

    if(ageDad >= 60) {
        printf("At the time this was created, Dad was a senior.");
    }
    return 0;
}