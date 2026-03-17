#include <stdio.h>

int main(void){

    int n, triangularNumber_1, triangularNumber_2;
    triangularNumber_1 = 0;
    triangularNumber_2 = 0;

    for ( n = 1; n <= 200; n++ ){

        triangularNumber_1 += n;
    }
    printf("The 200th Triangular Number is: %i\n", triangularNumber_1);


    printf(" TABLE OF TRIANGULAR NUMBERS\n");
    printf(" n             Sum from 1 to n\n");
    printf("---           -----------------\n");
    for ( n = 1; n <= 10; n++ ) {

        triangularNumber_2 += n;
        printf("%2i              %i\n", n, triangularNumber_2); // right justfication with %2i instead of just %i

    } //with braces in a for loop everything inside the braces belong to for loop

    return 0;
}