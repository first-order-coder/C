#include <stdio.h>

int main(void) {

    int digits, right_digit;

    printf("Enter the digits:\n");
    scanf("%i", &digits);
    
    while (digits != 0){
        right_digit = digits % 10;
        printf("%i", right_digit); // each following digit is displayed in the same line as previous since no newline character
        digits = digits / 10;
    }
    
    printf ("\n");
    return 0;
}